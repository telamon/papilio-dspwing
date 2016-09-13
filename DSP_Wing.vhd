--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____
--  /   /\/   /
-- /___/  \  /    Vendor: Xilinx
-- \   \   \/     Version : 14.7
--  \   \         Application :
--  /   /         Filename : xil_12112_30
-- /___/   /\     Timestamp : 09/23/2014 15:24:59
-- \   \  /  \
--  \___\/\___\
--
--Command:
--Design Name: DSP_Wing
--this component expects an MCP3208 IC (12bit ADC) to be connected
--to the SPI bus
--

library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

library DesignLab;
use DesignLab.ALL;

entity DSP_Wing is
   port ( wishbone_in  : in    std_logic_vector (100 downto 0);
          wishbone_out : out   std_logic_vector (100 downto 0);

			 --Put your external connections here
			clk_96Mhz:      in std_logic;
			-- MCP3208 connections
         spi_clk : out  STD_LOGIC;
         spi_miso : in  STD_LOGIC;
         spi_mosi : out  STD_LOGIC;
         spi_cs : out  STD_LOGIC;

			-- Digital audio output.
			audio_data: out std_logic_vector(17 downto 0);
			
			-- A falling edge of sample_available signifies availability of a new audio sample in audio_data
			sample_available: out STD_LOGIC;
			
			-- fx controlbus 0  0000 0000 00000000
			--               en fxid prop value
			-- usage: write to the register0_in in the above sequence and then flip the en bit to 1 and back to 0 from C/C++
			fx_ctrl: out std_logic_vector(16 downto 0)
			);
end DSP_Wing;

architecture BEHAVIORAL of DSP_Wing is

	COMPONENT Wishbone_to_Registers
	PORT(
		wishbone_in : IN std_logic_vector(100 downto 0);
		register0_in : IN std_logic_vector(31 downto 0);
		register1_in : IN std_logic_vector(31 downto 0);
		register2_in : IN std_logic_vector(31 downto 0);
		wishbone_out : OUT std_logic_vector(100 downto 0);
		register0_out : OUT std_logic_vector(31 downto 0);
		register1_out : OUT std_logic_vector(31 downto 0);
		register2_out : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;

	signal register0_in: std_logic_vector(31 downto 0);
	signal register0_out: std_logic_vector(31 downto 0);
	signal register1_in: std_logic_vector(31 downto 0);
	signal register1_out: std_logic_vector(31 downto 0);
	signal register2_in: std_logic_vector(31 downto 0);
	signal register2_out: std_logic_vector(31 downto 0);


	--Put your unique register names here
	-- 0 clock,1 startbit,1 capture mode, 000 channel select, others => don't care.
	signal adc_shift_out : std_logic_vector( 19 downto 0 ):=  "01100011000000000000";
	signal adc_shift_in : std_logic_vector( 19 downto 0 ):= (others => '0');
	signal adc_state : std_logic_vector( 19 downto 0 ):= (0 => '1', others => '0');

	signal sampling_clk : std_logic := '0';
	signal counter : unsigned(8 downto 0);
begin

	--Put your code here
--	leds <= register0_out(3 downto 0);
--	register1_in(3 downto 0) <= buttons;


	spi_cs <= adc_state(0);
	spi_mosi <= adc_shift_out(19);
	spi_clk <= sampling_clk;
	sample_available <= adc_state(0);
	
	-- export low 17bits of register 0 as fx_ctrl signal
	fx_ctrl <= register0_out(16 downto 0);




	-- divide main clock from 96Mhz to 1.92Mhz = (20clocks per sample) = 96k samples/s = 96Khz audio
	process(clk_96Mhz)
	begin
		if rising_edge(clk_96Mhz) then
			if counter = 25 then
				sampling_clk <= NOT sampling_clk;
				counter <= (others => '0');
			else
				counter <= counter + 1;
			end if;
		end if;
	end process;


	-- capture samples
	process(sampling_clk)
	begin

		if falling_edge(sampling_clk) then
			-- Keep streaming the capture sequence
			adc_shift_out <= adc_shift_out(18 downto 0) & adc_shift_out(19);
			-- Keep reading the input from the adc into the 18bit buffer.
			adc_shift_in <= adc_shift_in(18 downto 0) & spi_miso;
			

			-- every 20 clocks a 1 will appear at index 0 of adc_state,
			-- that's the signal for us that we have a full audio-sample stored in adc_shift_in
			adc_state <= adc_state(0) & adc_state(19 downto 1);
			if(adc_state(0) = '1') then
				-- TODO: before dumping the sample into audio_data bus we should do some
				-- effects application so that this truly can be called an DSP wing.

				audio_data <= adc_shift_in(11 downto 0) & "000000" ;
				-- register1_in(17 downto 0) <= adc_shift_in(11 downto 0) & "000000" ; -- tried exporting audio data to zpuino no point.
			end if;
		end if;


	end process;

	-- Handle register controls
	--process(register0_out(0))
	--begin
	--	if rising_edge(register0_out(0)) then
	--		--if register0 (4 downto 1) to int == 1 , update the ADC channel select, we have 8 of them in total.
	--		--adc_shift_in(5 downto 1) <= register0_in(5 downto 1);
	--	end if;
	--end process;


	--Do not touch
	Inst_Wishbone_to_Registers: Wishbone_to_Registers PORT MAP(
		wishbone_in => wishbone_in,
		wishbone_out => wishbone_out,
		register0_in => register0_in,
		register0_out => register0_out,
		register1_in => register1_in,
		register1_out => register1_out,
		register2_in => register2_in,
		register2_out => register2_out
	);

end BEHAVIORAL;


