<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <blockdef name="DSP_Wing">
            <timestamp>2015-3-23T21:1:11</timestamp>
            <rect width="432" x="64" y="-320" height="320" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="560" y1="-288" y2="-288" x1="496" />
            <line x2="560" y1="-224" y2="-224" x1="496" />
            <line x2="560" y1="-160" y2="-160" x1="496" />
            <rect width="64" x="496" y="-108" height="24" />
            <line x2="560" y1="-96" y2="-96" x1="496" />
            <rect width="64" x="496" y="-44" height="24" />
            <line x2="560" y1="-32" y2="-32" x1="496" />
        </blockdef>
        <block symbolname="DSP_Wing" name="XLXI_50">
            <blockpin name="clk_96Mhz" />
            <blockpin name="spi_miso" />
            <blockpin name="wishbone_in(100:0)" />
            <blockpin name="spi_clk" />
            <blockpin name="spi_mosi" />
            <blockpin name="spi_cs" />
            <blockpin name="wishbone_out(100:0)" />
            <blockpin name="audio_data(17:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="1760" height="1360">
        <instance x="592" y="992" name="XLXI_50" orien="R0">
        </instance>
    </sheet>
</drawing>