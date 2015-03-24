
-- VHDL Instantiation Created from source file DSP_Wing.vhd -- 21:56:55 03/23/2015
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT DSP_Wing
	PORT(
		wishbone_in : IN std_logic_vector(100 downto 0);
		clk_96Mhz : IN std_logic;
		spi_miso : IN std_logic;          
		wishbone_out : OUT std_logic_vector(100 downto 0);
		spi_clk : OUT std_logic;
		spi_mosi : OUT std_logic;
		spi_cs : OUT std_logic;
		audio_data : OUT std_logic_vector(17 downto 0)
		);
	END COMPONENT;

	Inst_DSP_Wing: DSP_Wing PORT MAP(
		wishbone_in => ,
		wishbone_out => ,
		clk_96Mhz => ,
		spi_clk => ,
		spi_miso => ,
		spi_mosi => ,
		spi_cs => ,
		audio_data => 
	);


