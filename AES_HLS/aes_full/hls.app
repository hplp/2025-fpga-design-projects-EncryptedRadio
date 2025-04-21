<project xmlns="com.autoesl.autopilot.project" name="aes_full" top="AES_Full">
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim" clean="true" csimMode="0" lastCsimMode="0"/>
    </Simulation>
    <files xmlns="">
        <file name="../../source/test_AES_full.cpp" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="source/AESfunctions.cpp" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="source/AESfunctions.h" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="source/AEStables.h" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="full" status="active"/>
    </solutions>
</project>

