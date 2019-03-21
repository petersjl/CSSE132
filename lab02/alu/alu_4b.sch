<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3e" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_1" />
        <signal name="r(0)" />
        <signal name="r(1)" />
        <signal name="r(2)" />
        <signal name="r(3)" />
        <signal name="r(3:0)" />
        <signal name="XLXN_7" />
        <signal name="XLXN_8" />
        <signal name="XLXN_9" />
        <signal name="a(3:0)" />
        <signal name="b(3:0)" />
        <signal name="a(0)" />
        <signal name="a(1)" />
        <signal name="a(2)" />
        <signal name="a(3)" />
        <signal name="c" />
        <signal name="op(2)" />
        <signal name="op(2:0)" />
        <signal name="XLXN_12(2:0)" />
        <signal name="XLXN_13(2:0)" />
        <signal name="XLXN_14(2:0)" />
        <signal name="XLXN_15(2:0)" />
        <signal name="b(0)" />
        <signal name="b(1)" />
        <signal name="b(2)" />
        <signal name="b(3)" />
        <port polarity="Output" name="r(3:0)" />
        <port polarity="Input" name="a(3:0)" />
        <port polarity="Input" name="b(3:0)" />
        <port polarity="Input" name="op(2:0)" />
        <blockdef name="alu_1b">
            <timestamp>2019-3-13T14:44:33</timestamp>
            <rect width="256" x="64" y="-320" height="320" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-288" y2="-288" x1="320" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="constant">
            <timestamp>2006-1-1T10:10:10</timestamp>
            <rect width="112" x="0" y="0" height="64" />
            <line x2="112" y1="32" y2="32" x1="144" />
        </blockdef>
        <block symbolname="alu_1b" name="XLXI_1">
            <blockpin signalname="b(0)" name="b" />
            <blockpin signalname="a(0)" name="a" />
            <blockpin signalname="op(2:0)" name="op(2:0)" />
            <blockpin signalname="op(2)" name="ci" />
            <blockpin signalname="XLXN_1" name="less" />
            <blockpin signalname="r(0)" name="r" />
            <blockpin signalname="XLXN_7" name="co" />
            <blockpin name="set" />
        </block>
        <block symbolname="alu_1b" name="XLXI_2">
            <blockpin signalname="b(1)" name="b" />
            <blockpin signalname="a(1)" name="a" />
            <blockpin signalname="op(2:0)" name="op(2:0)" />
            <blockpin signalname="XLXN_7" name="ci" />
            <blockpin signalname="c" name="less" />
            <blockpin signalname="r(1)" name="r" />
            <blockpin signalname="XLXN_9" name="co" />
            <blockpin name="set" />
        </block>
        <block symbolname="alu_1b" name="XLXI_3">
            <blockpin signalname="b(2)" name="b" />
            <blockpin signalname="a(2)" name="a" />
            <blockpin signalname="op(2:0)" name="op(2:0)" />
            <blockpin signalname="XLXN_9" name="ci" />
            <blockpin signalname="c" name="less" />
            <blockpin signalname="r(2)" name="r" />
            <blockpin signalname="XLXN_8" name="co" />
            <blockpin name="set" />
        </block>
        <block symbolname="alu_1b" name="XLXI_4">
            <blockpin signalname="b(3)" name="b" />
            <blockpin signalname="a(3)" name="a" />
            <blockpin signalname="op(2:0)" name="op(2:0)" />
            <blockpin signalname="XLXN_8" name="ci" />
            <blockpin signalname="c" name="less" />
            <blockpin signalname="r(3)" name="r" />
            <blockpin name="co" />
            <blockpin signalname="XLXN_1" name="set" />
        </block>
        <block symbolname="constant" name="XLXI_5">
            <attr value="0" name="CValue">
                <trait delete="all:1 sym:0" />
                <trait editname="all:1 sch:0" />
                <trait valuetype="BitVector 32 Hexadecimal" />
            </attr>
            <blockpin signalname="c" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1680" y="1168" name="XLXI_2" orien="R0">
        </instance>
        <instance x="1680" y="1568" name="XLXI_3" orien="R0">
        </instance>
        <instance x="1680" y="1984" name="XLXI_4" orien="R0">
        </instance>
        <instance x="1680" y="768" name="XLXI_1" orien="R0">
        </instance>
        <branch name="XLXN_1">
            <wire x2="1680" y1="736" y2="736" x1="1600" />
            <wire x2="1600" y1="736" y2="832" x1="1600" />
            <wire x2="2128" y1="832" y2="832" x1="1600" />
            <wire x2="2128" y1="832" y2="1952" x1="2128" />
            <wire x2="2128" y1="1952" y2="1952" x1="2064" />
        </branch>
        <branch name="r(0)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="2112" y="480" type="branch" />
            <wire x2="2112" y1="480" y2="480" x1="2064" />
        </branch>
        <branch name="r(1)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="2176" y="880" type="branch" />
            <wire x2="2176" y1="880" y2="880" x1="2064" />
        </branch>
        <branch name="r(2)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="2208" y="1280" type="branch" />
            <wire x2="2208" y1="1280" y2="1280" x1="2064" />
        </branch>
        <branch name="r(3)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="2208" y="1696" type="branch" />
            <wire x2="2208" y1="1696" y2="1696" x1="2064" />
        </branch>
        <branch name="r(3:0)">
            <wire x2="2880" y1="1440" y2="1440" x1="2576" />
        </branch>
        <branch name="XLXN_7">
            <wire x2="1680" y1="1072" y2="1072" x1="1616" />
            <wire x2="1616" y1="1072" y2="1232" x1="1616" />
            <wire x2="2144" y1="1232" y2="1232" x1="1616" />
            <wire x2="2144" y1="608" y2="608" x1="2064" />
            <wire x2="2144" y1="608" y2="1232" x1="2144" />
        </branch>
        <branch name="XLXN_8">
            <wire x2="1680" y1="1888" y2="1888" x1="1616" />
            <wire x2="1616" y1="1888" y2="2048" x1="1616" />
            <wire x2="2112" y1="2048" y2="2048" x1="1616" />
            <wire x2="2112" y1="1408" y2="1408" x1="2064" />
            <wire x2="2112" y1="1408" y2="2048" x1="2112" />
        </branch>
        <branch name="XLXN_9">
            <wire x2="1680" y1="1472" y2="1472" x1="1616" />
            <wire x2="1616" y1="1472" y2="1648" x1="1616" />
            <wire x2="2096" y1="1648" y2="1648" x1="1616" />
            <wire x2="2096" y1="1008" y2="1008" x1="2064" />
            <wire x2="2096" y1="1008" y2="1648" x1="2096" />
        </branch>
        <branch name="a(3:0)">
            <wire x2="912" y1="304" y2="560" x1="912" />
        </branch>
        <branch name="b(3:0)">
            <wire x2="1008" y1="304" y2="560" x1="1008" />
        </branch>
        <branch name="b(0)">
            <attrtext style="alignment:SOFT-RIGHT;fontsize:28;fontname:Arial" attrname="Name" x="1648" y="480" type="branch" />
            <wire x2="1680" y1="480" y2="480" x1="1648" />
        </branch>
        <branch name="a(0)">
            <attrtext style="alignment:SOFT-RIGHT;fontsize:28;fontname:Arial" attrname="Name" x="1648" y="544" type="branch" />
            <wire x2="1680" y1="544" y2="544" x1="1648" />
        </branch>
        <branch name="b(1)">
            <attrtext style="alignment:SOFT-RIGHT;fontsize:28;fontname:Arial" attrname="Name" x="1648" y="880" type="branch" />
            <wire x2="1680" y1="880" y2="880" x1="1648" />
        </branch>
        <branch name="a(1)">
            <attrtext style="alignment:SOFT-RIGHT;fontsize:28;fontname:Arial" attrname="Name" x="1648" y="944" type="branch" />
            <wire x2="1680" y1="944" y2="944" x1="1648" />
        </branch>
        <branch name="b(2)">
            <attrtext style="alignment:SOFT-RIGHT;fontsize:28;fontname:Arial" attrname="Name" x="1632" y="1280" type="branch" />
            <wire x2="1680" y1="1280" y2="1280" x1="1632" />
        </branch>
        <branch name="a(2)">
            <attrtext style="alignment:SOFT-RIGHT;fontsize:28;fontname:Arial" attrname="Name" x="1632" y="1344" type="branch" />
            <wire x2="1680" y1="1344" y2="1344" x1="1632" />
        </branch>
        <branch name="c">
            <attrtext style="alignment:SOFT-RIGHT;fontsize:28;fontname:Arial" attrname="Name" x="1648" y="1136" type="branch" />
            <wire x2="1680" y1="1136" y2="1136" x1="1648" />
        </branch>
        <branch name="c">
            <attrtext style="alignment:SOFT-RIGHT;fontsize:28;fontname:Arial" attrname="Name" x="1648" y="1536" type="branch" />
            <wire x2="1680" y1="1536" y2="1536" x1="1648" />
        </branch>
        <branch name="b(3)">
            <attrtext style="alignment:SOFT-RIGHT;fontsize:28;fontname:Arial" attrname="Name" x="1632" y="1696" type="branch" />
            <wire x2="1680" y1="1696" y2="1696" x1="1632" />
        </branch>
        <branch name="a(3)">
            <attrtext style="alignment:SOFT-RIGHT;fontsize:28;fontname:Arial" attrname="Name" x="1632" y="1760" type="branch" />
            <wire x2="1680" y1="1760" y2="1760" x1="1632" />
        </branch>
        <branch name="c">
            <attrtext style="alignment:SOFT-RIGHT;fontsize:28;fontname:Arial" attrname="Name" x="1648" y="1952" type="branch" />
            <wire x2="1680" y1="1952" y2="1952" x1="1648" />
        </branch>
        <instance x="880" y="1008" name="XLXI_5" orien="R0">
        </instance>
        <branch name="c">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="1056" y="1040" type="branch" />
            <wire x2="1056" y1="1040" y2="1040" x1="1024" />
        </branch>
        <iomarker fontsize="28" x="912" y="304" name="a(3:0)" orien="R270" />
        <iomarker fontsize="28" x="1008" y="304" name="b(3:0)" orien="R270" />
        <iomarker fontsize="28" x="2880" y="1440" name="r(3:0)" orien="R0" />
        <branch name="op(2)">
            <attrtext style="alignment:SOFT-RIGHT;fontsize:28;fontname:Arial" attrname="Name" x="1616" y="672" type="branch" />
            <wire x2="1680" y1="672" y2="672" x1="1616" />
        </branch>
        <branch name="op(2:0)">
            <wire x2="1104" y1="288" y2="560" x1="1104" />
            <wire x2="1104" y1="560" y2="608" x1="1104" />
            <wire x2="1680" y1="608" y2="608" x1="1104" />
            <wire x2="1104" y1="608" y2="1008" x1="1104" />
            <wire x2="1680" y1="1008" y2="1008" x1="1104" />
            <wire x2="1104" y1="1008" y2="1408" x1="1104" />
            <wire x2="1680" y1="1408" y2="1408" x1="1104" />
            <wire x2="1104" y1="1408" y2="1824" x1="1104" />
            <wire x2="1680" y1="1824" y2="1824" x1="1104" />
        </branch>
        <iomarker fontsize="28" x="1104" y="288" name="op(2:0)" orien="R270" />
    </sheet>
</drawing>