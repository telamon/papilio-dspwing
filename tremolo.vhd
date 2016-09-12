----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
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
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

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
	signal width : unsigned(31 downto 0) := to_unsigned(19200,32); -- hardcode 500ms for now.
	signal counter : unsigned(31 downto 0);
	signal state : std_logic := '1'; -- silence when low, passthrough when high.
begin
	ctrl_out <= ctrl_in;
	process(sample_ready)
	begin
		if falling_edge(sample_ready) then
			if counter < width then
				counter <= counter + 1;
			else
				state <= NOT state;
				counter <= (others => '0');
			end if;
			
			if state = '1' then
				audio_out <= audio_in;
			else
				audio_out <= (others => '0');
			end if;
		end if;
	end process;
end Behavioral;

