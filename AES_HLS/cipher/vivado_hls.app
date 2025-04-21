<project xmlns="com.autoesl.autopilot.project" name="cipher" top="AES_Encrypt">
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim" clean="true" csimMode="0" lastCsimMode="0"/>
    </Simulation>
    <files xmlns="">
        <file name="../../source/test_AES.cpp" sc="0" tb="1" cflags=" "/>
        <file name="source/AEStables.h" sc="0" tb="false" cflags=""/>
        <file name="source/AESfunctions.h" sc="0" tb="false" cflags=""/>
        <file name="source/AESfunctions.cpp" sc="0" tb="false" cflags=""/>
    </files>
    <solutions xmlns="">
        <solution name="aes_cipher" status="active"/>
    </solutions>
</project>

