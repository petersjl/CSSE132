<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3e" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="b" />
        <signal name="ci" />
        <signal name="a" />
        <signal name="XLXN_3" />
        <signal name="XLXN_6" />
        <signal name="XLXN_4" />
        <signal name="XLXN_5" />
        <signal name="XLXN_44" />
        <signal name="XLXN_45" />
        <signal name="XLXN_62" />
        <signal name="XLXN_78" />
        <signal name="XLXN_91" />
        <signal name="XLXN_92" />
        <signal name="XLXN_93" />
        <signal name="r" />
        <signal name="co" />
        <signal name="XLXN_121" />
        <signal name="XLXN_122" />
        <port polarity="Input" name="b" />
        <port polarity="Input" name="ci" />
        <port polarity="Input" name="a" />
        <port polarity="Output" name="r" />
        <port polarity="Output" name="co" />
        <blockdef name="and3">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="192" y1="-128" y2="-128" x1="256" />
            <line x2="144" y1="-176" y2="-176" x1="64" />
            <line x2="64" y1="-80" y2="-80" x1="144" />
            <arc ex="144" ey="-176" sx="144" sy="-80" r="48" cx="144" cy="-128" />
            <line x2="64" y1="-64" y2="-192" x1="64" />
        </blockdef>
        <blockdef name="or4">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="48" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="48" y1="-256" y2="-256" x1="0" />
            <line x2="192" y1="-160" y2="-160" x1="256" />
            <arc ex="112" ey="-208" sx="192" sy="-160" r="88" cx="116" cy="-120" />
            <line x2="48" y1="-208" y2="-208" x1="112" />
            <line x2="48" y1="-112" y2="-112" x1="112" />
            <line x2="48" y1="-256" y2="-208" x1="48" />
            <line x2="48" y1="-64" y2="-112" x1="48" />
            <arc ex="48" ey="-208" sx="48" sy="-112" r="56" cx="16" cy="-160" />
            <arc ex="192" ey="-160" sx="112" sy="-112" r="88" cx="116" cy="-200" />
        </blockdef>
        <blockdef name="inv">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="160" y1="-32" y2="-32" x1="224" />
            <line x2="128" y1="-64" y2="-32" x1="64" />
            <line x2="64" y1="-32" y2="0" x1="128" />
            <line x2="64" y1="0" y2="-64" x1="64" />
            <circle r="16" cx="144" cy="-32" />
        </blockdef>
        <blockdef name="and2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="144" ey="-144" sx="144" sy="-48" r="48" cx="144" cy="-96" />
            <line x2="64" y1="-48" y2="-48" x1="144" />
            <line x2="144" y1="-144" y2="-144" x1="64" />
            <line x2="64" y1="-48" y2="-144" x1="64" />
        </blockdef>
        <blockdef name="or3">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="48" y1="-64" y2="-64" x1="0" />
            <line x2="72" y1="-128" y2="-128" x1="0" />
            <line x2="48" y1="-192" y2="-192" x1="0" />
            <line x2="192" y1="-128" y2="-128" x1="256" />
            <arc ex="192" ey="-128" sx="112" sy="-80" r="88" cx="116" cy="-168" />
            <arc ex="48" ey="-176" sx="48" sy="-80" r="56" cx="16" cy="-128" />
            <line x2="48" y1="-64" y2="-80" x1="48" />
            <line x2="48" y1="-192" y2="-176" x1="48" />
            <line x2="48" y1="-80" y2="-80" x1="112" />
            <arc ex="112" ey="-176" sx="192" sy="-128" r="88" cx="116" cy="-88" />
            <line x2="48" y1="-176" y2="-176" x1="112" />
        </blockdef>
        <block symbolname="inv" name="XLXI_12">
            <blockpin signalname="b" name="I" />
            <blockpin signalname="XLXN_122" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_1">
            <blockpin signalname="XLXN_45" name="I0" />
            <blockpin signalname="XLXN_44" name="I1" />
            <blockpin signalname="a" name="I2" />
            <blockpin signalname="XLXN_4" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_3">
            <blockpin signalname="XLXN_62" name="I0" />
            <blockpin signalname="b" name="I1" />
            <blockpin signalname="XLXN_78" name="I2" />
            <blockpin signalname="XLXN_5" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_4">
            <blockpin signalname="ci" name="I0" />
            <blockpin signalname="b" name="I1" />
            <blockpin signalname="a" name="I2" />
            <blockpin signalname="XLXN_6" name="O" />
        </block>
        <block symbolname="or4" name="XLXI_5">
            <blockpin signalname="XLXN_6" name="I0" />
            <blockpin signalname="XLXN_5" name="I1" />
            <blockpin signalname="XLXN_4" name="I2" />
            <blockpin signalname="XLXN_3" name="I3" />
            <blockpin signalname="r" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_23">
            <blockpin signalname="a" name="I" />
            <blockpin signalname="XLXN_121" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_24">
            <blockpin signalname="b" name="I" />
            <blockpin signalname="XLXN_44" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_25">
            <blockpin signalname="ci" name="I" />
            <blockpin signalname="XLXN_45" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_26">
            <blockpin signalname="a" name="I" />
            <blockpin signalname="XLXN_78" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_27">
            <blockpin signalname="ci" name="I" />
            <blockpin signalname="XLXN_62" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_28">
            <blockpin signalname="b" name="I0" />
            <blockpin signalname="a" name="I1" />
            <blockpin signalname="XLXN_91" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_29">
            <blockpin signalname="ci" name="I0" />
            <blockpin signalname="a" name="I1" />
            <blockpin signalname="XLXN_92" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_30">
            <blockpin signalname="ci" name="I0" />
            <blockpin signalname="b" name="I1" />
            <blockpin signalname="XLXN_93" name="O" />
        </block>
        <block symbolname="or3" name="XLXI_32">
            <blockpin signalname="XLXN_93" name="I0" />
            <blockpin signalname="XLXN_92" name="I1" />
            <blockpin signalname="XLXN_91" name="I2" />
            <blockpin signalname="co" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_33">
            <blockpin signalname="ci" name="I0" />
            <blockpin signalname="XLXN_122" name="I1" />
            <blockpin signalname="XLXN_121" name="I2" />
            <blockpin signalname="XLXN_3" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <branch name="XLXN_3">
            <wire x2="1520" y1="432" y2="432" x1="1440" />
            <wire x2="1520" y1="432" y2="640" x1="1520" />
        </branch>
        <branch name="XLXN_6">
            <wire x2="1520" y1="992" y2="992" x1="1440" />
            <wire x2="1520" y1="832" y2="992" x1="1520" />
        </branch>
        <instance x="1184" y="1120" name="XLXI_4" orien="R0" />
        <instance x="1184" y="944" name="XLXI_3" orien="R0" />
        <branch name="XLXN_62">
            <wire x2="1184" y1="880" y2="880" x1="1152" />
        </branch>
        <instance x="928" y="784" name="XLXI_26" orien="R0" />
        <branch name="XLXN_78">
            <wire x2="1184" y1="752" y2="752" x1="1152" />
        </branch>
        <instance x="928" y="912" name="XLXI_27" orien="R0" />
        <instance x="1184" y="752" name="XLXI_1" orien="R0" />
        <branch name="XLXN_44">
            <wire x2="1184" y1="624" y2="624" x1="1152" />
        </branch>
        <branch name="XLXN_45">
            <wire x2="1184" y1="688" y2="688" x1="1152" />
        </branch>
        <instance x="928" y="720" name="XLXI_25" orien="R0" />
        <instance x="928" y="656" name="XLXI_24" orien="R0" />
        <instance x="928" y="464" name="XLXI_12" orien="R0" />
        <instance x="928" y="400" name="XLXI_23" orien="R0" />
        <instance x="1168" y="1296" name="XLXI_28" orien="R0" />
        <instance x="1168" y="1440" name="XLXI_29" orien="R0" />
        <instance x="1168" y="1584" name="XLXI_30" orien="R0" />
        <instance x="1520" y="1472" name="XLXI_32" orien="R0" />
        <branch name="XLXN_91">
            <wire x2="1520" y1="1200" y2="1200" x1="1424" />
            <wire x2="1520" y1="1200" y2="1280" x1="1520" />
        </branch>
        <branch name="XLXN_92">
            <wire x2="1520" y1="1344" y2="1344" x1="1424" />
        </branch>
        <branch name="XLXN_93">
            <wire x2="1520" y1="1488" y2="1488" x1="1424" />
            <wire x2="1520" y1="1408" y2="1488" x1="1520" />
        </branch>
        <branch name="a">
            <wire x2="544" y1="96" y2="368" x1="544" />
            <wire x2="928" y1="368" y2="368" x1="544" />
            <wire x2="544" y1="368" y2="560" x1="544" />
            <wire x2="1184" y1="560" y2="560" x1="544" />
            <wire x2="544" y1="560" y2="752" x1="544" />
            <wire x2="928" y1="752" y2="752" x1="544" />
            <wire x2="544" y1="752" y2="928" x1="544" />
            <wire x2="1184" y1="928" y2="928" x1="544" />
            <wire x2="544" y1="928" y2="1168" x1="544" />
            <wire x2="1168" y1="1168" y2="1168" x1="544" />
            <wire x2="544" y1="1168" y2="1312" x1="544" />
            <wire x2="1168" y1="1312" y2="1312" x1="544" />
        </branch>
        <branch name="b">
            <wire x2="624" y1="96" y2="432" x1="624" />
            <wire x2="928" y1="432" y2="432" x1="624" />
            <wire x2="624" y1="432" y2="624" x1="624" />
            <wire x2="928" y1="624" y2="624" x1="624" />
            <wire x2="624" y1="624" y2="816" x1="624" />
            <wire x2="1184" y1="816" y2="816" x1="624" />
            <wire x2="624" y1="816" y2="992" x1="624" />
            <wire x2="1184" y1="992" y2="992" x1="624" />
            <wire x2="624" y1="992" y2="1232" x1="624" />
            <wire x2="1168" y1="1232" y2="1232" x1="624" />
            <wire x2="624" y1="1232" y2="1456" x1="624" />
            <wire x2="1168" y1="1456" y2="1456" x1="624" />
        </branch>
        <instance x="1520" y="896" name="XLXI_5" orien="R0" />
        <branch name="XLXN_4">
            <wire x2="1456" y1="624" y2="624" x1="1440" />
            <wire x2="1456" y1="624" y2="704" x1="1456" />
            <wire x2="1520" y1="704" y2="704" x1="1456" />
        </branch>
        <branch name="XLXN_5">
            <wire x2="1456" y1="816" y2="816" x1="1440" />
            <wire x2="1520" y1="768" y2="768" x1="1456" />
            <wire x2="1456" y1="768" y2="816" x1="1456" />
        </branch>
        <branch name="r">
            <wire x2="1792" y1="736" y2="736" x1="1776" />
        </branch>
        <branch name="co">
            <wire x2="1792" y1="1344" y2="1344" x1="1776" />
        </branch>
        <iomarker fontsize="28" x="544" y="96" name="a" orien="R270" />
        <iomarker fontsize="28" x="624" y="96" name="b" orien="R270" />
        <iomarker fontsize="28" x="704" y="96" name="ci" orien="R270" />
        <iomarker fontsize="28" x="1792" y="736" name="r" orien="R0" />
        <iomarker fontsize="28" x="1792" y="1344" name="co" orien="R0" />
        <branch name="ci">
            <wire x2="704" y1="96" y2="496" x1="704" />
            <wire x2="704" y1="496" y2="688" x1="704" />
            <wire x2="704" y1="688" y2="880" x1="704" />
            <wire x2="704" y1="880" y2="1056" x1="704" />
            <wire x2="1184" y1="1056" y2="1056" x1="704" />
            <wire x2="704" y1="1056" y2="1376" x1="704" />
            <wire x2="704" y1="1376" y2="1520" x1="704" />
            <wire x2="1168" y1="1520" y2="1520" x1="704" />
            <wire x2="1168" y1="1376" y2="1376" x1="704" />
            <wire x2="928" y1="880" y2="880" x1="704" />
            <wire x2="928" y1="688" y2="688" x1="704" />
            <wire x2="1184" y1="496" y2="496" x1="704" />
        </branch>
        <instance x="1184" y="560" name="XLXI_33" orien="R0" />
        <branch name="XLXN_121">
            <wire x2="1184" y1="368" y2="368" x1="1152" />
        </branch>
        <branch name="XLXN_122">
            <wire x2="1184" y1="432" y2="432" x1="1152" />
        </branch>
    </sheet>
</drawing>