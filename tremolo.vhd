----------------------------------------------------------------------------------
-- Company: n/a
-- Engineer: Tony Ivanov (telamohn@gmail.com) 
-- 
-- Create Date:    23:09:05 09/12/2016 
-- Design Name: 
-- Module Name:    tremolo - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

-- Multipication and type convertions.
-- http://stackoverflow.com/questions/21792301/a-multiplication-of-a-binary-5-bit-number-by-2-in-vhdl

entity tremolo is
	port( audio_in: in std_logic_vector(17 downto 0);
			audio_out: out std_logic_vector(17 downto 0);
			sample_ready: in STD_LOGIC;
			ctrl_in: in std_logic_vector(16 downto 0);
			ctrl_out: out std_logic_vector(16 downto 0)
	);
end tremolo;

architecture Behavioral of tremolo is
	-- Pick a unique effect ID between 0..15
	constant FXID : std_logic_vector(3 downto 0) := "0001";
	-- declare all controllable parameters
	constant CTRL_ENABLE: std_logic_vector(3 downto 0) 	:= "0000"; -- 0
	constant CTRL_WIDTH: std_logic_vector(3 downto 0) 		:= "0001"; -- 1
	constant CTRL_DEPTH: std_logic_vector(3 downto 0) 		:= "0010"; -- 2
	
	
	signal width : unsigned(31 downto 0) := to_unsigned(48000,32); -- hardcode 500ms for now.
	signal counter : unsigned(31 downto 0);
	signal state : std_logic := '1'; -- silence when low, passthrough when high.
	signal enabled : std_logic :='0';
	signal param_value: unsigned(7 downto 0) := (others => '0');
begin
	-- pass controls to the next effect in chain
	ctrl_out <= ctrl_in;
	-- read ctrls
	process(ctrl_in(0))
	begin
		if falling_edge(ctrl_in(0)) then
			if ctrl_in(4 downto 1) = FXID then
			
				-- store away the ctrl signal's value component for later use.
				param_value <= unsigned(ctrl_in(16 downto 9));
				
				case ctrl_in(8 downto 5) is

					-- set enabled
					when CTRL_ENABLE =>
						enabled <= ctrl_in(9);					
					
					-- set tremolo pulse width.
					-- The sampling operates at 96Khz which means 96000 samples = 1 second. 
					-- multiply input value by 375 to allow user to set width between 0..96000; 256*375=96000
					when CTRL_WIDTH =>
						width <= resize( param_value * 375 ,width'length);
					when others => 
						Null;
				end case;
			end if;
		end if;
	end process;
	
	-- process audio
	process(sample_ready)
	begin
		if falling_edge(sample_ready) then
			if enabled = '1' then
				-- tremolo width based on (n)Samples
				if counter < width then
					counter <= counter + 1;
				else
					state <= NOT state;
					counter <= (others => '0');
				end if;
				
				-- State high: keep original signal.
				-- State low: apply volume modifications.
				if state = '1' then
					audio_out <= audio_in;
				else
					audio_out <= (others => '0');
				end if;
				
			else -- bypass this effect when disabled, just pass the original input sample on to out.
				audio_out <= audio_in;
			end if;
		end if;
	end process;
	
end Behavioral;

