<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="Z0" />
        <signal name="Z1" />
        <signal name="Z2" />
        <signal name="XLXN_13" />
        <signal name="C1" />
        <signal name="XLXN_15" />
        <signal name="XLXN_16" />
        <signal name="XLXN_18" />
        <signal name="XLXN_19" />
        <signal name="XLXN_20" />
        <signal name="C0" />
        <signal name="XLXN_23" />
        <signal name="VALID" />
        <signal name="Z3" />
        <port polarity="Input" name="Z0" />
        <port polarity="Input" name="Z1" />
        <port polarity="Input" name="Z2" />
        <port polarity="Output" name="C1" />
        <port polarity="Output" name="C0" />
        <port polarity="Output" name="VALID" />
        <port polarity="Input" name="Z3" />
        <blockdef name="or2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="192" ey="-96" sx="112" sy="-48" r="88" cx="116" cy="-136" />
            <arc ex="48" ey="-144" sx="48" sy="-48" r="56" cx="16" cy="-96" />
            <line x2="48" y1="-144" y2="-144" x1="112" />
            <arc ex="112" ey="-144" sx="192" sy="-96" r="88" cx="116" cy="-56" />
            <line x2="48" y1="-48" y2="-48" x1="112" />
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
        <blockdef name="inv">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="160" y1="-32" y2="-32" x1="224" />
            <line x2="128" y1="-64" y2="-32" x1="64" />
            <line x2="64" y1="-32" y2="0" x1="128" />
            <line x2="64" y1="0" y2="-64" x1="64" />
            <circle r="16" cx="144" cy="-32" />
        </blockdef>
        <block symbolname="or2" name="XLXI_1">
            <blockpin signalname="Z1" name="I0" />
            <blockpin signalname="Z0" name="I1" />
            <blockpin signalname="XLXN_23" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_2">
            <blockpin signalname="XLXN_16" name="I0" />
            <blockpin signalname="Z1" name="I1" />
            <blockpin signalname="XLXN_20" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_7">
            <blockpin signalname="Z3" name="I0" />
            <blockpin signalname="Z2" name="I1" />
            <blockpin signalname="C1" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_8">
            <blockpin signalname="Z2" name="I" />
            <blockpin signalname="XLXN_16" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_9">
            <blockpin signalname="Z3" name="I0" />
            <blockpin signalname="XLXN_20" name="I1" />
            <blockpin signalname="C0" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_10">
            <blockpin signalname="C1" name="I0" />
            <blockpin signalname="XLXN_23" name="I1" />
            <blockpin signalname="VALID" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <branch name="Z0">
            <wire x2="416" y1="176" y2="192" x1="416" />
            <wire x2="416" y1="192" y2="544" x1="416" />
            <wire x2="1072" y1="544" y2="544" x1="416" />
            <wire x2="1120" y1="544" y2="544" x1="1072" />
        </branch>
        <branch name="Z1">
            <wire x2="304" y1="192" y2="592" x1="304" />
            <wire x2="1008" y1="592" y2="592" x1="304" />
            <wire x2="1072" y1="592" y2="592" x1="1008" />
            <wire x2="1104" y1="592" y2="592" x1="1072" />
            <wire x2="1104" y1="592" y2="608" x1="1104" />
            <wire x2="1120" y1="608" y2="608" x1="1104" />
            <wire x2="1008" y1="592" y2="672" x1="1008" />
            <wire x2="1008" y1="672" y2="688" x1="1008" />
            <wire x2="1360" y1="688" y2="688" x1="1008" />
        </branch>
        <iomarker fontsize="28" x="416" y="176" name="Z0" orien="R270" />
        <iomarker fontsize="28" x="304" y="192" name="Z1" orien="R270" />
        <iomarker fontsize="28" x="224" y="208" name="Z2" orien="R270" />
        <iomarker fontsize="28" x="160" y="208" name="Z3" orien="R270" />
        <instance x="1120" y="672" name="XLXI_1" orien="R0" />
        <instance x="1152" y="960" name="XLXI_7" orien="R0" />
        <branch name="C1">
            <wire x2="1424" y1="864" y2="864" x1="1408" />
            <wire x2="1744" y1="864" y2="864" x1="1424" />
            <wire x2="2448" y1="864" y2="864" x1="1744" />
            <wire x2="1744" y1="544" y2="864" x1="1744" />
            <wire x2="2032" y1="544" y2="544" x1="1744" />
        </branch>
        <instance x="1360" y="816" name="XLXI_2" orien="R0" />
        <instance x="1040" y="784" name="XLXI_8" orien="R0" />
        <branch name="XLXN_16">
            <wire x2="1360" y1="752" y2="752" x1="1264" />
        </branch>
        <branch name="Z2">
            <wire x2="224" y1="208" y2="800" x1="224" />
            <wire x2="704" y1="800" y2="800" x1="224" />
            <wire x2="944" y1="800" y2="800" x1="704" />
            <wire x2="1072" y1="800" y2="800" x1="944" />
            <wire x2="1072" y1="800" y2="816" x1="1072" />
            <wire x2="1072" y1="816" y2="832" x1="1072" />
            <wire x2="1152" y1="832" y2="832" x1="1072" />
            <wire x2="1040" y1="752" y2="752" x1="944" />
            <wire x2="944" y1="752" y2="800" x1="944" />
        </branch>
        <instance x="2048" y="816" name="XLXI_9" orien="R0" />
        <branch name="XLXN_20">
            <wire x2="1824" y1="720" y2="720" x1="1616" />
            <wire x2="1824" y1="688" y2="720" x1="1824" />
            <wire x2="2048" y1="688" y2="688" x1="1824" />
        </branch>
        <branch name="C0">
            <wire x2="2320" y1="720" y2="720" x1="2304" />
            <wire x2="2416" y1="720" y2="720" x1="2320" />
        </branch>
        <iomarker fontsize="28" x="2416" y="720" name="C0" orien="R0" />
        <iomarker fontsize="28" x="2448" y="864" name="C1" orien="R0" />
        <instance x="2032" y="608" name="XLXI_10" orien="R0" />
        <branch name="XLXN_23">
            <wire x2="1568" y1="576" y2="576" x1="1376" />
            <wire x2="1568" y1="480" y2="576" x1="1568" />
            <wire x2="2032" y1="480" y2="480" x1="1568" />
        </branch>
        <branch name="VALID">
            <wire x2="2400" y1="512" y2="512" x1="2288" />
        </branch>
        <iomarker fontsize="28" x="2400" y="512" name="VALID" orien="R0" />
        <branch name="Z3">
            <wire x2="160" y1="208" y2="896" x1="160" />
            <wire x2="656" y1="896" y2="896" x1="160" />
            <wire x2="1152" y1="896" y2="896" x1="656" />
            <wire x2="656" y1="896" y2="1040" x1="656" />
            <wire x2="1920" y1="1040" y2="1040" x1="656" />
            <wire x2="1920" y1="752" y2="752" x1="1888" />
            <wire x2="2048" y1="752" y2="752" x1="1920" />
            <wire x2="1888" y1="752" y2="848" x1="1888" />
            <wire x2="1920" y1="848" y2="848" x1="1888" />
            <wire x2="1920" y1="848" y2="1040" x1="1920" />
        </branch>
    </sheet>
</drawing>