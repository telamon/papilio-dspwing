<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <blockdef name="DSP_Wing">
            <timestamp>2016-9-12T19:30:43</timestamp>
            <rect width="64" x="496" y="-236" height="24" />
            <line x2="560" y1="-224" y2="-224" x1="496" />
            <rect width="64" x="496" y="-44" height="24" />
            <line x2="560" y1="-32" y2="-32" x1="496" />
            <rect width="16" x="248" y="-368" height="48" />
            <line x2="256" y1="-368" y2="-320" x1="256" />
            <rect width="16" x="264" y="-368" height="48" />
            <line x2="272" y1="-368" y2="-320" x1="272" />
            <rect width="432" x="64" y="-320" height="320" />
            <line x2="352" y1="-368" y2="-320" x1="352" />
            <rect width="64" x="496" y="-268" height="24" />
            <line x2="560" y1="-256" y2="-256" x1="496" />
            <rect width="64" x="496" y="-108" height="24" />
            <line x2="560" y1="-96" y2="-96" x1="496" />
        </blockdef>
        <block symbolname="DSP_Wing" name="XLXI_1">
            <blockpin name="audio_data(17:0)" />
            <blockpin name="wt_mosi(7:0)" />
            <blockpin name="wishbone_out(100:0)" />
            <blockpin name="wishbone_in(100:0)" />
            <blockpin name="clk_96Mhz" />
            <blockpin name="fx_ctrl(16:0)" />
            <blockpin name="wt_miso(7:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="1760" height="1360">
        <instance x="624" y="912" name="XLXI_1" orien="R0">
        </instance>
    </sheet>
</drawing>