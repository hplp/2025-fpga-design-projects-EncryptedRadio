# 1 "D:/OneDrive/UVA/crypto/AES_code/VivadoHLS/cipher/aes_cipher/.autopilot/db/AESfunctions.pragma.1.cpp"
# 1 "D:/OneDrive/UVA/crypto/AES_code/VivadoHLS/cipher/aes_cipher/.autopilot/db/AESfunctions.pragma.1.cpp" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 152 "<built-in>" 3
# 1 "<command line>" 1







# 1 "C:/Dev/Xilinx/Vivado/2017.4/common/technology/autopilot\\etc/autopilot_ssdm_op.h" 1
# 156 "C:/Dev/Xilinx/Vivado/2017.4/common/technology/autopilot\\etc/autopilot_ssdm_op.h"
extern "C" {





    typedef bool _uint1_;

    void _ssdm_op_IfRead(...) __attribute__ ((nothrow));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfNbRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfCanRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow));


    void _ssdm_StreamRead(...) __attribute__ ((nothrow));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamNbRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamNbWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamCanRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamCanWrite(...) __attribute__ ((nothrow));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow));


    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow));

    void _ssdm_op_Wait(...) __attribute__ ((nothrow));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow));

    void _ssdm_op_Return(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow));




    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow));

    void _ssdm_RegionBegin(...) __attribute__ ((nothrow));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_Unroll(...) __attribute__ ((nothrow));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow));

    void _ssdm_InlineAll(...) __attribute__ ((nothrow));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow));
    void _ssdm_Inline(...) __attribute__ ((nothrow));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow));

    void _ssdm_SpecStream(...) __attribute__ ((nothrow));

    void _ssdm_SpecExpr(...) __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow));

    void _ssdm_SpecDependence(...) __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow));

    void _ssdm_DataPack(...) __attribute__ ((nothrow));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow));

    void __xilinx_ip_top(...) __attribute__ ((nothrow));


}
# 9 "<command line>" 2
# 1 "<built-in>" 2
# 1 "D:/OneDrive/UVA/crypto/AES_code/VivadoHLS/cipher/aes_cipher/.autopilot/db/AESfunctions.pragma.1.cpp" 2
# 1 "source/AESfunctions.cpp"
# 1 "source/AESfunctions.cpp" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 152 "<built-in>" 3
# 1 "<command line>" 1







# 1 "C:/Dev/Xilinx/Vivado/2017.4/common/technology/autopilot\\etc/autopilot_ssdm_op.h" 1
# 156 "C:/Dev/Xilinx/Vivado/2017.4/common/technology/autopilot\\etc/autopilot_ssdm_op.h"
extern "C" {





    typedef bool _uint1_;

    void _ssdm_op_IfRead(...) __attribute__ ((nothrow));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfNbRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfCanRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow));


    void _ssdm_StreamRead(...) __attribute__ ((nothrow));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamNbRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamNbWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamCanRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamCanWrite(...) __attribute__ ((nothrow));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow));


    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow));

    void _ssdm_op_Wait(...) __attribute__ ((nothrow));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow));

    void _ssdm_op_Return(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow));




    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow));

    void _ssdm_RegionBegin(...) __attribute__ ((nothrow));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_Unroll(...) __attribute__ ((nothrow));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow));

    void _ssdm_InlineAll(...) __attribute__ ((nothrow));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow));
    void _ssdm_Inline(...) __attribute__ ((nothrow));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow));

    void _ssdm_SpecStream(...) __attribute__ ((nothrow));

    void _ssdm_SpecExpr(...) __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow));

    void _ssdm_SpecDependence(...) __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow));

    void _ssdm_DataPack(...) __attribute__ ((nothrow));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow));

    void __xilinx_ip_top(...) __attribute__ ((nothrow));


}
# 9 "<command line>" 2
# 1 "<built-in>" 2
# 1 "source/AESfunctions.cpp" 2
# 1 "source/AESfunctions.h" 1


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 1 3
# 37 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 3
# 37 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 3

# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 1 3
# 275 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/os_defines.h" 1 3
# 276 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 2 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/cpu_defines.h" 1 3
# 279 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 2 3
# 39 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 2 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 1 3
# 38 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
# 38 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3

# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 1 3
# 37 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 3
# 37 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 3

# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 1 3
# 38 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 3
# 38 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stringfwd.h" 1 3
# 39 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stringfwd.h" 3
# 39 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stringfwd.h" 3



namespace std {

  template<typename _Alloc>
    class allocator;







  template<class _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
    class basic_string;

  template<> struct char_traits<char>;

  typedef basic_string<char> string;


  template<> struct char_traits<wchar_t>;

  typedef basic_string<wchar_t> wstring;
# 82 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stringfwd.h" 3
}
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 2 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 1 3
# 40 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
# 40 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3

# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 1 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 31 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 3 4
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;



typedef __typeof__(sizeof(int)) size_t;
# 44 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3




namespace std {

  using ::ptrdiff_t;
  using ::size_t;

}
# 44 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 2 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 1 3








# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 10 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/_mingw_mac.h" 1 3
# 10 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
# 277 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 1 3
# 13 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 674 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_directx.h" 1 3
# 674 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3

# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_ddk.h" 1 3
# 675 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
# 13 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {





  typedef __builtin_va_list __gnuc_va_list;






  typedef __gnuc_va_list va_list;
# 99 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
}


#pragma pack(pop)
# 277 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3


#pragma pack(push,_CRT_PACKING)
# 370 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long size_t;
# 380 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ssize_t;
# 392 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long intptr_t;
# 405 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long uintptr_t;
# 418 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ptrdiff_t;
# 436 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef unsigned short wint_t;
typedef unsigned short wctype_t;
# 456 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef int errno_t;




typedef long __time32_t;




__extension__ typedef long long __time64_t;







typedef __time64_t time_t;
# 607 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;



typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;




typedef struct threadlocaleinfostruct {
  int refcount;
  unsigned int lc_codepage;
  unsigned int lc_collate_cp;
  unsigned long lc_handle[6];
  LC_ID lc_id[6];
  struct {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
  } lc_category[6];
  int lc_clike;
  int mb_cur_max;
  int *lconv_intl_refcount;
  int *lconv_num_refcount;
  int *lconv_mon_refcount;
  struct lconv *lconv;
  int *ctype1_refcount;
  unsigned short *ctype1;
  const unsigned short *pctype;
  const unsigned char *pclmap;
  const unsigned char *pcumap;
  struct __lc_time_data *lc_time_curr;
} threadlocinfo;



extern "C" {



const char *__mingw_get_crt_info (void);


}


#pragma pack(pop)
# 9 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {
# 27 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
 struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
  };
  typedef struct _iobuf FILE;





  __attribute__ ((__dllimport__)) FILE * __iob_func(void);
# 66 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
 typedef unsigned long _fsize_t;




  struct _wfinddata32_t {
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    _fsize_t size;
    wchar_t name[260];
  };

  struct _wfinddata32i64_t {
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    __extension__ long long size;
    wchar_t name[260];
  };

  struct _wfinddata64i32_t {
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    _fsize_t size;
    wchar_t name[260];
  };

  struct _wfinddata64_t {
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    __extension__ long long size;
    wchar_t name[260];
  };
# 164 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
 extern unsigned short ** __imp__pctype;
# 178 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
 extern unsigned short ** __imp__wctype;
# 193 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
 extern unsigned short ** __imp__pwctype;
# 217 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
 int iswalpha(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswalpha_l(wint_t _C,_locale_t _Locale);
  int iswupper(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswupper_l(wint_t _C,_locale_t _Locale);
  int iswlower(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswlower_l(wint_t _C,_locale_t _Locale);
  int iswdigit(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswdigit_l(wint_t _C,_locale_t _Locale);
  int iswxdigit(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswxdigit_l(wint_t _C,_locale_t _Locale);
  int iswspace(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswspace_l(wint_t _C,_locale_t _Locale);
  int iswpunct(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswpunct_l(wint_t _C,_locale_t _Locale);
  int iswalnum(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswalnum_l(wint_t _C,_locale_t _Locale);
  int iswprint(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswprint_l(wint_t _C,_locale_t _Locale);
  int iswgraph(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswgraph_l(wint_t _C,_locale_t _Locale);
  int iswcntrl(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswcntrl_l(wint_t _C,_locale_t _Locale);
  int iswascii(wint_t _C);
  int isleadbyte(int _C);
  __attribute__ ((__dllimport__)) int _isleadbyte_l(int _C,_locale_t _Locale);
  wint_t towupper(wint_t _C);
  __attribute__ ((__dllimport__)) wint_t _towupper_l(wint_t _C,_locale_t _Locale);
  wint_t towlower(wint_t _C);
  __attribute__ ((__dllimport__)) wint_t _towlower_l(wint_t _C,_locale_t _Locale);
  int iswctype(wint_t _C,wctype_t _Type);
  __attribute__ ((__dllimport__)) int _iswctype_l(wint_t _C,wctype_t _Type,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __iswcsymf(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswcsymf_l(wint_t _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __iswcsym(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswcsym_l(wint_t _C,_locale_t _Locale);
  int is_wctype(wint_t _C,wctype_t _Type);


  int iswblank(wint_t _C);







  __attribute__ ((__dllimport__)) wchar_t * _wgetcwd(wchar_t *_DstBuf,int _SizeInWords);
  __attribute__ ((__dllimport__)) wchar_t * _wgetdcwd(int _Drive,wchar_t *_DstBuf,int _SizeInWords);
  wchar_t * _wgetdcwd_nolock(int _Drive,wchar_t *_DstBuf,int _SizeInWords);
  __attribute__ ((__dllimport__)) int _wchdir(const wchar_t *_Path);
  __attribute__ ((__dllimport__)) int _wmkdir(const wchar_t *_Path);
  __attribute__ ((__dllimport__)) int _wrmdir(const wchar_t *_Path);





  __attribute__ ((__dllimport__)) int _waccess(const wchar_t *_Filename,int _AccessMode);
  __attribute__ ((__dllimport__)) int _wchmod(const wchar_t *_Filename,int _Mode);
  __attribute__ ((__dllimport__)) int _wcreat(const wchar_t *_Filename,int _PermissionMode) ;
  __attribute__ ((__dllimport__)) intptr_t _wfindfirst32(const wchar_t *_Filename,struct _wfinddata32_t *_FindData);
  __attribute__ ((__dllimport__)) int _wfindnext32(intptr_t _FindHandle,struct _wfinddata32_t *_FindData);
  __attribute__ ((__dllimport__)) int _wunlink(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) int _wrename(const wchar_t *_NewFilename,const wchar_t *_OldFilename);
  __attribute__ ((__dllimport__)) wchar_t * _wmktemp(wchar_t *_TemplateName) ;
  __attribute__ ((__dllimport__)) intptr_t _wfindfirst32i64(const wchar_t *_Filename,struct _wfinddata32i64_t *_FindData);
  intptr_t _wfindfirst64i32(const wchar_t *_Filename,struct _wfinddata64i32_t *_FindData);
  __attribute__ ((__dllimport__)) intptr_t _wfindfirst64(const wchar_t *_Filename,struct _wfinddata64_t *_FindData);
  __attribute__ ((__dllimport__)) int _wfindnext32i64(intptr_t _FindHandle,struct _wfinddata32i64_t *_FindData);
  int _wfindnext64i32(intptr_t _FindHandle,struct _wfinddata64i32_t *_FindData);
  __attribute__ ((__dllimport__)) int _wfindnext64(intptr_t _FindHandle,struct _wfinddata64_t *_FindData);
  __attribute__ ((__dllimport__)) errno_t _wsopen_s(int *_FileHandle,const wchar_t *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionFlag);
  __attribute__ ((__dllimport__)) int _wopen(const wchar_t *_Filename,int _OpenFlag,...) ;
  __attribute__ ((__dllimport__)) int _wsopen(const wchar_t *_Filename,int _OpenFlag,int _ShareFlag,...) ;




  __attribute__ ((__dllimport__)) wchar_t * _wsetlocale(int _Category,const wchar_t *_Locale);





  __attribute__ ((__dllimport__)) intptr_t _wexecl(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexecle(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexeclp(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexeclpe(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexecv(const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wexecve(const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t _wexecvp(const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wexecvpe(const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t _wspawnl(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnle(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnlp(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnlpe(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnv(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wspawnve(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t _wspawnvp(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wspawnvpe(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);


  __attribute__ ((__dllimport__)) int _wsystem(const wchar_t *_Command);
# 360 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
 typedef unsigned short _ino_t;

  typedef unsigned short ino_t;





  typedef unsigned int _dev_t;

  typedef unsigned int dev_t;







  typedef long _off_t;

  typedef long off_t;






  __extension__ typedef long long _off64_t;

  __extension__ typedef long long off64_t;
# 412 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
 struct _stat32 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    __time32_t st_atime;
    __time32_t st_mtime;
    __time32_t st_ctime;
  };


  struct stat {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    time_t st_atime;
    time_t st_mtime;
    time_t st_ctime;
  };


  struct _stat32i64 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    __extension__ long long st_size;
    __time32_t st_atime;
    __time32_t st_mtime;
    __time32_t st_ctime;
  };

  struct _stat64i32 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    __time64_t st_atime;
    __time64_t st_mtime;
    __time64_t st_ctime;
  };

  struct _stat64 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    __extension__ long long st_size;
    __time64_t st_atime;
    __time64_t st_mtime;
    __time64_t st_ctime;
  };
# 493 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
 __attribute__ ((__dllimport__)) int _wstat32(const wchar_t *_Name,struct _stat32 *_Stat);
  __attribute__ ((__dllimport__)) int _wstat32i64(const wchar_t *_Name,struct _stat32i64 *_Stat);
  int _wstat64i32(const wchar_t *_Name,struct _stat64i32 *_Stat);
  __attribute__ ((__dllimport__)) int _wstat64(const wchar_t *_Name,struct _stat64 *_Stat);
# 507 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
 __attribute__ ((__dllimport__)) wchar_t *_cgetws(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wint_t _getwch(void);
  __attribute__ ((__dllimport__)) wint_t _getwche(void);
  __attribute__ ((__dllimport__)) wint_t _putwch(wchar_t _WCh);
  __attribute__ ((__dllimport__)) wint_t _ungetwch(wint_t _WCh);
  __attribute__ ((__dllimport__)) int _cputws(const wchar_t *_String);
  __attribute__ ((__dllimport__)) int _cwprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _cwscanf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _cwscanf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vcwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _cwprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vcwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);

  __attribute__ ((__dllimport__)) int _cwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vcwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _cwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vcwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  wint_t _putwch_nolock(wchar_t _WCh);
  wint_t _getwch_nolock(void);
  wint_t _getwche_nolock(void);
  wint_t _ungetwch_nolock(wint_t _WCh);
# 540 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
 __attribute__ ((__dllimport__)) FILE * _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);


  wint_t fgetwc(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fgetwchar(void);
  wint_t fputwc(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fputwchar(wchar_t _Ch);
  wint_t getwc(FILE *_File);
  wint_t getwchar(void);
  wint_t putwc(wchar_t _Ch,FILE *_File);
  wint_t putwchar(wchar_t _Ch);
  wint_t ungetwc(wint_t _Ch,FILE *_File);
  wchar_t * fgetws(wchar_t * __restrict__ _Dst,int _SizeInWords,FILE * __restrict__ _File);
  int fputws(const wchar_t * __restrict__ _Str,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) wchar_t * _getws(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) int _putws(const wchar_t *_Str);
  int fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  int wprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _scwprintf(const wchar_t * __restrict__ _Format,...);
  int vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  int vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...) ;
  __attribute__ ((__dllimport__)) int _swprintf_l(wchar_t * __restrict__ ,size_t _SizeInWords,const wchar_t * __restrict__ _Format,_locale_t _Locale,... ) ;
  __attribute__ ((__dllimport__)) int vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list) ;
  __attribute__ ((__dllimport__)) int _swprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) ;

  int snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
  int vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);






  int vwscanf (const wchar_t * __restrict__ , va_list);
  int vfwscanf (FILE * __restrict__ ,const wchar_t * __restrict__ ,va_list);
  int vswscanf (const wchar_t * __restrict__ ,const wchar_t * __restrict__ ,va_list);

  __attribute__ ((__dllimport__)) int _fwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _wprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vfwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _swprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _scwprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vscwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _wprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _wprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _fwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _fwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vfwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vfwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _swprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _swprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vswprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vswprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _scwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _scwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vscwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _snwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vsnwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList) ;
  __attribute__ ((__dllimport__)) int _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args);
  __attribute__ ((__dllimport__)) int __swprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,...) ;
  __attribute__ ((__dllimport__)) int _vswprintf_l(wchar_t * __restrict__ _Dest,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList) ;
  __attribute__ ((__dllimport__)) int __vswprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,va_list _Args) ;
# 621 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
 __attribute__ ((__dllimport__)) wchar_t * _wtempnam(const wchar_t *_Directory,const wchar_t *_FilePrefix);
  __attribute__ ((__dllimport__)) int _vscwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vscwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  int fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _fwscanf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  int swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _swscanf_l(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) int _snwscanf(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _snwscanf_l(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  int wscanf(const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _wscanf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) FILE * _wfdopen(int _FileHandle ,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) FILE * _wfopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode) ;
  __attribute__ ((__dllimport__)) FILE * _wfreopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __restrict__ _OldFile) ;



  __attribute__ ((__dllimport__)) void _wperror(const wchar_t *_ErrMsg);

  __attribute__ ((__dllimport__)) FILE * _wpopen(const wchar_t *_Command,const wchar_t *_Mode);



  __attribute__ ((__dllimport__)) int _wremove(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) wchar_t * _wtmpnam(wchar_t *_Buffer);
  __attribute__ ((__dllimport__)) wint_t _fgetwc_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fputwc_nolock(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _ungetwc_nolock(wint_t _Ch,FILE *_File);
# 669 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
 __attribute__ ((__dllimport__)) wchar_t * _itow(int _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t * _ltow(long _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t * _ultow(unsigned long _Value,wchar_t *_Dest,int _Radix) ;
  double wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr);
  __attribute__ ((__dllimport__)) double _wcstod_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,_locale_t _Locale);
  float wcstof( const wchar_t * __restrict__ nptr, wchar_t ** __restrict__ endptr);

  float wcstof (const wchar_t * __restrict__, wchar_t ** __restrict__);
  long double wcstold (const wchar_t * __restrict__, wchar_t ** __restrict__);

  long wcstol(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) long _wcstol_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long wcstoul(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) unsigned long _wcstoul_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t * _wgetenv(const wchar_t *_VarName) ;




  __attribute__ ((__dllimport__)) double _wtof(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) double _wtof_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wtoi(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) int _wtoi_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) long _wtol(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) long _wtol_l(const wchar_t *_Str,_locale_t _Locale);

  __extension__ __attribute__ ((__dllimport__)) wchar_t * _i64tow(long long _Val,wchar_t *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) wchar_t * _ui64tow(unsigned long long _Val,wchar_t *_DstBuf,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long _wtoi64(const wchar_t *_Str);
  __extension__ __attribute__ ((__dllimport__)) long long _wtoi64_l(const wchar_t *_Str,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) long long _wcstoi64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long _wcstoi64_l(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _wcstoui64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _wcstoui64_l(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);





  __attribute__ ((__dllimport__)) wchar_t * _wfullpath(wchar_t *_FullPath,const wchar_t *_Path,size_t _SizeInWords);
  __attribute__ ((__dllimport__)) void _wmakepath(wchar_t *_ResultPath,const wchar_t *_Drive,const wchar_t *_Dir,const wchar_t *_Filename,const wchar_t *_Ext);




  __attribute__ ((__dllimport__)) int _wputenv(const wchar_t *_EnvString);
  __attribute__ ((__dllimport__)) void _wsearchenv(const wchar_t *_Filename,const wchar_t *_EnvVar,wchar_t *_ResultPath) ;
  __attribute__ ((__dllimport__)) void _wsplitpath(const wchar_t *_FullPath,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,wchar_t *_Ext) ;





  __attribute__ ((__dllimport__)) wchar_t * _wcsdup(const wchar_t *_Str);
  wchar_t * wcscat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
                wchar_t * wcschr(const wchar_t *_Str,wchar_t _Ch);
  int wcscmp(const wchar_t *_Str1,const wchar_t *_Str2);
  wchar_t * wcscpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
  size_t wcscspn(const wchar_t *_Str,const wchar_t *_Control);
  size_t wcslen(const wchar_t *_Str);
  size_t wcsnlen(const wchar_t *_Src,size_t _MaxCount);
  wchar_t * wcsncat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  int wcsncmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  wchar_t * wcsncpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  wchar_t * _wcsncpy_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count,_locale_t _Locale) ;
                wchar_t * wcspbrk(const wchar_t *_Str,const wchar_t *_Control);
                wchar_t * wcsrchr(const wchar_t *_Str,wchar_t _Ch);
  size_t wcsspn(const wchar_t *_Str,const wchar_t *_Control);
                wchar_t * wcsstr(const wchar_t *_Str,const wchar_t *_SubStr);
  wchar_t * wcstok(wchar_t * __restrict__ _Str,const wchar_t * __restrict__ _Delim) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcserror(int _ErrNum) ;
  __attribute__ ((__dllimport__)) wchar_t * __wcserror(const wchar_t *_Str) ;
  __attribute__ ((__dllimport__)) int _wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcsicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsnicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t * _wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcsrev(wchar_t *_Str);
  __attribute__ ((__dllimport__)) wchar_t * _wcsset(wchar_t *_Str,wchar_t _Val) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcslwr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcslwr_l(wchar_t *_String,_locale_t _Locale) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcsupr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcsupr_l(wchar_t *_String,_locale_t _Locale) ;
  size_t wcsxfrm(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t _wcsxfrm_l(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount,_locale_t _Locale);
  int wcscoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcscoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcsicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsncoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsncoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsnicoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsnicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);


  wchar_t * wcsdup(const wchar_t *_Str) ;

  int wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2) ;
  int wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount) ;
  wchar_t * wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  wchar_t * wcsrev(wchar_t *_Str) ;
  wchar_t * wcsset(wchar_t *_Str,wchar_t _Val) ;
  wchar_t * wcslwr(wchar_t *_Str) ;
  wchar_t * wcsupr(wchar_t *_Str) ;
  int wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2) ;





  struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
  };





  __attribute__ ((__dllimport__)) wchar_t * _wasctime(const struct tm *_Tm);
  wchar_t * _wctime32(const __time32_t *_Time) ;
  size_t wcsftime(wchar_t * __restrict__ _Buf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,const struct tm * __restrict__ _Tm);
  __attribute__ ((__dllimport__)) size_t _wcsftime_l(wchar_t * __restrict__ _Buf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,const struct tm * __restrict__ _Tm,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t * _wstrdate(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wchar_t * _wstrtime(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wchar_t * _wctime64(const __time64_t *_Time) ;



  wchar_t * _wctime(const time_t *_Time) ;
# 816 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
 typedef int mbstate_t;
  typedef wchar_t _Wint_t;

  wint_t btowc(int);
  size_t mbrlen(const char * __restrict__ _Ch,size_t _SizeInBytes,mbstate_t * __restrict__ _State);
  size_t mbrtowc(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SizeInBytes,mbstate_t * __restrict__ _State);
  size_t mbsrtowcs(wchar_t * __restrict__ _Dest,const char ** __restrict__ _PSrc,size_t _Count,mbstate_t * __restrict__ _State) ;
  size_t wcrtomb(char * __restrict__ _Dest,wchar_t _Source,mbstate_t * __restrict__ _State) ;
  size_t wcsrtombs(char * __restrict__ _Dest,const wchar_t ** __restrict__ _PSource,size_t _Count,mbstate_t * __restrict__ _State) ;
  int wctob(wint_t _WCh);


  wchar_t * wmemset(wchar_t *s, wchar_t c, size_t n);
                wchar_t * wmemchr(const wchar_t *s, wchar_t c, size_t n);
  int wmemcmp(const wchar_t *s1, const wchar_t *s2,size_t n);
  wchar_t * wmemcpy(wchar_t * __restrict__ s1,const wchar_t * __restrict__ s2,size_t n) ;
  wchar_t * wmemmove(wchar_t *s1, const wchar_t *s2, size_t n) ;
  int fwide(FILE *stream,int mode);
  int mbsinit(const mbstate_t *ps);
  __extension__ long long wcstoll(const wchar_t * __restrict__ nptr,wchar_t ** __restrict__ endptr, int base);
  __extension__ unsigned long long wcstoull(const wchar_t * __restrict__ nptr,wchar_t ** __restrict__ endptr, int base);


  void * memmove(void *_Dst,const void *_Src,size_t _MaxCount);
  void * memcpy(void * __restrict__ _Dst,const void * __restrict__ _Src,size_t _MaxCount) ;
# 876 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
}


#pragma pack(pop)



# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/wchar_s.h" 1 3








# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 1 3
# 9 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/wchar_s.h" 2 3
# 881 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 2 3
# 47 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 2 3
# 64 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
namespace std {

  using ::mbstate_t;

}
# 138 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
namespace std {

  using ::wint_t;

  using ::btowc;
  using ::fgetwc;
  using ::fgetws;
  using ::fputwc;
  using ::fputws;
  using ::fwide;
  using ::fwprintf;
  using ::fwscanf;
  using ::getwc;
  using ::getwchar;
  using ::mbrlen;
  using ::mbrtowc;
  using ::mbsinit;
  using ::mbsrtowcs;
  using ::putwc;
  using ::putwchar;



  using ::swscanf;
  using ::ungetwc;
  using ::vfwprintf;

  using ::vfwscanf;





  using ::vswscanf;

  using ::vwprintf;

  using ::vwscanf;

  using ::wcrtomb;
  using ::wcscat;
  using ::wcscmp;
  using ::wcscoll;
  using ::wcscpy;
  using ::wcscspn;
  using ::wcsftime;
  using ::wcslen;
  using ::wcsncat;
  using ::wcsncmp;
  using ::wcsncpy;
  using ::wcsrtombs;
  using ::wcsspn;
  using ::wcstod;

  using ::wcstof;

  using ::wcstok;
  using ::wcstol;
  using ::wcstoul;
  using ::wcsxfrm;
  using ::wctob;
  using ::wmemcmp;
  using ::wmemcpy;
  using ::wmemmove;
  using ::wmemset;
  using ::wprintf;
  using ::wscanf;
  using ::wcschr;
  using ::wcspbrk;
  using ::wcsrchr;
  using ::wcsstr;
  using ::wmemchr;


  inline wchar_t*
  wcschr(wchar_t* __p, wchar_t __c)
  { return wcschr(const_cast<const wchar_t*>(__p), __c); }

  inline wchar_t*
  wcspbrk(wchar_t* __s1, const wchar_t* __s2)
  { return wcspbrk(const_cast<const wchar_t*>(__s1), __s2); }

  inline wchar_t*
  wcsrchr(wchar_t* __p, wchar_t __c)
  { return wcsrchr(const_cast<const wchar_t*>(__p), __c); }

  inline wchar_t*
  wcsstr(wchar_t* __s1, const wchar_t* __s2)
  { return wcsstr(const_cast<const wchar_t*>(__s1), __s2); }

  inline wchar_t*
  wmemchr(wchar_t* __p, wchar_t __c, size_t __n)
  { return wmemchr(const_cast<const wchar_t*>(__p), __c, __n); }


}







namespace __gnu_cxx {






  using ::wcstold;
# 257 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
 using ::wcstoll;
  using ::wcstoull;


}

namespace std {

  using ::__gnu_cxx::wcstold;
  using ::__gnu_cxx::wcstoll;
  using ::__gnu_cxx::wcstoull;

}
# 42 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 2 3
# 69 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
namespace std {
# 89 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
 typedef long long streamoff;







  typedef ptrdiff_t streamsize;
# 110 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
 template<typename _StateT>
    class fpos
    {
    private:
      streamoff _M_off;
      _StateT _M_state;

    public:




      fpos()
      : _M_off(0), _M_state() { }
# 132 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
 fpos(streamoff __off)
      : _M_off(__off), _M_state() { }


      operator streamoff() const { return _M_off; }


      void
      state(_StateT __st)
      { _M_state = __st; }


      _StateT
      state() const
      { return _M_state; }





      fpos&
      operator+=(streamoff __off)
      {
 _M_off += __off;
 return *this;
      }





      fpos&
      operator-=(streamoff __off)
      {
 _M_off -= __off;
 return *this;
      }







      fpos
      operator+(streamoff __off) const
      {
 fpos __pos(*this);
 __pos += __off;
 return __pos;
      }







      fpos
      operator-(streamoff __off) const
      {
 fpos __pos(*this);
 __pos -= __off;
 return __pos;
      }






      streamoff
      operator-(const fpos& __other) const
      { return _M_off - __other._M_off; }
    };






  template<typename _StateT>
    inline bool
    operator==(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) == streamoff(__rhs); }

  template<typename _StateT>
    inline bool
    operator!=(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) != streamoff(__rhs); }





  typedef fpos<mbstate_t> streampos;

  typedef fpos<mbstate_t> wstreampos;
# 238 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
}
# 42 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 2 3

namespace std {
# 73 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 3
 class ios_base;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ios;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_streambuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_istream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_iostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
     typename _Alloc = allocator<_CharT> >
    class basic_stringbuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_istringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_ostringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_stringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_filebuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ifstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ofstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_fstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class ostreambuf_iterator;




  typedef basic_ios<char> ios;
  typedef basic_streambuf<char> streambuf;
  typedef basic_istream<char> istream;
  typedef basic_ostream<char> ostream;
  typedef basic_iostream<char> iostream;
  typedef basic_stringbuf<char> stringbuf;
  typedef basic_istringstream<char> istringstream;
  typedef basic_ostringstream<char> ostringstream;
  typedef basic_stringstream<char> stringstream;
  typedef basic_filebuf<char> filebuf;
  typedef basic_ifstream<char> ifstream;
  typedef basic_ofstream<char> ofstream;
  typedef basic_fstream<char> fstream;


  typedef basic_ios<wchar_t> wios;
  typedef basic_streambuf<wchar_t> wstreambuf;
  typedef basic_istream<wchar_t> wistream;
  typedef basic_ostream<wchar_t> wostream;
  typedef basic_iostream<wchar_t> wiostream;
  typedef basic_stringbuf<wchar_t> wstringbuf;
  typedef basic_istringstream<wchar_t> wistringstream;
  typedef basic_ostringstream<wchar_t> wostringstream;
  typedef basic_stringstream<wchar_t> wstringstream;
  typedef basic_filebuf<wchar_t> wfilebuf;
  typedef basic_ifstream<wchar_t> wifstream;
  typedef basic_ofstream<wchar_t> wofstream;
  typedef basic_fstream<wchar_t> wfstream;



}
# 39 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 1 3
# 35 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3
# 35 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3

#pragma GCC visibility push(default)



extern "C++" {

namespace std
{
# 60 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3
 class exception
  {
  public:
    exception() throw() { }
    virtual ~exception() throw();



    virtual const char* what() const throw();
  };



  class bad_exception : public exception
  {
  public:
    bad_exception() throw() { }



    virtual ~bad_exception() throw();


    virtual const char* what() const throw();
  };


  typedef void (*terminate_handler) ();


  typedef void (*unexpected_handler) ();


  terminate_handler set_terminate(terminate_handler) throw();



  void terminate() throw() __attribute__ ((__noreturn__));


  unexpected_handler set_unexpected(unexpected_handler) throw();



  void unexpected() __attribute__ ((__noreturn__));
# 117 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3
 bool uncaught_exception() throw() __attribute__ ((__pure__));


}

namespace __gnu_cxx {
# 140 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3
 void __verbose_terminate_handler();

}

}

#pragma GCC visibility pop
# 40 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 1 3
# 39 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3
# 39 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3

# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 1 3
# 61 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 62 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/functexcept.h" 1 3
# 37 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/functexcept.h" 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception_defines.h" 1 3
# 38 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/functexcept.h" 2 3

namespace std {


  void
  __throw_bad_exception(void) __attribute__((__noreturn__));


  void
  __throw_bad_alloc(void) __attribute__((__noreturn__));


  void
  __throw_bad_cast(void) __attribute__((__noreturn__));

  void
  __throw_bad_typeid(void) __attribute__((__noreturn__));


  void
  __throw_logic_error(const char*) __attribute__((__noreturn__));

  void
  __throw_domain_error(const char*) __attribute__((__noreturn__));

  void
  __throw_invalid_argument(const char*) __attribute__((__noreturn__));

  void
  __throw_length_error(const char*) __attribute__((__noreturn__));

  void
  __throw_out_of_range(const char*) __attribute__((__noreturn__));

  void
  __throw_runtime_error(const char*) __attribute__((__noreturn__));

  void
  __throw_range_error(const char*) __attribute__((__noreturn__));

  void
  __throw_overflow_error(const char*) __attribute__((__noreturn__));

  void
  __throw_underflow_error(const char*) __attribute__((__noreturn__));


  void
  __throw_ios_failure(const char*) __attribute__((__noreturn__));

  void
  __throw_system_error(int) __attribute__((__noreturn__));

  void
  __throw_future_error(int) __attribute__((__noreturn__));


  void
  __throw_bad_function_call() __attribute__((__noreturn__));

}
# 63 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 1 3
# 36 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
# 36 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
# 68 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
namespace __gnu_cxx {

  template<typename _Iterator, typename _Container>
    class __normal_iterator;

}

namespace std {

  struct __true_type { };
  struct __false_type { };

  template<bool>
    struct __truth_type
    { typedef __false_type __type; };

  template<>
    struct __truth_type<true>
    { typedef __true_type __type; };



  template<class _Sp, class _Tp>
    struct __traitor
    {
      enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };
      typedef typename __truth_type<__value>::__type __type;
    };


  template<typename, typename>
    struct __are_same
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_void
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_void<void>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_integer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };




  template<>
    struct __is_integer<bool>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_integer<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
# 193 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
 template<>
    struct __is_integer<short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_floating
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };


  template<>
    struct __is_floating<float>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<long double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_pointer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __is_pointer<_Tp*>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_normal_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Iterator, typename _Container>
    struct __is_normal_iterator< __gnu_cxx::__normal_iterator<_Iterator,
             _Container> >
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_arithmetic
    : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >
    { };




  template<typename _Tp>
    struct __is_fundamental
    : public __traitor<__is_void<_Tp>, __is_arithmetic<_Tp> >
    { };




  template<typename _Tp>
    struct __is_scalar
    : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >
    { };




  template<typename _Tp>
    struct __is_char
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_char<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_char<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_byte
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_byte<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_move_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
# 416 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
 template<typename _Tp>
    class __is_iterator_helper
    {
      typedef char __one;
      typedef struct { char __arr[2]; } __two;

      template<typename _Up>
        struct _Wrap_type
 { };

      template<typename _Up>
        static __one __test(_Wrap_type<typename _Up::iterator_category>*);

      template<typename _Up>
        static __two __test(...);

    public:
      static const bool __value = (sizeof(__test<_Tp>(0)) == 1
       || __is_pointer<_Tp>::__value);
    };

  template<typename _Tp>
    struct __is_iterator
    {
      enum { __value = __is_iterator_helper<_Tp>::__value };
      typedef typename __truth_type<__value>::__type __type;
    };

}
# 64 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/type_traits.h" 1 3
# 32 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/type_traits.h" 3
# 32 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/type_traits.h" 3




namespace __gnu_cxx {


  template<bool, typename>
    struct __enable_if
    { };

  template<typename _Tp>
    struct __enable_if<true, _Tp>
    { typedef _Tp __type; };



  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct __conditional_type
    { typedef _Iftrue __type; };

  template<typename _Iftrue, typename _Iffalse>
    struct __conditional_type<false, _Iftrue, _Iffalse>
    { typedef _Iffalse __type; };



  template<typename _Tp>
    struct __add_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __add_unsigned<char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<signed char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<short>
    { typedef unsigned short __type; };

  template<>
    struct __add_unsigned<int>
    { typedef unsigned int __type; };

  template<>
    struct __add_unsigned<long>
    { typedef unsigned long __type; };

  template<>
    struct __add_unsigned<long long>
    { typedef unsigned long long __type; };


  template<>
    struct __add_unsigned<bool>;

  template<>
    struct __add_unsigned<wchar_t>;



  template<typename _Tp>
    struct __remove_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __remove_unsigned<char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned short>
    { typedef short __type; };

  template<>
    struct __remove_unsigned<unsigned int>
    { typedef int __type; };

  template<>
    struct __remove_unsigned<unsigned long>
    { typedef long __type; };

  template<>
    struct __remove_unsigned<unsigned long long>
    { typedef long long __type; };


  template<>
    struct __remove_unsigned<bool>;

  template<>
    struct __remove_unsigned<wchar_t>;



  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }

  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }



  template<typename _Tp, bool = std::__is_integer<_Tp>::__value>
    struct __promote
    { typedef double __type; };

  template<typename _Tp>
    struct __promote<_Tp, false>
    { typedef _Tp __type; };

  template<typename _Tp, typename _Up>
    struct __promote_2
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;

    public:
      typedef __typeof__(__type1() + __type2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp>
    struct __promote_3
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;

    public:
      typedef __typeof__(__type1() + __type2() + __type3()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp, typename _Wp>
    struct __promote_4
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;
      typedef typename __promote<_Wp>::__type __type4;

    public:
      typedef __typeof__(__type1() + __type2() + __type3() + __type4()) __type;
    };

}
# 65 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 1 3
# 32 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3
# 32 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3




namespace __gnu_cxx {
# 51 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3
 template<typename _Value>
    struct __numeric_traits_integer
    {

      static const _Value __min = (((_Value)(-1) < 0) ? (_Value)1 << (sizeof(_Value) * 8 - ((_Value)(-1) < 0)) : (_Value)0);
      static const _Value __max = (((_Value)(-1) < 0) ? (((((_Value)1 << ((sizeof(_Value) * 8 - ((_Value)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(_Value)0);



      static const bool __is_signed = ((_Value)(-1) < 0);
      static const int __digits = (sizeof(_Value) * 8 - ((_Value)(-1) < 0));
    };

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__min;

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__max;

  template<typename _Value>
    const bool __numeric_traits_integer<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_integer<_Value>::__digits;
# 96 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3
 template<typename _Value>
    struct __numeric_traits_floating
    {

      static const int __max_digits10 = (2 + (std::__are_same<_Value, float>::__value ? 24 : std::__are_same<_Value, double>::__value ? 53 : 64) * 3010 / 10000);


      static const bool __is_signed = true;
      static const int __digits10 = (std::__are_same<_Value, float>::__value ? 6 : std::__are_same<_Value, double>::__value ? 15 : 18);
      static const int __max_exponent10 = (std::__are_same<_Value, float>::__value ? 38 : std::__are_same<_Value, double>::__value ? 308 : 4932);
    };

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_digits10;

  template<typename _Value>
    const bool __numeric_traits_floating<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__digits10;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_exponent10;

  template<typename _Value>
    struct __numeric_traits
    : public __conditional_type<std::__is_integer<_Value>::__value,
    __numeric_traits_integer<_Value>,
    __numeric_traits_floating<_Value> >::__type
    { };

}
# 66 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 1 3
# 60 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 1 3
# 34 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 35 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 2 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/concept_check.h" 1 3
# 33 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/concept_check.h" 3
# 33 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/concept_check.h" 3
# 36 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 2 3
# 95 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 3
namespace std {
# 104 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 3
 template<typename _Tp>
    inline void
    swap(_Tp& __a, _Tp& __b)
    {



      _Tp __tmp = (__a);
      __a = (__b);
      __b = (__tmp);
    }



  template<typename _Tp, size_t _Nm>
    inline void
    swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
    {
      for (size_t __n = 0; __n < _Nm; ++__n)
 swap(__a[__n], __b[__n]);
    }

}
# 61 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 2 3






namespace std {


  template<class _T1, class _T2>
    struct pair
    {
      typedef _T1 first_type;
      typedef _T2 second_type;

      _T1 first;
      _T2 second;





      pair()
      : first(), second() { }


      pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }
# 113 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
 template<class _U1, class _U2>
        pair(const pair<_U1, _U2>& __p)
 : first(__p.first),
   second(__p.second) { }
# 149 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
 };


  template<class _T1, class _T2>
    inline bool
    operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first == __y.first && __x.second == __y.second; }


  template<class _T1, class _T2>
    inline bool
    operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first < __y.first
      || (!(__y.first < __x.first) && __x.second < __y.second); }


  template<class _T1, class _T2>
    inline bool
    operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x == __y); }


  template<class _T1, class _T2>
    inline bool
    operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __y < __x; }


  template<class _T1, class _T2>
    inline bool
    operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__y < __x); }


  template<class _T1, class _T2>
    inline bool
    operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x < __y); }
# 211 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
 template<class _T1, class _T2>
    inline pair<_T1, _T2>
    make_pair(_T1 __x, _T2 __y)
    { return pair<_T1, _T2>(__x, __y); }
# 257 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
}
# 67 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 1 3
# 63 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3
# 63 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 66 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 2 3

namespace std {
# 84 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3
 struct input_iterator_tag { };


  struct output_iterator_tag { };


  struct forward_iterator_tag : public input_iterator_tag { };



  struct bidirectional_iterator_tag : public forward_iterator_tag { };



  struct random_access_iterator_tag : public bidirectional_iterator_tag { };
# 111 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3
 template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _Reference = _Tp&>
    struct iterator
    {

      typedef _Category iterator_category;

      typedef _Tp value_type;

      typedef _Distance difference_type;

      typedef _Pointer pointer;

      typedef _Reference reference;
    };
# 135 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3
 template<typename _Iterator>
    struct iterator_traits
    {
      typedef typename _Iterator::iterator_category iterator_category;
      typedef typename _Iterator::value_type value_type;
      typedef typename _Iterator::difference_type difference_type;
      typedef typename _Iterator::pointer pointer;
      typedef typename _Iterator::reference reference;
    };


  template<typename _Tp>
    struct iterator_traits<_Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef _Tp& reference;
    };


  template<typename _Tp>
    struct iterator_traits<const _Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef const _Tp* pointer;
      typedef const _Tp& reference;
    };





  template<typename _Iter>
    inline typename iterator_traits<_Iter>::iterator_category
    __iterator_category(const _Iter&)
    { return typename iterator_traits<_Iter>::iterator_category(); }



}
# 68 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 1 3
# 63 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 3
# 63 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 3



namespace std {

  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    __distance(_InputIterator __first, _InputIterator __last,
               input_iterator_tag)
    {



      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      while (__first != __last)
 {
   ++__first;
   ++__n;
 }
      return __n;
    }

  template<typename _RandomAccessIterator>
    inline typename iterator_traits<_RandomAccessIterator>::difference_type
    __distance(_RandomAccessIterator __first, _RandomAccessIterator __last,
               random_access_iterator_tag)
    {



      return __last - __first;
    }
# 108 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 3
 template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    distance(_InputIterator __first, _InputIterator __last)
    {

      return std::__distance(__first, __last,
        std::__iterator_category(__first));
    }

  template<typename _InputIterator, typename _Distance>
    inline void
    __advance(_InputIterator& __i, _Distance __n, input_iterator_tag)
    {


      while (__n--)
 ++__i;
    }

  template<typename _BidirectionalIterator, typename _Distance>
    inline void
    __advance(_BidirectionalIterator& __i, _Distance __n,
       bidirectional_iterator_tag)
    {



      if (__n > 0)
        while (__n--)
   ++__i;
      else
        while (__n++)
   --__i;
    }

  template<typename _RandomAccessIterator, typename _Distance>
    inline void
    __advance(_RandomAccessIterator& __i, _Distance __n,
              random_access_iterator_tag)
    {



      __i += __n;
    }
# 166 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 3
 template<typename _InputIterator, typename _Distance>
    inline void
    advance(_InputIterator& __i, _Distance __n)
    {

      typename iterator_traits<_InputIterator>::difference_type __d = __n;
      std::__advance(__i, __d, std::__iterator_category(__i));
    }

}
# 69 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 1 3
# 68 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
namespace std {
# 94 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
 template<typename _Iterator>
    class reverse_iterator
    : public iterator<typename iterator_traits<_Iterator>::iterator_category,
        typename iterator_traits<_Iterator>::value_type,
        typename iterator_traits<_Iterator>::difference_type,
        typename iterator_traits<_Iterator>::pointer,
                      typename iterator_traits<_Iterator>::reference>
    {
    protected:
      _Iterator current;

      typedef iterator_traits<_Iterator> __traits_type;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::pointer pointer;
      typedef typename __traits_type::reference reference;







      reverse_iterator() : current() { }




      explicit
      reverse_iterator(iterator_type __x) : current(__x) { }




      reverse_iterator(const reverse_iterator& __x)
      : current(__x.current) { }





      template<typename _Iter>
        reverse_iterator(const reverse_iterator<_Iter>& __x)
 : current(__x.base()) { }




      iterator_type
      base() const
      { return current; }






      reference
      operator*() const
      {
 _Iterator __tmp = current;
 return *--__tmp;
      }






      pointer
      operator->() const
      { return &(operator*()); }






      reverse_iterator&
      operator++()
      {
 --current;
 return *this;
      }






      reverse_iterator
      operator++(int)
      {
 reverse_iterator __tmp = *this;
 --current;
 return __tmp;
      }






      reverse_iterator&
      operator--()
      {
 ++current;
 return *this;
      }






      reverse_iterator
      operator--(int)
      {
 reverse_iterator __tmp = *this;
 ++current;
 return __tmp;
      }






      reverse_iterator
      operator+(difference_type __n) const
      { return reverse_iterator(current - __n); }






      reverse_iterator&
      operator+=(difference_type __n)
      {
 current -= __n;
 return *this;
      }






      reverse_iterator
      operator-(difference_type __n) const
      { return reverse_iterator(current + __n); }






      reverse_iterator&
      operator-=(difference_type __n)
      {
 current += __n;
 return *this;
      }






      reference
      operator[](difference_type __n) const
      { return *(*this + __n); }
    };
# 281 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
 template<typename _Iterator>
    inline bool
    operator==(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return __x.base() == __y.base(); }

  template<typename _Iterator>
    inline bool
    operator<(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() < __x.base(); }

  template<typename _Iterator>
    inline bool
    operator!=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x == __y); }

  template<typename _Iterator>
    inline bool
    operator>(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y < __x; }

  template<typename _Iterator>
    inline bool
    operator<=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__y < __x); }

  template<typename _Iterator>
    inline bool
    operator>=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x < __y); }

  template<typename _Iterator>
    inline typename reverse_iterator<_Iterator>::difference_type
    operator-(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() - __x.base(); }

  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    operator+(typename reverse_iterator<_Iterator>::difference_type __n,
       const reverse_iterator<_Iterator>& __x)
    { return reverse_iterator<_Iterator>(__x.base() - __n); }



  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y.base() < __x.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x == __y); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y < __x; }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__y < __x); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x < __y); }

  template<typename _IteratorL, typename _IteratorR>







    inline typename reverse_iterator<_IteratorL>::difference_type
    operator-(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)

    { return __y.base() - __x.base(); }
# 393 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
 template<typename _Container>
    class back_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit
      back_insert_iterator(_Container& __x) : container(&__x) { }
# 420 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
 back_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_back(__value);
 return *this;
      }
# 443 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
 back_insert_iterator&
      operator*()
      { return *this; }


      back_insert_iterator&
      operator++()
      { return *this; }


      back_insert_iterator
      operator++(int)
      { return *this; }
    };
# 469 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
 template<typename _Container>
    inline back_insert_iterator<_Container>
    back_inserter(_Container& __x)
    { return back_insert_iterator<_Container>(__x); }
# 484 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
 template<typename _Container>
    class front_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit front_insert_iterator(_Container& __x) : container(&__x) { }
# 510 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
 front_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_front(__value);
 return *this;
      }
# 533 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
 front_insert_iterator&
      operator*()
      { return *this; }


      front_insert_iterator&
      operator++()
      { return *this; }


      front_insert_iterator
      operator++(int)
      { return *this; }
    };
# 559 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
 template<typename _Container>
    inline front_insert_iterator<_Container>
    front_inserter(_Container& __x)
    { return front_insert_iterator<_Container>(__x); }
# 578 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
 template<typename _Container>
    class insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
      typename _Container::iterator iter;

    public:

      typedef _Container container_type;





      insert_iterator(_Container& __x, typename _Container::iterator __i)
      : container(&__x), iter(__i) {}
# 621 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
 insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 iter = container->insert(iter, __value);
 ++iter;
 return *this;
      }
# 647 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
 insert_iterator&
      operator*()
      { return *this; }


      insert_iterator&
      operator++()
      { return *this; }


      insert_iterator&
      operator++(int)
      { return *this; }
    };
# 673 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
 template<typename _Container, typename _Iterator>
    inline insert_iterator<_Container>
    inserter(_Container& __x, _Iterator __i)
    {
      return insert_iterator<_Container>(__x,
      typename _Container::iterator(__i));
    }



}

namespace __gnu_cxx {
# 694 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
 using std::iterator_traits;
  using std::iterator;
  template<typename _Iterator, typename _Container>
    class __normal_iterator
    {
    protected:
      _Iterator _M_current;

      typedef iterator_traits<_Iterator> __traits_type;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::iterator_category iterator_category;
      typedef typename __traits_type::value_type value_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::reference reference;
      typedef typename __traits_type::pointer pointer;

      __normal_iterator() : _M_current(_Iterator()) { }

      explicit
      __normal_iterator(const _Iterator& __i) : _M_current(__i) { }


      template<typename _Iter>
        __normal_iterator(const __normal_iterator<_Iter,
     typename __enable_if<
              (std::__are_same<_Iter, typename _Container::pointer>::__value),
        _Container>::__type>& __i)
        : _M_current(__i.base()) { }


      reference
      operator*() const
      { return *_M_current; }

      pointer
      operator->() const
      { return _M_current; }

      __normal_iterator&
      operator++()
      {
 ++_M_current;
 return *this;
      }

      __normal_iterator
      operator++(int)
      { return __normal_iterator(_M_current++); }


      __normal_iterator&
      operator--()
      {
 --_M_current;
 return *this;
      }

      __normal_iterator
      operator--(int)
      { return __normal_iterator(_M_current--); }


      reference
      operator[](const difference_type& __n) const
      { return _M_current[__n]; }

      __normal_iterator&
      operator+=(const difference_type& __n)
      { _M_current += __n; return *this; }

      __normal_iterator
      operator+(const difference_type& __n) const
      { return __normal_iterator(_M_current + __n); }

      __normal_iterator&
      operator-=(const difference_type& __n)
      { _M_current -= __n; return *this; }

      __normal_iterator
      operator-(const difference_type& __n) const
      { return __normal_iterator(_M_current - __n); }

      const _Iterator&
      base() const
      { return _M_current; }
    };
# 792 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
 template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator==(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator==(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }


  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }





  template<typename _IteratorL, typename _IteratorR, typename _Container>







    inline typename __normal_iterator<_IteratorL, _Container>::difference_type
    operator-(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)

    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline typename __normal_iterator<_Iterator, _Container>::difference_type
    operator-(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline __normal_iterator<_Iterator, _Container>
    operator+(typename __normal_iterator<_Iterator, _Container>::difference_type
       __n, const __normal_iterator<_Iterator, _Container>& __i)
    { return __normal_iterator<_Iterator, _Container>(__i.base() + __n); }

}
# 70 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3

# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\debug/debug.h" 1 3
# 47 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\debug/debug.h" 3
namespace std
{
  namespace __debug { }
}




namespace __gnu_debug
{
  using namespace std::__debug;
}
# 72 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3


namespace std {




  template<bool _BoolType>
    struct __iter_swap
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          typedef typename iterator_traits<_ForwardIterator1>::value_type
            _ValueType1;
          _ValueType1 __tmp = (*__a);
          *__a = (*__b);
          *__b = (__tmp);
 }
    };

  template<>
    struct __iter_swap<true>
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          swap(*__a, *__b);
        }
    };
# 115 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 template<typename _ForwardIterator1, typename _ForwardIterator2>
    inline void
    iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
    {
      typedef typename iterator_traits<_ForwardIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_ForwardIterator2>::value_type
 _ValueType2;
# 134 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 typedef typename iterator_traits<_ForwardIterator1>::reference
 _ReferenceType1;
      typedef typename iterator_traits<_ForwardIterator2>::reference
 _ReferenceType2;
      std::__iter_swap<__are_same<_ValueType1, _ValueType2>::__value
 && __are_same<_ValueType1&, _ReferenceType1>::__value
 && __are_same<_ValueType2&, _ReferenceType2>::__value>::
 iter_swap(__a, __b);
    }
# 156 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator2
    swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
  _ForwardIterator2 __first2)
    {





                                                       ;

      for (; __first1 != __last1; ++__first1, ++__first2)
 std::iter_swap(__first1, __first2);
      return __first2;
    }
# 184 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 template<typename _Tp>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b)
    {



      if (__b < __a)
 return __b;
      return __a;
    }
# 207 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 template<typename _Tp>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b)
    {



      if (__a < __b)
 return __b;
      return __a;
    }
# 230 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 template<typename _Tp, typename _Compare>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__b, __a))
 return __b;
      return __a;
    }
# 251 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 template<typename _Tp, typename _Compare>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__a, __b))
 return __b;
      return __a;
    }




  template<typename _Iterator, bool _HasBase>
    struct _Iter_base
    {
      typedef _Iterator iterator_type;
      static iterator_type
      _S_base(_Iterator __it)
      { return __it; }
    };

  template<typename _Iterator>
    struct _Iter_base<_Iterator, true>
    {
      typedef typename _Iterator::iterator_type iterator_type;
      static iterator_type
      _S_base(_Iterator __it)
      { return __it.base(); }
    };



  template<typename _Iterator>
    struct _Niter_base
    : _Iter_base<_Iterator, __is_normal_iterator<_Iterator>::__value>
    { };

  template<typename _Iterator>
    inline typename _Niter_base<_Iterator>::iterator_type
    __niter_base(_Iterator __it)
    { return std::_Niter_base<_Iterator>::_S_base(__it); }


  template<typename _Iterator>
    struct _Miter_base
    : _Iter_base<_Iterator, __is_move_iterator<_Iterator>::__value>
    { };

  template<typename _Iterator>
    inline typename _Miter_base<_Iterator>::iterator_type
    __miter_base(_Iterator __it)
    { return std::_Miter_base<_Iterator>::_S_base(__it); }







  template<bool, bool, typename>
    struct __copy_move
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   for (; __first != __last; ++__result, ++__first)
     *__result = *__first;
   return __result;
 }
    };
# 339 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 template<>
    struct __copy_move<false, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   typedef typename iterator_traits<_II>::difference_type _Distance;
   for(_Distance __n = __last - __first; __n > 0; --__n)
     {
       *__result = *__first;
       ++__first;
       ++__result;
     }
   return __result;
 }
    };
# 377 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 template<bool _IsMove>
    struct __copy_move<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_m(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result, __first, sizeof(_Tp) * _Num);
   return __result + _Num;
 }
    };

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a(_II __first, _II __last, _OI __result)
    {
      typedef typename iterator_traits<_II>::value_type _ValueTypeI;
      typedef typename iterator_traits<_OI>::value_type _ValueTypeO;
      typedef typename iterator_traits<_II>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueTypeI)
                      && __is_pointer<_II>::__value
                      && __is_pointer<_OI>::__value
        && __are_same<_ValueTypeI, _ValueTypeO>::__value);

      return std::__copy_move<_IsMove, __simple,
                       _Category>::__copy_m(__first, __last, __result);
    }



  template<typename _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits>
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator;

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(_CharT*, _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(const _CharT*, const _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT, char_traits<_CharT> >,
     istreambuf_iterator<_CharT, char_traits<_CharT> >, _CharT*);

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a2(_II __first, _II __last, _OI __result)
    {
      return _OI(std::__copy_move_a<_IsMove>(std::__niter_base(__first),
          std::__niter_base(__last),
          std::__niter_base(__result)));
    }
# 462 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 template<typename _II, typename _OI>
    inline _OI
    copy(_II __first, _II __last, _OI __result)
    {




                                                     ;

      return (std::__copy_move_a2<__is_move_iterator<_II>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
# 514 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 template<bool, bool, typename>
    struct __copy_move_backward
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   while (__first != __last)
     *--__result = *--__last;
   return __result;
 }
    };
# 542 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 template<>
    struct __copy_move_backward<false, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   typename iterator_traits<_BI1>::difference_type __n;
   for (__n = __last - __first; __n > 0; --__n)
     *--__result = *--__last;
   return __result;
 }
    };
# 572 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 template<bool _IsMove>
    struct __copy_move_backward<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_move_b(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num);
   return __result - _Num;
 }
    };

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      typedef typename iterator_traits<_BI1>::value_type _ValueType1;
      typedef typename iterator_traits<_BI2>::value_type _ValueType2;
      typedef typename iterator_traits<_BI1>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueType1)
                      && __is_pointer<_BI1>::__value
                      && __is_pointer<_BI2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__copy_move_backward<_IsMove, __simple,
                                _Category>::__copy_move_b(__first,
         __last,
         __result);
    }

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      return _BI2(std::__copy_move_backward_a<_IsMove>
    (std::__niter_base(__first), std::__niter_base(__last),
     std::__niter_base(__result)));
    }
# 631 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 template<typename _BI1, typename _BI2>
    inline _BI2
    copy_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {






                                                     ;

      return (std::__copy_move_backward_a2<__is_move_iterator<_BI1>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
# 689 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
       const _Tp& __value)
    {
      for (; __first != __last; ++__first)
 *__first = __value;
    }

  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __first != __last; ++__first)
 *__first = __tmp;
    }


  template<typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, void>::__type
    __fill_a(_Tp* __first, _Tp* __last, const _Tp& __c)
    {
      const _Tp __tmp = __c;
      __builtin_memset(__first, static_cast<unsigned char>(__tmp),
         __last - __first);
    }
# 733 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 template<typename _ForwardIterator, typename _Tp>
    inline void
    fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value)
    {



                                                     ;

      std::__fill_a(std::__niter_base(__first), std::__niter_base(__last),
      __value);
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      for (; __n > 0; --__n, ++__first)
 *__first = __value;
      return __first;
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __n > 0; --__n, ++__first)
 *__first = __tmp;
      return __first;
    }

  template<typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, _Tp*>::__type
    __fill_n_a(_Tp* __first, _Size __n, const _Tp& __c)
    {
      std::__fill_a(__first, __first + __n, __c);
      return __first + __n;
    }
# 791 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 template<typename _OI, typename _Size, typename _Tp>
    inline _OI
    fill_n(_OI __first, _Size __n, const _Tp& __value)
    {



      return _OI(std::__fill_n_a(std::__niter_base(__first), __n, __value));
    }

  template<bool _BoolType>
    struct __equal
    {
      template<typename _II1, typename _II2>
        static bool
        equal(_II1 __first1, _II1 __last1, _II2 __first2)
        {
   for (; __first1 != __last1; ++__first1, ++__first2)
     if (!(*__first1 == *__first2))
       return false;
   return true;
 }
    };

  template<>
    struct __equal<true>
    {
      template<typename _Tp>
        static bool
        equal(const _Tp* __first1, const _Tp* __last1, const _Tp* __first2)
        {
   return !__builtin_memcmp(__first1, __first2, sizeof(_Tp)
       * (__last1 - __first1));
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __equal_aux(_II1 __first1, _II1 __last1, _II2 __first2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple = (__is_integer<_ValueType1>::__value
                      && __is_pointer<_II1>::__value
                      && __is_pointer<_II2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__equal<__simple>::equal(__first1, __last1, __first2);
    }


  template<typename, typename>
    struct __lc_rai
    {
      template<typename _II1, typename _II2>
        static _II1
        __newlast1(_II1, _II1 __last1, _II2, _II2)
        { return __last1; }

      template<typename _II>
        static bool
        __cnd2(_II __first, _II __last)
        { return __first != __last; }
    };

  template<>
    struct __lc_rai<random_access_iterator_tag, random_access_iterator_tag>
    {
      template<typename _RAI1, typename _RAI2>
        static _RAI1
        __newlast1(_RAI1 __first1, _RAI1 __last1,
     _RAI2 __first2, _RAI2 __last2)
        {
   const typename iterator_traits<_RAI1>::difference_type
     __diff1 = __last1 - __first1;
   const typename iterator_traits<_RAI2>::difference_type
     __diff2 = __last2 - __first2;
   return __diff2 < __diff1 ? __first1 + __diff2 : __last1;
 }

      template<typename _RAI>
        static bool
        __cnd2(_RAI, _RAI)
        { return true; }
    };

  template<bool _BoolType>
    struct __lexicographical_compare
    {
      template<typename _II1, typename _II2>
        static bool __lc(_II1, _II1, _II2, _II2);
    };

  template<bool _BoolType>
    template<typename _II1, typename _II2>
      bool
      __lexicographical_compare<_BoolType>::
      __lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
      {
 typedef typename iterator_traits<_II1>::iterator_category _Category1;
 typedef typename iterator_traits<_II2>::iterator_category _Category2;
 typedef std::__lc_rai<_Category1, _Category2> __rai_type;

 __last1 = __rai_type::__newlast1(__first1, __last1,
      __first2, __last2);
 for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
      ++__first1, ++__first2)
   {
     if (*__first1 < *__first2)
       return true;
     if (*__first2 < *__first1)
       return false;
   }
 return __first1 == __last1 && __first2 != __last2;
      }

  template<>
    struct __lexicographical_compare<true>
    {
      template<typename _Tp, typename _Up>
        static bool
        __lc(const _Tp* __first1, const _Tp* __last1,
      const _Up* __first2, const _Up* __last2)
 {
   const size_t __len1 = __last1 - __first1;
   const size_t __len2 = __last2 - __first2;
   const int __result = __builtin_memcmp(__first1, __first2,
      std::min(__len1, __len2));
   return __result != 0 ? __result < 0 : __len1 < __len2;
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __lexicographical_compare_aux(_II1 __first1, _II1 __last1,
      _II2 __first2, _II2 __last2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple =
 (__is_byte<_ValueType1>::__value && __is_byte<_ValueType2>::__value
  && !__gnu_cxx::__numeric_traits<_ValueType1>::__is_signed
  && !__gnu_cxx::__numeric_traits<_ValueType2>::__is_signed
  && __is_pointer<_II1>::__value
  && __is_pointer<_II2>::__value);

      return std::__lexicographical_compare<__simple>::__lc(__first1, __last1,
           __first2, __last2);
    }
# 952 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 template<typename _ForwardIterator, typename _Tp>
    _ForwardIterator
    lower_bound(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;




                                                                  ;

      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle;

      while (__len > 0)
 {
   __half = __len >> 1;
   __middle = __first;
   std::advance(__middle, __half);
   if (*__middle < __val)
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
   else
     __len = __half;
 }
      return __first;
    }



  template<typename _Size>
    inline _Size
    __lg(_Size __n)
    {
      _Size __k;
      for (__k = 0; __n != 0; __n >>= 1)
 ++__k;
      return __k - 1;
    }

  inline int
  __lg(int __n)
  { return sizeof(int) * 8 - 1 - __builtin_clz(__n); }

  inline long
  __lg(long __n)
  { return sizeof(long) * 8 - 1 - __builtin_clzl(__n); }

  inline long long
  __lg(long long __n)
  { return sizeof(long long) * 8 - 1 - __builtin_clzll(__n); }

}

namespace std {
# 1028 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 template<typename _II1, typename _II2>
    inline bool
    equal(_II1 __first1, _II1 __last1, _II2 __first2)
    {






                                                       ;

      return std::__equal_aux(std::__niter_base(__first1),
         std::__niter_base(__last1),
         std::__niter_base(__first2));
    }
# 1060 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    inline bool
    equal(_IIter1 __first1, _IIter1 __last1,
   _IIter2 __first2, _BinaryPredicate __binary_pred)
    {



                                                       ;

      for (; __first1 != __last1; ++__first1, ++__first2)
 if (!bool(__binary_pred(*__first1, *__first2)))
   return false;
      return true;
    }
# 1091 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 template<typename _II1, typename _II2>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2)
    {

      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;




                                                       ;
                                                       ;

      return std::__lexicographical_compare_aux(std::__niter_base(__first1),
      std::__niter_base(__last1),
      std::__niter_base(__first2),
      std::__niter_base(__last2));
    }
# 1125 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 template<typename _II1, typename _II2, typename _Compare>
    bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2, _Compare __comp)
    {
      typedef typename iterator_traits<_II1>::iterator_category _Category1;
      typedef typename iterator_traits<_II2>::iterator_category _Category2;
      typedef std::__lc_rai<_Category1, _Category2> __rai_type;




                                                       ;
                                                       ;

      __last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2);
      for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
    ++__first1, ++__first2)
 {
   if (__comp(*__first1, *__first2))
     return true;
   if (__comp(*__first2, *__first1))
     return false;
 }
      return __first1 == __last1 && __first2 != __last2;
    }
# 1165 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 template<typename _InputIterator1, typename _InputIterator2>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2)
    {






                                                       ;

      while (__first1 != __last1 && *__first1 == *__first2)
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
# 1202 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
 template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {



                                                       ;

      while (__first1 != __last1 && bool(__binary_pred(*__first1, *__first2)))
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }

}
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 2 3

# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 1 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 44 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 2 3
# 43 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 2 3








namespace __gnu_cxx {
# 63 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3
 template<typename _CharT>
    struct _Char_types
    {
      typedef unsigned long int_type;
      typedef std::streampos pos_type;
      typedef std::streamoff off_type;
      typedef std::mbstate_t state_type;
    };
# 88 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3
 template<typename _CharT>
    struct char_traits
    {
      typedef _CharT char_type;
      typedef typename _Char_types<_CharT>::int_type int_type;
      typedef typename _Char_types<_CharT>::pos_type pos_type;
      typedef typename _Char_types<_CharT>::off_type off_type;
      typedef typename _Char_types<_CharT>::state_type state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, std::size_t __n);

      static std::size_t
      length(const char_type* __s);

      static const char_type*
      find(const char_type* __s, std::size_t __n, const char_type& __a);

      static char_type*
      move(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      copy(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      assign(char_type* __s, std::size_t __n, char_type __a);

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((-1)); }

      static int_type
      not_eof(const int_type& __c)
      { return !eq_int_type(__c, eof()) ? __c : to_int_type(char_type()); }
    };

  template<typename _CharT>
    int
    char_traits<_CharT>::
    compare(const char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
 if (lt(__s1[__i], __s2[__i]))
   return -1;
 else if (lt(__s2[__i], __s1[__i]))
   return 1;
      return 0;
    }

  template<typename _CharT>
    std::size_t
    char_traits<_CharT>::
    length(const char_type* __p)
    {
      std::size_t __i = 0;
      while (!eq(__p[__i], char_type()))
        ++__i;
      return __i;
    }

  template<typename _CharT>
    const typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    find(const char_type* __s, std::size_t __n, const char_type& __a)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
        if (eq(__s[__i], __a))
          return __s + __i;
      return 0;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    move(char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      return static_cast<_CharT*>(__builtin_memmove(__s1, __s2,
          __n * sizeof(char_type)));
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    copy(char_type* __s1, const char_type* __s2, std::size_t __n)
    {

      std::copy(__s2, __s2 + __n, __s1);
      return __s1;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    assign(char_type* __s, std::size_t __n, char_type __a)
    {

      std::fill_n(__s, __n, __a);
      return __s;
    }

}

namespace std {
# 229 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3
 template<class _CharT>
    struct char_traits : public __gnu_cxx::char_traits<_CharT>
    { };



  template<>
    struct char_traits<char>
    {
      typedef char char_type;
      typedef int int_type;
      typedef streampos pos_type;
      typedef streamoff off_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      { return __builtin_memcmp(__s1, __s2, __n); }

      static size_t
      length(const char_type* __s)
      { return __builtin_strlen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      { return static_cast<const char_type*>(__builtin_memchr(__s, __a, __n)); }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      { return static_cast<char_type*>(__builtin_memmove(__s1, __s2, __n)); }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      { return static_cast<char_type*>(__builtin_memcpy(__s1, __s2, __n)); }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      { return static_cast<char_type*>(__builtin_memset(__s, __a, __n)); }

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }



      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(static_cast<unsigned char>(__c)); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((-1)); }

      static int_type
      not_eof(const int_type& __c)
      { return (__c == eof()) ? 0 : __c; }
  };




  template<>
    struct char_traits<wchar_t>
    {
      typedef wchar_t char_type;
      typedef wint_t int_type;
      typedef streamoff off_type;
      typedef wstreampos pos_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemcmp(__s1, __s2, __n); }

      static size_t
      length(const char_type* __s)
      { return wcslen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      { return wmemchr(__s, __a, __n); }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemmove(__s1, __s2, __n); }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemcpy(__s1, __s2, __n); }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      { return wmemset(__s, __a, __n); }

      static char_type
      to_char_type(const int_type& __c)
      { return char_type(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return int_type(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((wint_t)(0xFFFF)); }

      static int_type
      not_eof(const int_type& __c)
      { return eq_int_type(__c, eof()) ? 0 : __c; }
  };


}
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 1 3
# 39 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 3
# 39 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 1 3
# 40 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 3
# 40 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 3

# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\clocale" 1 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\clocale" 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\clocale" 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\locale.h" 1 3








# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\locale.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\locale.h" 3
 struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
  };
# 75 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\locale.h" 3
 int _configthreadlocale(int _Flag);
  char * setlocale(int _Category,const char *_Locale);
  __attribute__ ((__dllimport__)) struct lconv * localeconv(void);
  _locale_t _get_current_locale(void);
  _locale_t _create_locale(int _Category,const char *_Locale);
  void _free_locale(_locale_t _Locale);
  _locale_t __get_current_locale(void);
  _locale_t __create_locale(int _Category,const char *_Locale);
  void __free_locale(_locale_t _Locale);







}


#pragma pack(pop)
# 44 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\clocale" 2 3








namespace std {

  using ::lconv;
  using ::setlocale;
  using ::localeconv;

}
# 42 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 2 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 43 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 2 3



namespace std {

  typedef int* __c_locale;





  inline int
  __convert_from_v(const __c_locale&, char* __out,
     const int __size __attribute__((__unused__)),
     const char* __fmt, ...)
  {
    char* __old = std::setlocale(4, __null);
    char* __sav = __null;
    if (__builtin_strcmp(__old, "C"))
      {
 const size_t __len = __builtin_strlen(__old) + 1;
 __sav = new char[__len];
 __builtin_memcpy(__sav, __old, __len);
 std::setlocale(4, "C");
      }

    __builtin_va_list __args;
    __builtin_va_start(__args, __fmt);


    const int __ret = __builtin_vsnprintf(__out, __size, __fmt, __args);




    __builtin_va_end(__args);

    if (__sav)
      {
 std::setlocale(4, __sav);
 delete [] __sav;
      }
    return __ret;
  }

}
# 42 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 2 3

# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 1 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 1 3








# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 2 3



extern "C" {
# 72 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 3
 extern const unsigned char __newclmap[];
  extern const unsigned char __newcumap[];
  extern pthreadlocinfo __ptlocinfo;
  extern pthreadmbcinfo __ptmbcinfo;
  extern int __globallocalestatus;
  extern int __locale_changed;
  extern struct threadlocaleinfostruct __initiallocinfo;
  extern _locale_tstruct __initiallocalestructinfo;
  pthreadlocinfo __updatetlocinfo(void);
  pthreadmbcinfo __updatetmbcinfo(void);
# 100 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 3
 __attribute__ ((__dllimport__)) int _isctype(int _C,int _Type);
  __attribute__ ((__dllimport__)) int _isctype_l(int _C,int _Type,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isalpha(int _C);
  __attribute__ ((__dllimport__)) int _isalpha_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isupper(int _C);
  __attribute__ ((__dllimport__)) int _isupper_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int islower(int _C);
  __attribute__ ((__dllimport__)) int _islower_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isdigit(int _C);
  __attribute__ ((__dllimport__)) int _isdigit_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isxdigit(int _C);
  __attribute__ ((__dllimport__)) int _isxdigit_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isspace(int _C);
  __attribute__ ((__dllimport__)) int _isspace_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int ispunct(int _C);
  __attribute__ ((__dllimport__)) int _ispunct_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isalnum(int _C);
  __attribute__ ((__dllimport__)) int _isalnum_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isprint(int _C);
  __attribute__ ((__dllimport__)) int _isprint_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isgraph(int _C);
  __attribute__ ((__dllimport__)) int _isgraph_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int iscntrl(int _C);
  __attribute__ ((__dllimport__)) int _iscntrl_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int toupper(int _C);
  __attribute__ ((__dllimport__)) int tolower(int _C);
  __attribute__ ((__dllimport__)) int _tolower(int _C);
  __attribute__ ((__dllimport__)) int _tolower_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _toupper(int _C);
  __attribute__ ((__dllimport__)) int _toupper_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __isascii(int _C);
  __attribute__ ((__dllimport__)) int __toascii(int _C);
  __attribute__ ((__dllimport__)) int __iscsymf(int _C);
  __attribute__ ((__dllimport__)) int __iscsym(int _C);


int isblank(int _C);
# 193 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 3
 extern int * __imp___mb_cur_max;
# 275 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 3
}
# 44 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 2 3
# 63 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3
namespace std {

  using ::isalnum;
  using ::isalpha;
  using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isupper;
  using ::isxdigit;
  using ::tolower;
  using ::toupper;

}
# 44 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 2 3

namespace std {
# 54 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 3
 class locale;

  template<typename _Facet>
    bool
    has_facet(const locale&) throw();

  template<typename _Facet>
    const _Facet&
    use_facet(const locale&);


  template<typename _CharT>
    bool
    isspace(_CharT, const locale&);

  template<typename _CharT>
    bool
    isprint(_CharT, const locale&);

  template<typename _CharT>
    bool
    iscntrl(_CharT, const locale&);

  template<typename _CharT>
    bool
    isupper(_CharT, const locale&);

  template<typename _CharT>
    bool
    islower(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalpha(_CharT, const locale&);

  template<typename _CharT>
    bool
    isdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    ispunct(_CharT, const locale&);

  template<typename _CharT>
    bool
    isxdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalnum(_CharT, const locale&);

  template<typename _CharT>
    bool
    isgraph(_CharT, const locale&);

  template<typename _CharT>
    _CharT
    toupper(_CharT, const locale&);

  template<typename _CharT>
    _CharT
    tolower(_CharT, const locale&);


  class ctype_base;
  template<typename _CharT>
    class ctype;
  template<> class ctype<char>;

  template<> class ctype<wchar_t>;

  template<typename _CharT>
    class ctype_byname;


  class codecvt_base;
  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt;
  template<> class codecvt<char, char, mbstate_t>;

  template<> class codecvt<wchar_t, char, mbstate_t>;

  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt_byname;



  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class num_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class num_put;

  template<typename _CharT> class numpunct;
  template<typename _CharT> class numpunct_byname;


  template<typename _CharT>
    class collate;
  template<typename _CharT> class
    collate_byname;


  class time_base;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get_byname;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put_byname;


  class money_base;

  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class money_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class money_put;

  template<typename _CharT, bool _Intl = false>
    class moneypunct;
  template<typename _CharT, bool _Intl = false>
    class moneypunct_byname;


  class messages_base;
  template<typename _CharT>
    class messages;
  template<typename _CharT>
    class messages_byname;

}
# 42 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 1 3
# 39 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
# 39 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3

# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 1 3
# 34 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr.h" 1 3
# 30 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr.h" 3
#pragma GCC visibility push(default)
# 162 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr.h" 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 1 3
# 70 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\errno.h" 1 3








# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\errno.h" 2 3



extern "C" {




__attribute__ ((__dllimport__)) extern int * _errno(void);


errno_t _set_errno(int _Value);
errno_t _get_errno(int *_Value);
# 74 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\errno.h" 3
}
# 71 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 2 3

# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 73 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 2 3
# 340 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
extern "C" {


typedef unsigned long __gthread_key_t;

typedef struct {
  int done;
  long started;
} __gthread_once_t;

typedef struct {
  long counter;
  void *sema;
} __gthread_mutex_t;

typedef struct {
  long counter;
  long depth;
  unsigned long owner;
  void *sema;
} __gthread_recursive_mutex_t;
# 374 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
extern int _CRT_MT;
extern int __mingwthr_key_dtor (unsigned long, void (*) (void *));
# 401 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
static inline int
__gthread_active_p (void)
{

  return _CRT_MT;



}







extern int __gthr_win32_once (__gthread_once_t *, void (*) (void));
extern int __gthr_win32_key_create (__gthread_key_t *, void (*) (void*));
extern int __gthr_win32_key_delete (__gthread_key_t);
extern void * __gthr_win32_getspecific (__gthread_key_t);
extern int __gthr_win32_setspecific (__gthread_key_t, const void *);
extern void __gthr_win32_mutex_init_function (__gthread_mutex_t *);
extern int __gthr_win32_mutex_lock (__gthread_mutex_t *);
extern int __gthr_win32_mutex_trylock (__gthread_mutex_t *);
extern int __gthr_win32_mutex_unlock (__gthread_mutex_t *);
extern void
  __gthr_win32_recursive_mutex_init_function (__gthread_recursive_mutex_t *);
extern int __gthr_win32_recursive_mutex_lock (__gthread_recursive_mutex_t *);
extern int
  __gthr_win32_recursive_mutex_trylock (__gthread_recursive_mutex_t *);
extern int __gthr_win32_recursive_mutex_unlock (__gthread_recursive_mutex_t *);
extern void __gthr_win32_mutex_destroy (__gthread_mutex_t *);

static inline int
__gthread_once (__gthread_once_t *__once, void (*__func) (void))
{
  if (__gthread_active_p ())
    return __gthr_win32_once (__once, __func);
  else
    return -1;
}

static inline int
__gthread_key_create (__gthread_key_t *__key, void (*__dtor) (void *))
{
  return __gthr_win32_key_create (__key, __dtor);
}

static inline int
__gthread_key_delete (__gthread_key_t __key)
{
  return __gthr_win32_key_delete (__key);
}

static inline void *
__gthread_getspecific (__gthread_key_t __key)
{
  return __gthr_win32_getspecific (__key);
}

static inline int
__gthread_setspecific (__gthread_key_t __key, const void *__ptr)
{
  return __gthr_win32_setspecific (__key, __ptr);
}

static inline void
__gthread_mutex_init_function (__gthread_mutex_t *__mutex)
{
  __gthr_win32_mutex_init_function (__mutex);
}

static inline void
__gthread_mutex_destroy (__gthread_mutex_t *__mutex)
{
  __gthr_win32_mutex_destroy (__mutex);
}

static inline int
__gthread_mutex_lock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_lock (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_trylock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_trylock (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_unlock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_unlock (__mutex);
  else
    return 0;
}

static inline void
__gthread_recursive_mutex_init_function (__gthread_recursive_mutex_t *__mutex)
{
   __gthr_win32_recursive_mutex_init_function (__mutex);
}

static inline int
__gthread_recursive_mutex_lock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_lock (__mutex);
  else
    return 0;
}

static inline int
__gthread_recursive_mutex_trylock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_trylock (__mutex);
  else
    return 0;
}

static inline int
__gthread_recursive_mutex_unlock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_unlock (__mutex);
  else
    return 0;
}
# 767 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
}
# 163 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr.h" 2 3







#pragma GCC visibility pop
# 35 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 2 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/atomic_word.h" 1 3
# 32 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/atomic_word.h" 3
typedef int _Atomic_word;
# 36 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 2 3

namespace __gnu_cxx {






  static inline _Atomic_word
  __exchange_and_add(volatile _Atomic_word* __mem, int __val)
  { return __sync_fetch_and_add(__mem, __val); }

  static inline void
  __atomic_add(volatile _Atomic_word* __mem, int __val)
  { __sync_fetch_and_add(__mem, __val); }
# 61 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 3
 static inline _Atomic_word
  __exchange_and_add_single(_Atomic_word* __mem, int __val)
  {
    _Atomic_word __result = *__mem;
    *__mem += __val;
    return __result;
  }

  static inline void
  __atomic_add_single(_Atomic_word* __mem, int __val)
  { *__mem += __val; }

  static inline _Atomic_word
  __attribute__ ((__unused__))
  __exchange_and_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      return __exchange_and_add(__mem, __val);
    else
      return __exchange_and_add_single(__mem, __val);



  }

  static inline void
  __attribute__ ((__unused__))
  __atomic_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      __atomic_add(__mem, __val);
    else
      __atomic_add_single(__mem, __val);



  }

}
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 2 3

# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 1 3
# 39 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
# 39 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 1 3
# 38 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 3
# 38 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 3




# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 1 3
# 48 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++allocator.h" 1 3
# 34 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++allocator.h" 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 1 3
# 33 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 1 3
# 39 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 3
# 39 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 3

# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 2 3


#pragma GCC visibility push(default)

extern "C++" {

namespace std
{






  class bad_alloc : public exception
  {
  public:
    bad_alloc() throw() { }



    virtual ~bad_alloc() throw();


    virtual const char* what() const throw();
  };

  struct nothrow_t { };

  extern const nothrow_t nothrow;



  typedef void (*new_handler)();



  new_handler set_new_handler(new_handler) throw();
}
# 92 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 3
void* operator new(std::size_t) throw (std::bad_alloc);
void* operator new[](std::size_t) throw (std::bad_alloc);
void operator delete(void*) throw();
void operator delete[](void*) throw();
void* operator new(std::size_t, const std::nothrow_t&) throw();
void* operator new[](std::size_t, const std::nothrow_t&) throw();
void operator delete(void*, const std::nothrow_t&) throw();
void operator delete[](void*, const std::nothrow_t&) throw();


inline void* operator new(std::size_t, void* __p) throw() { return __p; }
inline void* operator new[](std::size_t, void* __p) throw() { return __p; }


inline void operator delete (void*, void*) throw() { }
inline void operator delete[](void*, void*) throw() { }

}

#pragma GCC visibility pop
# 34 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 2 3



namespace __gnu_cxx {

  using std::size_t;
  using std::ptrdiff_t;
# 50 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 3
 template<typename _Tp>
    class new_allocator
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef new_allocator<_Tp1> other; };

      new_allocator() throw() { }

      new_allocator(const new_allocator&) throw() { }

      template<typename _Tp1>
        new_allocator(const new_allocator<_Tp1>&) throw() { }

      ~new_allocator() throw() { }

      pointer
      address(reference __x) const { return &__x; }

      const_pointer
      address(const_reference __x) const { return &__x; }



      pointer
      allocate(size_type __n, const void* = 0)
      {
 if (__n > this->max_size())
   std::__throw_bad_alloc();

 return static_cast<_Tp*>(::operator new(__n * sizeof(_Tp)));
      }


      void
      deallocate(pointer __p, size_type)
      { ::operator delete(__p); }

      size_type
      max_size() const throw()
      { return size_t(-1) / sizeof(_Tp); }



      void
      construct(pointer __p, const _Tp& __val)
      { ::new((void *)__p) _Tp(__val); }
# 114 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 3
 void
      destroy(pointer __p) { __p->~_Tp(); }
    };

  template<typename _Tp>
    inline bool
    operator==(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator!=(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return false; }

}
# 35 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++allocator.h" 2 3
# 49 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 2 3

namespace std {
# 59 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 3
 template<typename _Tp>
    class allocator;


  template<>
    class allocator<void>
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef void* pointer;
      typedef const void* const_pointer;
      typedef void value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };
    };
# 85 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 3
 template<typename _Tp>
    class allocator: public __gnu_cxx::new_allocator<_Tp>
    {
   public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };

      allocator() throw() { }

      allocator(const allocator& __a) throw()
      : __gnu_cxx::new_allocator<_Tp>(__a) { }

      template<typename _Tp1>
        allocator(const allocator<_Tp1>&) throw() { }

      ~allocator() throw() { }


    };

  template<typename _T1, typename _T2>
    inline bool
    operator==(const allocator<_T1>&, const allocator<_T2>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator==(const allocator<_Tp>&, const allocator<_Tp>&)
    { return true; }

  template<typename _T1, typename _T2>
    inline bool
    operator!=(const allocator<_T1>&, const allocator<_T2>&)
    { return false; }

  template<typename _Tp>
    inline bool
    operator!=(const allocator<_Tp>&, const allocator<_Tp>&)
    { return false; }





  extern template class allocator<char>;
  extern template class allocator<wchar_t>;






  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_swap
    { static void _S_do_it(_Alloc&, _Alloc&) { } };

  template<typename _Alloc>
    struct __alloc_swap<_Alloc, false>
    {
      static void
      _S_do_it(_Alloc& __one, _Alloc& __two)
      {

 if (__one != __two)
   swap(__one, __two);
      }
    };


  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_neq
    {
      static bool
      _S_do_it(const _Alloc&, const _Alloc&)
      { return false; }
    };

  template<typename _Alloc>
    struct __alloc_neq<_Alloc, false>
    {
      static bool
      _S_do_it(const _Alloc& __one, const _Alloc& __two)
      { return __one != __two; }
    };
# 204 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 3
}
# 43 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream_insert.h" 1 3
# 33 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream_insert.h" 3
# 33 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream_insert.h" 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cxxabi-forced.h" 1 3
# 33 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cxxabi-forced.h" 3
# 33 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cxxabi-forced.h" 3

#pragma GCC visibility push(default)


namespace __cxxabiv1
{
# 46 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cxxabi-forced.h"
class __forced_unwind
  {
            ~__forced_unwind() throw();
# 52 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cxxabi-forced.h"

  };
# 53 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cxxabi-forced.h"

}


#pragma GCC visibility pop
# 36 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream_insert.h" 2 3

namespace std {

  template<typename _CharT, typename _Traits>
    inline void
    __ostream_write(basic_ostream<_CharT, _Traits>& __out,
      const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const streamsize __put = __out.rdbuf()->sputn(__s, __n);
      if (__put != __n)
 __out.setstate(__ios_base::badbit);
    }

  template<typename _CharT, typename _Traits>
    inline void
    __ostream_fill(basic_ostream<_CharT, _Traits>& __out, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const _CharT __c = __out.fill();
      for (; __n > 0; --__n)
 {
   const typename _Traits::int_type __put = __out.rdbuf()->sputc(__c);
   if (_Traits::eq_int_type(__put, _Traits::eof()))
     {
       __out.setstate(__ios_base::badbit);
       break;
     }
 }
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    __ostream_insert(basic_ostream<_CharT, _Traits>& __out,
       const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      typename __ostream_type::sentry __cerb(__out);
      if (__cerb)
 {
   if (true)
     {
       const streamsize __w = __out.width();
       if (__w > __n)
  {
    const bool __left = ((__out.flags()
     & __ios_base::adjustfield)
           == __ios_base::left);
    if (!__left)
      __ostream_fill(__out, __w - __n);
    if (__out.good())
      __ostream_write(__out, __s, __n);
    if (__left && __out.good())
      __ostream_fill(__out, __w - __n);
  }
       else
  __ostream_write(__out, __s, __n);
       __out.width(0);
     }
   if (false)
     {
       __out._M_setstate(__ios_base::badbit);
                              ;
     }
   if (false)
     { __out._M_setstate(__ios_base::badbit); }
 }
      return __out;
    }





  extern template ostream& __ostream_insert(ostream&, const char*, streamsize);


  extern template wostream& __ostream_insert(wostream&, const wchar_t*,
          streamsize);



}
# 46 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3



# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 1 3
# 60 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
namespace std {
# 99 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
 template<typename _Arg, typename _Result>
    struct unary_function
    {
      typedef _Arg argument_type;


      typedef _Result result_type;
    };




  template<typename _Arg1, typename _Arg2, typename _Result>
    struct binary_function
    {
      typedef _Arg1 first_argument_type;


      typedef _Arg2 second_argument_type;
      typedef _Result result_type;
    };
# 134 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
 template<typename _Tp>
    struct plus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x + __y; }
    };


  template<typename _Tp>
    struct minus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x - __y; }
    };


  template<typename _Tp>
    struct multiplies : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x * __y; }
    };


  template<typename _Tp>
    struct divides : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x / __y; }
    };


  template<typename _Tp>
    struct modulus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x % __y; }
    };


  template<typename _Tp>
    struct negate : public unary_function<_Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x) const
      { return -__x; }
    };
# 198 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
 template<typename _Tp>
    struct equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x == __y; }
    };


  template<typename _Tp>
    struct not_equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x != __y; }
    };


  template<typename _Tp>
    struct greater : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x > __y; }
    };


  template<typename _Tp>
    struct less : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x < __y; }
    };


  template<typename _Tp>
    struct greater_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x >= __y; }
    };


  template<typename _Tp>
    struct less_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x <= __y; }
    };
# 262 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
 template<typename _Tp>
    struct logical_and : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x && __y; }
    };


  template<typename _Tp>
    struct logical_or : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x || __y; }
    };


  template<typename _Tp>
    struct logical_not : public unary_function<_Tp, bool>
    {
      bool
      operator()(const _Tp& __x) const
      { return !__x; }
    };




  template<typename _Tp>
    struct bit_and : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x & __y; }
    };

  template<typename _Tp>
    struct bit_or : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x | __y; }
    };

  template<typename _Tp>
    struct bit_xor : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x ^ __y; }
    };
# 345 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
 template<typename _Predicate>
    class unary_negate
    : public unary_function<typename _Predicate::argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
      explicit
      unary_negate(const _Predicate& __x) : _M_pred(__x) { }

      bool
      operator()(const typename _Predicate::argument_type& __x) const
      { return !_M_pred(__x); }
    };


  template<typename _Predicate>
    inline unary_negate<_Predicate>
    not1(const _Predicate& __pred)
    { return unary_negate<_Predicate>(__pred); }


  template<typename _Predicate>
    class binary_negate
    : public binary_function<typename _Predicate::first_argument_type,
        typename _Predicate::second_argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
      explicit
      binary_negate(const _Predicate& __x) : _M_pred(__x) { }

      bool
      operator()(const typename _Predicate::first_argument_type& __x,
   const typename _Predicate::second_argument_type& __y) const
      { return !_M_pred(__x, __y); }
    };


  template<typename _Predicate>
    inline binary_negate<_Predicate>
    not2(const _Predicate& __pred)
    { return binary_negate<_Predicate>(__pred); }
# 416 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
 template<typename _Arg, typename _Result>
    class pointer_to_unary_function : public unary_function<_Arg, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg);

    public:
      pointer_to_unary_function() { }

      explicit
      pointer_to_unary_function(_Result (*__x)(_Arg))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg __x) const
      { return _M_ptr(__x); }
    };


  template<typename _Arg, typename _Result>
    inline pointer_to_unary_function<_Arg, _Result>
    ptr_fun(_Result (*__x)(_Arg))
    { return pointer_to_unary_function<_Arg, _Result>(__x); }


  template<typename _Arg1, typename _Arg2, typename _Result>
    class pointer_to_binary_function
    : public binary_function<_Arg1, _Arg2, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg1, _Arg2);

    public:
      pointer_to_binary_function() { }

      explicit
      pointer_to_binary_function(_Result (*__x)(_Arg1, _Arg2))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg1 __x, _Arg2 __y) const
      { return _M_ptr(__x, __y); }
    };


  template<typename _Arg1, typename _Arg2, typename _Result>
    inline pointer_to_binary_function<_Arg1, _Arg2, _Result>
    ptr_fun(_Result (*__x)(_Arg1, _Arg2))
    { return pointer_to_binary_function<_Arg1, _Arg2, _Result>(__x); }


  template<typename _Tp>
    struct _Identity : public unary_function<_Tp,_Tp>
    {
      _Tp&
      operator()(_Tp& __x) const
      { return __x; }

      const _Tp&
      operator()(const _Tp& __x) const
      { return __x; }
    };

  template<typename _Pair>
    struct _Select1st : public unary_function<_Pair,
           typename _Pair::first_type>
    {
      typename _Pair::first_type&
      operator()(_Pair& __x) const
      { return __x.first; }

      const typename _Pair::first_type&
      operator()(const _Pair& __x) const
      { return __x.first; }
    };

  template<typename _Pair>
    struct _Select2nd : public unary_function<_Pair,
           typename _Pair::second_type>
    {
      typename _Pair::second_type&
      operator()(_Pair& __x) const
      { return __x.second; }

      const typename _Pair::second_type&
      operator()(const _Pair& __x) const
      { return __x.second; }
    };
# 523 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
 template<typename _Ret, typename _Tp>
    class mem_fun_t : public unary_function<_Tp*, _Ret>
    {
    public:
      explicit
      mem_fun_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
    };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_t : public unary_function<const _Tp*, _Ret>
    {
    public:
      explicit
      const_mem_fun_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp>
    class mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      mem_fun_ref_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
  };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      const_mem_fun_ref_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_t : public binary_function<_Tp*, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_t : public binary_function<const _Tp*, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp>
    inline mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)())
    { return mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)())
    { return mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }



}




# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\backward/binders.h" 1 3
# 60 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\backward/binders.h" 3
namespace std {
# 97 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\backward/binders.h" 3
 template<typename _Operation>
    class binder1st
    : public unary_function<typename _Operation::second_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::first_argument_type value;

    public:
      binder1st(const _Operation& __x,
  const typename _Operation::first_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }



      typename _Operation::result_type
      operator()(typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }
    } ;


  template<typename _Operation, typename _Tp>
    inline binder1st<_Operation>
    bind1st(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::first_argument_type _Arg1_type;
      return binder1st<_Operation>(__fn, _Arg1_type(__x));
    }


  template<typename _Operation>
    class binder2nd
    : public unary_function<typename _Operation::first_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::second_argument_type value;

    public:
      binder2nd(const _Operation& __x,
  const typename _Operation::second_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }



      typename _Operation::result_type
      operator()(typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }
    } ;


  template<typename _Operation, typename _Tp>
    inline binder2nd<_Operation>
    bind2nd(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::second_argument_type _Arg2_type;
      return binder2nd<_Operation>(__fn, _Arg2_type(__x));
    }


}
# 713 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 2 3
# 50 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 1 3
# 39 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
# 39 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3



# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\initializer_list" 1 3
# 33 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\initializer_list" 3
# 33 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\initializer_list" 3
# 43 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 2 3

namespace std {
# 103 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 template<typename _CharT, typename _Traits, typename _Alloc>
    class basic_string
    {
      typedef typename _Alloc::template rebind<_CharT>::other _CharT_alloc_type;


    public:
      typedef _Traits traits_type;
      typedef typename _Traits::char_type value_type;
      typedef _Alloc allocator_type;
      typedef typename _CharT_alloc_type::size_type size_type;
      typedef typename _CharT_alloc_type::difference_type difference_type;
      typedef typename _CharT_alloc_type::reference reference;
      typedef typename _CharT_alloc_type::const_reference const_reference;
      typedef typename _CharT_alloc_type::pointer pointer;
      typedef typename _CharT_alloc_type::const_pointer const_pointer;
      typedef __gnu_cxx::__normal_iterator<pointer, basic_string> iterator;
      typedef __gnu_cxx::__normal_iterator<const_pointer, basic_string>
                                                            const_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
      typedef std::reverse_iterator<iterator> reverse_iterator;

    private:
# 140 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 struct _Rep_base
      {
 size_type _M_length;
 size_type _M_capacity;
 _Atomic_word _M_refcount;
      };

      struct _Rep : _Rep_base
      {

 typedef typename _Alloc::template rebind<char>::other _Raw_bytes_alloc;
# 165 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 static const size_type _S_max_size;
 static const _CharT _S_terminal;



        static size_type _S_empty_rep_storage[];

        static _Rep&
        _S_empty_rep()
        {



   void* __p = reinterpret_cast<void*>(&_S_empty_rep_storage);
   return *reinterpret_cast<_Rep*>(__p);
 }

        bool
 _M_is_leaked() const
        { return this->_M_refcount < 0; }

        bool
 _M_is_shared() const
        { return this->_M_refcount > 0; }

        void
 _M_set_leaked()
        { this->_M_refcount = -1; }

        void
 _M_set_sharable()
        { this->_M_refcount = 0; }

 void
 _M_set_length_and_sharable(size_type __n)
 {



     {
       this->_M_set_sharable();
       this->_M_length = __n;
       traits_type::assign(this->_M_refdata()[__n], _S_terminal);


     }
 }

 _CharT*
 _M_refdata() throw()
 { return reinterpret_cast<_CharT*>(this + 1); }

 _CharT*
 _M_grab(const _Alloc& __alloc1, const _Alloc& __alloc2)
 {
   return (!_M_is_leaked() && __alloc1 == __alloc2)
           ? _M_refcopy() : _M_clone(__alloc1);
 }


 static _Rep*
 _S_create(size_type, size_type, const _Alloc&);

 void
 _M_dispose(const _Alloc& __a)
 {



     if (__gnu_cxx::__exchange_and_add_dispatch(&this->_M_refcount,
             -1) <= 0)
       _M_destroy(__a);
 }

 void
 _M_destroy(const _Alloc&) throw();

 _CharT*
 _M_refcopy() throw()
 {



            __gnu_cxx::__atomic_add_dispatch(&this->_M_refcount, 1);
   return _M_refdata();
 }

 _CharT*
 _M_clone(const _Alloc&, size_type __res = 0);
      };


      struct _Alloc_hider : _Alloc
      {
 _Alloc_hider(_CharT* __dat, const _Alloc& __a)
 : _Alloc(__a), _M_p(__dat) { }

 _CharT* _M_p;
      };

    public:




      static const size_type npos = static_cast<size_type>(-1);

    private:

      mutable _Alloc_hider _M_dataplus;

      _CharT*
      _M_data() const
      { return _M_dataplus._M_p; }

      _CharT*
      _M_data(_CharT* __p)
      { return (_M_dataplus._M_p = __p); }

      _Rep*
      _M_rep() const
      { return &((reinterpret_cast<_Rep*> (_M_data()))[-1]); }



      iterator
      _M_ibegin() const
      { return iterator(_M_data()); }

      iterator
      _M_iend() const
      { return iterator(_M_data() + this->size()); }

      void
      _M_leak()
      {
 if (!_M_rep()->_M_is_leaked())
   _M_leak_hard();
      }

      size_type
      _M_check(size_type __pos, const char* __s) const
      {
 if (__pos > this->size())
   __throw_out_of_range((__s));
 return __pos;
      }

      void
      _M_check_length(size_type __n1, size_type __n2, const char* __s) const
      {
 if (this->max_size() - (this->size() - __n1) < __n2)
   __throw_length_error((__s));
      }


      size_type
      _M_limit(size_type __pos, size_type __off) const
      {
 const bool __testoff = __off < this->size() - __pos;
 return __testoff ? __off : this->size() - __pos;
      }


      bool
      _M_disjunct(const _CharT* __s) const
      {
 return (less<const _CharT*>()(__s, _M_data())
  || less<const _CharT*>()(_M_data() + this->size(), __s));
      }



      static void
      _M_copy(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::copy(__d, __s, __n);
      }

      static void
      _M_move(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::move(__d, __s, __n);
      }

      static void
      _M_assign(_CharT* __d, size_type __n, _CharT __c)
      {
 if (__n == 1)
   traits_type::assign(*__d, __c);
 else
   traits_type::assign(__d, __n, __c);
      }



      template<class _Iterator>
        static void
        _S_copy_chars(_CharT* __p, _Iterator __k1, _Iterator __k2)
        {
   for (; __k1 != __k2; ++__k1, ++__p)
     traits_type::assign(*__p, *__k1);
 }

      static void
      _S_copy_chars(_CharT* __p, iterator __k1, iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, const_iterator __k1, const_iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, _CharT* __k1, _CharT* __k2)
      { _M_copy(__p, __k1, __k2 - __k1); }

      static void
      _S_copy_chars(_CharT* __p, const _CharT* __k1, const _CharT* __k2)
      { _M_copy(__p, __k1, __k2 - __k1); }

      static int
      _S_compare(size_type __n1, size_type __n2)
      {
 const difference_type __d = difference_type(__n1 - __n2);

 if (__d > __gnu_cxx::__numeric_traits<int>::__max)
   return __gnu_cxx::__numeric_traits<int>::__max;
 else if (__d < __gnu_cxx::__numeric_traits<int>::__min)
   return __gnu_cxx::__numeric_traits<int>::__min;
 else
   return int(__d);
      }

      void
      _M_mutate(size_type __pos, size_type __len1, size_type __len2);

      void
      _M_leak_hard();

      static _Rep&
      _S_empty_rep()
      { return _Rep::_S_empty_rep(); }

    public:







      basic_string()



      : _M_dataplus(_S_construct(size_type(), _CharT(), _Alloc()), _Alloc()){ }





      explicit
      basic_string(const _Alloc& __a);






      basic_string(const basic_string& __str);






      basic_string(const basic_string& __str, size_type __pos,
     size_type __n = npos);







      basic_string(const basic_string& __str, size_type __pos,
     size_type __n, const _Alloc& __a);
# 468 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string(const _CharT* __s, size_type __n,
     const _Alloc& __a = _Alloc());





      basic_string(const _CharT* __s, const _Alloc& __a = _Alloc());






      basic_string(size_type __n, _CharT __c, const _Alloc& __a = _Alloc());
# 516 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 template<class _InputIterator>
        basic_string(_InputIterator __beg, _InputIterator __end,
       const _Alloc& __a = _Alloc());




      ~basic_string()
      { _M_rep()->_M_dispose(this->get_allocator()); }





      basic_string&
      operator=(const basic_string& __str)
      { return this->assign(__str); }





      basic_string&
      operator=(const _CharT* __s)
      { return this->assign(__s); }
# 549 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string&
      operator=(_CharT __c)
      {
 this->assign(1, __c);
 return *this;
      }
# 589 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 iterator
      begin()
      {
 _M_leak();
 return iterator(_M_data());
      }





      const_iterator
      begin() const
      { return const_iterator(_M_data()); }





      iterator
      end()
      {
 _M_leak();
 return iterator(_M_data() + this->size());
      }





      const_iterator
      end() const
      { return const_iterator(_M_data() + this->size()); }






      reverse_iterator
      rbegin()
      { return reverse_iterator(this->end()); }






      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(this->end()); }






      reverse_iterator
      rend()
      { return reverse_iterator(this->begin()); }






      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(this->begin()); }
# 695 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 public:



      size_type
      size() const
      { return _M_rep()->_M_length; }



      size_type
      length() const
      { return _M_rep()->_M_length; }


      size_type
      max_size() const
      { return _Rep::_S_max_size; }
# 724 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 void
      resize(size_type __n, _CharT __c);
# 737 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 void
      resize(size_type __n)
      { this->resize(__n, _CharT()); }
# 757 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      capacity() const
      { return _M_rep()->_M_capacity; }
# 778 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 void
      reserve(size_type __res_arg = 0);




      void
      clear()
      { _M_mutate(0, this->size(), 0); }





      bool
      empty() const
      { return this->size() == 0; }
# 807 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 const_reference
      operator[] (size_type __pos) const
      {
                                       ;
 return _M_data()[__pos];
      }
# 824 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 reference
      operator[](size_type __pos)
      {

                                       ;

                                         ;
 _M_leak();
 return _M_data()[__pos];
      }
# 845 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 const_reference
      at(size_type __n) const
      {
 if (__n >= this->size())
   __throw_out_of_range(("basic_string::at"));
 return _M_data()[__n];
      }
# 864 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 reference
      at(size_type __n)
      {
 if (__n >= size())
   __throw_out_of_range(("basic_string::at"));
 _M_leak();
 return _M_data()[__n];
      }







      basic_string&
      operator+=(const basic_string& __str)
      { return this->append(__str); }






      basic_string&
      operator+=(const _CharT* __s)
      { return this->append(__s); }






      basic_string&
      operator+=(_CharT __c)
      {
 this->push_back(__c);
 return *this;
      }
# 920 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string&
      append(const basic_string& __str);
# 935 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string&
      append(const basic_string& __str, size_type __pos, size_type __n);







      basic_string&
      append(const _CharT* __s, size_type __n);






      basic_string&
      append(const _CharT* __s)
      {
                               ;
 return this->append(__s, traits_type::length(__s));
      }
# 967 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string&
      append(size_type __n, _CharT __c);
# 989 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 template<class _InputIterator>
        basic_string&
        append(_InputIterator __first, _InputIterator __last)
        { return this->replace(_M_iend(), _M_iend(), __first, __last); }





      void
      push_back(_CharT __c)
      {
 const size_type __len = 1 + this->size();
 if (__len > this->capacity() || _M_rep()->_M_is_shared())
   this->reserve(__len);
 traits_type::assign(_M_data()[this->size()], __c);
 _M_rep()->_M_set_length_and_sharable(__len);
      }






      basic_string&
      assign(const basic_string& __str);
# 1045 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string&
      assign(const basic_string& __str, size_type __pos, size_type __n)
      { return this->assign(__str._M_data()
       + __str._M_check(__pos, "basic_string::assign"),
       __str._M_limit(__pos, __n)); }
# 1061 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string&
      assign(const _CharT* __s, size_type __n);
# 1073 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string&
      assign(const _CharT* __s)
      {
                               ;
 return this->assign(__s, traits_type::length(__s));
      }
# 1089 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string&
      assign(size_type __n, _CharT __c)
      { return _M_replace_aux(size_type(0), this->size(), __n, __c); }
# 1101 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 template<class _InputIterator>
        basic_string&
        assign(_InputIterator __first, _InputIterator __last)
        { return this->replace(_M_ibegin(), _M_iend(), __first, __last); }
# 1129 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 void
      insert(iterator __p, size_type __n, _CharT __c)
      { this->replace(__p, __p, __n, __c); }
# 1144 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 template<class _InputIterator>
        void
        insert(iterator __p, _InputIterator __beg, _InputIterator __end)
        { this->replace(__p, __p, __beg, __end); }
# 1175 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string&
      insert(size_type __pos1, const basic_string& __str)
      { return this->insert(__pos1, __str, size_type(0), __str.size()); }
# 1197 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string&
      insert(size_type __pos1, const basic_string& __str,
      size_type __pos2, size_type __n)
      { return this->insert(__pos1, __str._M_data()
       + __str._M_check(__pos2, "basic_string::insert"),
       __str._M_limit(__pos2, __n)); }
# 1220 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string&
      insert(size_type __pos, const _CharT* __s, size_type __n);
# 1238 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string&
      insert(size_type __pos, const _CharT* __s)
      {
                               ;
 return this->insert(__pos, __s, traits_type::length(__s));
      }
# 1261 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string&
      insert(size_type __pos, size_type __n, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::insert"),
         size_type(0), __n, __c); }
# 1278 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 iterator
      insert(iterator __p, _CharT __c)
      {
                                                                 ;
 const size_type __pos = __p - _M_ibegin();
 _M_replace_aux(__pos, size_type(0), size_type(1), __c);
 _M_rep()->_M_set_leaked();
 return iterator(_M_data() + __pos);
      }
# 1302 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string&
      erase(size_type __pos = 0, size_type __n = npos)
      {
 _M_mutate(_M_check(__pos, "basic_string::erase"),
    _M_limit(__pos, __n), size_type(0));
 return *this;
      }
# 1318 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 iterator
      erase(iterator __position)
      {

                               ;
 const size_type __pos = __position - _M_ibegin();
 _M_mutate(__pos, size_type(1), size_type(0));
 _M_rep()->_M_set_leaked();
 return iterator(_M_data() + __pos);
      }
# 1338 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 iterator
      erase(iterator __first, iterator __last);
# 1357 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string&
      replace(size_type __pos, size_type __n, const basic_string& __str)
      { return this->replace(__pos, __n, __str._M_data(), __str.size()); }
# 1379 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string&
      replace(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2)
      { return this->replace(__pos1, __n1, __str._M_data()
        + __str._M_check(__pos2, "basic_string::replace"),
        __str._M_limit(__pos2, __n2)); }
# 1403 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2);
# 1422 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s)
      {
                               ;
 return this->replace(__pos, __n1, __s, traits_type::length(__s));
      }
# 1445 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string&
      replace(size_type __pos, size_type __n1, size_type __n2, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::replace"),
         _M_limit(__pos, __n1), __n2, __c); }
# 1463 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string&
      replace(iterator __i1, iterator __i2, const basic_string& __str)
      { return this->replace(__i1, __i2, __str._M_data(), __str.size()); }
# 1481 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s, size_type __n)
      {

                          ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1, __s, __n);
      }
# 1502 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s)
      {
                               ;
 return this->replace(__i1, __i2, __s, traits_type::length(__s));
      }
# 1523 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string&
      replace(iterator __i1, iterator __i2, size_type __n, _CharT __c)
      {

                          ;
 return _M_replace_aux(__i1 - _M_ibegin(), __i2 - __i1, __n, __c);
      }
# 1545 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 template<class _InputIterator>
        basic_string&
        replace(iterator __i1, iterator __i2,
  _InputIterator __k1, _InputIterator __k2)
        {

                            ;
                                             ;
   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   return _M_replace_dispatch(__i1, __i2, __k1, __k2, _Integral());
 }



      basic_string&
      replace(iterator __i1, iterator __i2, _CharT* __k1, _CharT* __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2,
       const _CharT* __k1, const _CharT* __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2, iterator __k1, iterator __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2,
       const_iterator __k1, const_iterator __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }
# 1620 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 private:
      template<class _Integer>
 basic_string&
 _M_replace_dispatch(iterator __i1, iterator __i2, _Integer __n,
       _Integer __val, __true_type)
        { return _M_replace_aux(__i1 - _M_ibegin(), __i2 - __i1, __n, __val); }

      template<class _InputIterator>
 basic_string&
 _M_replace_dispatch(iterator __i1, iterator __i2, _InputIterator __k1,
       _InputIterator __k2, __false_type);

      basic_string&
      _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
       _CharT __c);

      basic_string&
      _M_replace_safe(size_type __pos1, size_type __n1, const _CharT* __s,
        size_type __n2);



      template<class _InIterator>
        static _CharT*
        _S_construct_aux(_InIterator __beg, _InIterator __end,
    const _Alloc& __a, __false_type)
 {
          typedef typename iterator_traits<_InIterator>::iterator_category _Tag;
          return _S_construct(__beg, __end, __a, _Tag());
 }



      template<class _Integer>
        static _CharT*
        _S_construct_aux(_Integer __beg, _Integer __end,
    const _Alloc& __a, __true_type)
        { return _S_construct_aux_2(static_cast<size_type>(__beg),
        __end, __a); }

      static _CharT*
      _S_construct_aux_2(size_type __req, _CharT __c, const _Alloc& __a)
      { return _S_construct(__req, __c, __a); }

      template<class _InIterator>
        static _CharT*
        _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a)
 {
   typedef typename std::__is_integer<_InIterator>::__type _Integral;
   return _S_construct_aux(__beg, __end, __a, _Integral());
        }


      template<class _InIterator>
        static _CharT*
         _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
        input_iterator_tag);



      template<class _FwdIterator>
        static _CharT*
        _S_construct(_FwdIterator __beg, _FwdIterator __end, const _Alloc& __a,
       forward_iterator_tag);

      static _CharT*
      _S_construct(size_type __req, _CharT __c, const _Alloc& __a);

    public:
# 1701 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      copy(_CharT* __s, size_type __n, size_type __pos = 0) const;
# 1711 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 void
      swap(basic_string& __s);
# 1721 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 const _CharT*
      c_str() const
      { return _M_data(); }







      const _CharT*
      data() const
      { return _M_data(); }




      allocator_type
      get_allocator() const
      { return _M_dataplus; }
# 1753 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      find(const _CharT* __s, size_type __pos, size_type __n) const;
# 1766 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      find(const basic_string& __str, size_type __pos = 0) const
      { return this->find(__str.data(), __pos, __str.size()); }
# 1780 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      find(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find(__s, __pos, traits_type::length(__s));
      }
# 1797 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      find(_CharT __c, size_type __pos = 0) const;
# 1810 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      rfind(const basic_string& __str, size_type __pos = npos) const
      { return this->rfind(__str.data(), __pos, __str.size()); }
# 1825 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      rfind(const _CharT* __s, size_type __pos, size_type __n) const;
# 1838 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      rfind(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->rfind(__s, __pos, traits_type::length(__s));
      }
# 1855 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      rfind(_CharT __c, size_type __pos = npos) const;
# 1868 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      find_first_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_of(__str.data(), __pos, __str.size()); }
# 1883 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      find_first_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 1896 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      find_first_of(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find_first_of(__s, __pos, traits_type::length(__s));
      }
# 1915 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      find_first_of(_CharT __c, size_type __pos = 0) const
      { return this->find(__c, __pos); }
# 1929 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      find_last_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_of(__str.data(), __pos, __str.size()); }
# 1944 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      find_last_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 1957 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      find_last_of(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->find_last_of(__s, __pos, traits_type::length(__s));
      }
# 1976 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      find_last_of(_CharT __c, size_type __pos = npos) const
      { return this->rfind(__c, __pos); }
# 1990 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      find_first_not_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_not_of(__str.data(), __pos, __str.size()); }
# 2005 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      find_first_not_of(const _CharT* __s, size_type __pos,
   size_type __n) const;
# 2019 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      find_first_not_of(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find_first_not_of(__s, __pos, traits_type::length(__s));
      }
# 2036 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      find_first_not_of(_CharT __c, size_type __pos = 0) const;
# 2049 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      find_last_not_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_not_of(__str.data(), __pos, __str.size()); }
# 2065 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      find_last_not_of(const _CharT* __s, size_type __pos,
         size_type __n) const;
# 2078 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      find_last_not_of(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->find_last_not_of(__s, __pos, traits_type::length(__s));
      }
# 2095 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 size_type
      find_last_not_of(_CharT __c, size_type __pos = npos) const;
# 2110 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 basic_string
      substr(size_type __pos = 0, size_type __n = npos) const
      { return basic_string(*this,
       _M_check(__pos, "basic_string::substr"), __n); }
# 2128 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 int
      compare(const basic_string& __str) const
      {
 const size_type __size = this->size();
 const size_type __osize = __str.size();
 const size_type __len = std::min(__size, __osize);

 int __r = traits_type::compare(_M_data(), __str.data(), __len);
 if (!__r)
   __r = _S_compare(__size, __osize);
 return __r;
      }
# 2158 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 int
      compare(size_type __pos, size_type __n, const basic_string& __str) const;
# 2182 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 int
      compare(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2) const;
# 2200 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 int
      compare(const _CharT* __s) const;
# 2223 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 int
      compare(size_type __pos, size_type __n1, const _CharT* __s) const;
# 2248 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 int
      compare(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2) const;
  };
# 2260 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
      const _CharT* __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs, _CharT __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str(__lhs);
      __str.append(__size_type(1), __rhs);
      return __str;
    }
# 2331 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) == 0; }

  template<typename _CharT>
    inline
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value, bool>::__type
    operator==(const basic_string<_CharT>& __lhs,
        const basic_string<_CharT>& __rhs)
    { return (__lhs.size() == __rhs.size()
       && !std::char_traits<_CharT>::compare(__lhs.data(), __rhs.data(),
          __lhs.size())); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) == 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) == 0; }
# 2377 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return !(__lhs == __rhs); }
# 2414 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) > 0; }
# 2451 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) < 0; }
# 2488 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) >= 0; }
# 2525 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const _CharT* __lhs,
      const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) <= 0; }
# 2562 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 template<typename _CharT, typename _Traits, typename _Alloc>
    inline void
    swap(basic_string<_CharT, _Traits, _Alloc>& __lhs,
  basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { __lhs.swap(__rhs); }
# 2579 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __is,
        basic_string<_CharT, _Traits, _Alloc>& __str);

  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __is, basic_string<char>& __str);
# 2597 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __os,
        const basic_string<_CharT, _Traits, _Alloc>& __str)
    {


      return __ostream_insert(__os, __str.data(), __str.size());
    }
# 2620 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim);
# 2638 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str)
    { return getline(__is, __str, __is.widen('\n')); }

  template<>
    basic_istream<char>&
    getline(basic_istream<char>& __in, basic_string<char>& __str,
     char __delim);


  template<>
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>& __in, basic_string<wchar_t>& __str,
     wchar_t __delim);


}
# 53 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 1 3
# 42 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 3
# 42 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 3



namespace std {

  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    _Rep::_S_max_size = (((npos - sizeof(_Rep_base))/sizeof(_CharT)) - 1) / 4;

  template<typename _CharT, typename _Traits, typename _Alloc>
    const _CharT
    basic_string<_CharT, _Traits, _Alloc>::
    _Rep::_S_terminal = _CharT();

  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::npos;



  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::_Rep::_S_empty_rep_storage[
    (sizeof(_Rep_base) + sizeof(_CharT) + sizeof(size_type) - 1) /
      sizeof(size_type)];





  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InIterator>
      _CharT*
      basic_string<_CharT, _Traits, _Alloc>::
      _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
     input_iterator_tag)
      {





 _CharT __buf[128];
 size_type __len = 0;
 while (__beg != __end && __len < sizeof(__buf) / sizeof(_CharT))
   {
     __buf[__len++] = *__beg;
     ++__beg;
   }
 _Rep* __r = _Rep::_S_create(__len, size_type(0), __a);
 _M_copy(__r->_M_refdata(), __buf, __len);
 if (true)
   {
     while (__beg != __end)
       {
  if (__len == __r->_M_capacity)
    {

      _Rep* __another = _Rep::_S_create(__len + 1, __len, __a);
      _M_copy(__another->_M_refdata(), __r->_M_refdata(), __len);
      __r->_M_destroy(__a);
      __r = __another;
    }
  __r->_M_refdata()[__len++] = *__beg;
  ++__beg;
       }
   }
 if (false)
   {
     __r->_M_destroy(__a);
                            ;
   }
 __r->_M_set_length_and_sharable(__len);
 return __r->_M_refdata();
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template <typename _InIterator>
      _CharT*
      basic_string<_CharT, _Traits, _Alloc>::
      _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
     forward_iterator_tag)
      {





 if (__gnu_cxx::__is_null_pointer(__beg) && __beg != __end)
   __throw_logic_error(("basic_string::_S_construct NULL not valid"));

 const size_type __dnew = static_cast<size_type>(std::distance(__beg,
              __end));

 _Rep* __r = _Rep::_S_create(__dnew, size_type(0), __a);
 if (true)
   { _S_copy_chars(__r->_M_refdata(), __beg, __end); }
 if (false)
   {
     __r->_M_destroy(__a);
                            ;
   }
 __r->_M_set_length_and_sharable(__dnew);
 return __r->_M_refdata();
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    _CharT*
    basic_string<_CharT, _Traits, _Alloc>::
    _S_construct(size_type __n, _CharT __c, const _Alloc& __a)
    {





      _Rep* __r = _Rep::_S_create(__n, size_type(0), __a);
      if (__n)
 _M_assign(__r->_M_refdata(), __n, __c);

      __r->_M_set_length_and_sharable(__n);
      return __r->_M_refdata();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str)
    : _M_dataplus(__str._M_rep()->_M_grab(_Alloc(__str.get_allocator()),
       __str.get_allocator()),
    __str.get_allocator())
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _Alloc& __a)
    : _M_dataplus(_S_construct(size_type(), _CharT(), __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str, size_type __pos, size_type __n)
    : _M_dataplus(_S_construct(__str._M_data()
          + __str._M_check(__pos,
      "basic_string::basic_string"),
          __str._M_data() + __str._M_limit(__pos, __n)
          + __pos, _Alloc()), _Alloc())
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str, size_type __pos,
   size_type __n, const _Alloc& __a)
    : _M_dataplus(_S_construct(__str._M_data()
          + __str._M_check(__pos,
      "basic_string::basic_string"),
          __str._M_data() + __str._M_limit(__pos, __n)
          + __pos, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _CharT* __s, size_type __n, const _Alloc& __a)
    : _M_dataplus(_S_construct(__s, __s + __n, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _CharT* __s, const _Alloc& __a)
    : _M_dataplus(_S_construct(__s, __s ? __s + traits_type::length(__s) :
          __s + npos, __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(size_type __n, _CharT __c, const _Alloc& __a)
    : _M_dataplus(_S_construct(__n, __c, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(_InputIterator __beg, _InputIterator __end, const _Alloc& __a)
    : _M_dataplus(_S_construct(__beg, __end, __a), __a)
    { }
# 239 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 3
 template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    assign(const basic_string& __str)
    {
      if (_M_rep() != __str._M_rep())
 {

   const allocator_type __a = this->get_allocator();
   _CharT* __tmp = __str._M_rep()->_M_grab(__a, __str.get_allocator());
   _M_rep()->_M_dispose(__a);
   _M_data(__tmp);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    assign(const _CharT* __s, size_type __n)
    {
                                             ;
      _M_check_length(this->size(), __n, "basic_string::assign");
      if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
 return _M_replace_safe(size_type(0), this->size(), __s, __n);
      else
 {

   const size_type __pos = __s - _M_data();
   if (__pos >= __n)
     _M_copy(_M_data(), __s, __n);
   else if (__pos)
     _M_move(_M_data(), __s, __n);
   _M_rep()->_M_set_length_and_sharable(__n);
   return *this;
 }
     }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(size_type __n, _CharT __c)
    {
      if (__n)
 {
   _M_check_length(size_type(0), __n, "basic_string::append");
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_assign(_M_data() + this->size(), __n, __c);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const _CharT* __s, size_type __n)
    {
                                             ;
      if (__n)
 {
   _M_check_length(size_type(0), __n, "basic_string::append");
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     {
       if (_M_disjunct(__s))
  this->reserve(__len);
       else
  {
    const size_type __off = __s - _M_data();
    this->reserve(__len);
    __s = _M_data() + __off;
  }
     }
   _M_copy(_M_data() + this->size(), __s, __n);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const basic_string& __str)
    {
      const size_type __size = __str.size();
      if (__size)
 {
   const size_type __len = __size + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_copy(_M_data() + this->size(), __str._M_data(), __size);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const basic_string& __str, size_type __pos, size_type __n)
    {
      __str._M_check(__pos, "basic_string::append");
      __n = __str._M_limit(__pos, __n);
      if (__n)
 {
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_copy(_M_data() + this->size(), __str._M_data() + __pos, __n);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

   template<typename _CharT, typename _Traits, typename _Alloc>
     basic_string<_CharT, _Traits, _Alloc>&
     basic_string<_CharT, _Traits, _Alloc>::
     insert(size_type __pos, const _CharT* __s, size_type __n)
     {
                                              ;
       _M_check(__pos, "basic_string::insert");
       _M_check_length(size_type(0), __n, "basic_string::insert");
       if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
         return _M_replace_safe(__pos, size_type(0), __s, __n);
       else
         {

           const size_type __off = __s - _M_data();
           _M_mutate(__pos, 0, __n);
           __s = _M_data() + __off;
           _CharT* __p = _M_data() + __pos;
           if (__s + __n <= __p)
             _M_copy(__p, __s, __n);
           else if (__s >= __p)
             _M_copy(__p, __s + __n, __n);
           else
             {
        const size_type __nleft = __p - __s;
               _M_copy(__p, __s, __nleft);
               _M_copy(__p + __nleft, __p + __n, __n - __nleft);
             }
           return *this;
         }
     }

   template<typename _CharT, typename _Traits, typename _Alloc>
     typename basic_string<_CharT, _Traits, _Alloc>::iterator
     basic_string<_CharT, _Traits, _Alloc>::
     erase(iterator __first, iterator __last)
     {

                           ;




       const size_type __size = __last - __first;
       if (__size)
  {
    const size_type __pos = __first - _M_ibegin();
    _M_mutate(__pos, __size, size_type(0));
    _M_rep()->_M_set_leaked();
    return iterator(_M_data() + __pos);
  }
       else
  return __first;
     }

   template<typename _CharT, typename _Traits, typename _Alloc>
     basic_string<_CharT, _Traits, _Alloc>&
     basic_string<_CharT, _Traits, _Alloc>::
     replace(size_type __pos, size_type __n1, const _CharT* __s,
      size_type __n2)
     {
                                               ;
       _M_check(__pos, "basic_string::replace");
       __n1 = _M_limit(__pos, __n1);
       _M_check_length(__n1, __n2, "basic_string::replace");
       bool __left;
       if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
         return _M_replace_safe(__pos, __n1, __s, __n2);
       else if ((__left = __s + __n2 <= _M_data() + __pos)
  || _M_data() + __pos + __n1 <= __s)
  {

    size_type __off = __s - _M_data();
    __left ? __off : (__off += __n2 - __n1);
    _M_mutate(__pos, __n1, __n2);
    _M_copy(_M_data() + __pos, _M_data() + __off, __n2);
    return *this;
  }
       else
  {

    const basic_string __tmp(__s, __n2);
    return _M_replace_safe(__pos, __n1, __tmp._M_data(), __n2);
  }
     }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _M_destroy(const _Alloc& __a) throw ()
    {
      const size_type __size = sizeof(_Rep_base) +
                        (this->_M_capacity + 1) * sizeof(_CharT);
      _Raw_bytes_alloc(__a).deallocate(reinterpret_cast<char*>(this), __size);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_leak_hard()
    {




      if (_M_rep()->_M_is_shared())
 _M_mutate(0, 0, 0);
      _M_rep()->_M_set_leaked();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_mutate(size_type __pos, size_type __len1, size_type __len2)
    {
      const size_type __old_size = this->size();
      const size_type __new_size = __old_size + __len2 - __len1;
      const size_type __how_much = __old_size - __pos - __len1;

      if (__new_size > this->capacity() || _M_rep()->_M_is_shared())
 {

   const allocator_type __a = get_allocator();
   _Rep* __r = _Rep::_S_create(__new_size, this->capacity(), __a);

   if (__pos)
     _M_copy(__r->_M_refdata(), _M_data(), __pos);
   if (__how_much)
     _M_copy(__r->_M_refdata() + __pos + __len2,
      _M_data() + __pos + __len1, __how_much);

   _M_rep()->_M_dispose(__a);
   _M_data(__r->_M_refdata());
 }
      else if (__how_much && __len1 != __len2)
 {

   _M_move(_M_data() + __pos + __len2,
    _M_data() + __pos + __len1, __how_much);
 }
      _M_rep()->_M_set_length_and_sharable(__new_size);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    reserve(size_type __res)
    {
      if (__res != this->capacity() || _M_rep()->_M_is_shared())
        {

   if (__res < this->size())
     __res = this->size();
   const allocator_type __a = get_allocator();
   _CharT* __tmp = _M_rep()->_M_clone(__a, __res - this->size());
   _M_rep()->_M_dispose(__a);
   _M_data(__tmp);
        }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    swap(basic_string& __s)
    {
      if (_M_rep()->_M_is_leaked())
 _M_rep()->_M_set_sharable();
      if (__s._M_rep()->_M_is_leaked())
 __s._M_rep()->_M_set_sharable();
      if (this->get_allocator() == __s.get_allocator())
 {
   _CharT* __tmp = _M_data();
   _M_data(__s._M_data());
   __s._M_data(__tmp);
 }

      else
 {
   const basic_string __tmp1(_M_ibegin(), _M_iend(),
        __s.get_allocator());
   const basic_string __tmp2(__s._M_ibegin(), __s._M_iend(),
        this->get_allocator());
   *this = __tmp2;
   __s = __tmp1;
 }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::_Rep*
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _S_create(size_type __capacity, size_type __old_capacity,
       const _Alloc& __alloc)
    {


      if (__capacity > _S_max_size)
 __throw_length_error(("basic_string::_S_create"));
# 576 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 3
 const size_type __pagesize = 4096;
      const size_type __malloc_header_size = 4 * sizeof(void*);







      if (__capacity > __old_capacity && __capacity < 2 * __old_capacity)
 __capacity = 2 * __old_capacity;




      size_type __size = (__capacity + 1) * sizeof(_CharT) + sizeof(_Rep);

      const size_type __adj_size = __size + __malloc_header_size;
      if (__adj_size > __pagesize && __capacity > __old_capacity)
 {
   const size_type __extra = __pagesize - __adj_size % __pagesize;
   __capacity += __extra / sizeof(_CharT);

   if (__capacity > _S_max_size)
     __capacity = _S_max_size;
   __size = (__capacity + 1) * sizeof(_CharT) + sizeof(_Rep);
 }



      void* __place = _Raw_bytes_alloc(__alloc).allocate(__size);
      _Rep *__p = new (__place) _Rep;
      __p->_M_capacity = __capacity;







      __p->_M_set_sharable();
      return __p;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    _CharT*
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _M_clone(const _Alloc& __alloc, size_type __res)
    {

      const size_type __requested_cap = this->_M_length + __res;
      _Rep* __r = _Rep::_S_create(__requested_cap, this->_M_capacity,
      __alloc);
      if (this->_M_length)
 _M_copy(__r->_M_refdata(), _M_refdata(), this->_M_length);

      __r->_M_set_length_and_sharable(this->_M_length);
      return __r->_M_refdata();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    resize(size_type __n, _CharT __c)
    {
      const size_type __size = this->size();
      _M_check_length(__size, __n, "basic_string::resize");
      if (__size < __n)
 this->append(__n - __size, __c);
      else if (__n < __size)
 this->erase(__n);

    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
      basic_string<_CharT, _Traits, _Alloc>&
      basic_string<_CharT, _Traits, _Alloc>::
      _M_replace_dispatch(iterator __i1, iterator __i2, _InputIterator __k1,
     _InputIterator __k2, __false_type)
      {
 const basic_string __s(__k1, __k2);
 const size_type __n1 = __i2 - __i1;
 _M_check_length(__n1, __s.size(), "basic_string::_M_replace_dispatch");
 return _M_replace_safe(__i1 - _M_ibegin(), __n1, __s._M_data(),
          __s.size());
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
     _CharT __c)
    {
      _M_check_length(__n1, __n2, "basic_string::_M_replace_aux");
      _M_mutate(__pos1, __n1, __n2);
      if (__n2)
 _M_assign(_M_data() + __pos1, __n2, __c);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_safe(size_type __pos1, size_type __n1, const _CharT* __s,
      size_type __n2)
    {
      _M_mutate(__pos1, __n1, __n2);
      if (__n2)
 _M_copy(_M_data() + __pos1, __s, __n2);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
                                      ;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      const __size_type __len = _Traits::length(__lhs);
      __string_type __str;
      __str.reserve(__len + __rhs.size());
      __str.append(__lhs, __len);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str;
      const __size_type __len = __rhs.size();
      __str.reserve(__len + 1);
      __str.append(__size_type(1), __lhs);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    copy(_CharT* __s, size_type __n, size_type __pos) const
    {
      _M_check(__pos, "basic_string::copy");
      __n = _M_limit(__pos, __n);
                                             ;
      if (__n)
 _M_copy(__s, _M_data() + __pos, __n);

      return __n;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      const size_type __size = this->size();
      const _CharT* __data = _M_data();

      if (__n == 0)
 return __pos <= __size ? __pos : npos;

      if (__n <= __size)
 {
   for (; __pos <= __size - __n; ++__pos)
     if (traits_type::eq(__data[__pos], __s[0])
  && traits_type::compare(__data + __pos + 1,
     __s + 1, __n - 1) == 0)
       return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(_CharT __c, size_type __pos) const
    {
      size_type __ret = npos;
      const size_type __size = this->size();
      if (__pos < __size)
 {
   const _CharT* __data = _M_data();
   const size_type __n = __size - __pos;
   const _CharT* __p = traits_type::find(__data + __pos, __n, __c);
   if (__p)
     __ret = __p - __data;
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      const size_type __size = this->size();
      if (__n <= __size)
 {
   __pos = std::min(size_type(__size - __n), __pos);
   const _CharT* __data = _M_data();
   do
     {
       if (traits_type::compare(__data + __pos, __s, __n) == 0)
  return __pos;
     }
   while (__pos-- > 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   for (++__size; __size-- > 0; )
     if (traits_type::eq(_M_data()[__size], __c))
       return __size;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      for (; __n && __pos < this->size(); ++__pos)
 {
   const _CharT* __p = traits_type::find(__s, __n, _M_data()[__pos]);
   if (__p)
     return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      size_type __size = this->size();
      if (__size && __n)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size-- != 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::find(__s, __n, _M_data()[__pos]))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(_CharT __c, size_type __pos) const
    {
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::eq(_M_data()[__pos], __c))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::eq(_M_data()[__size], __c))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n, const basic_string& __str) const
    {
      _M_check(__pos, "basic_string::compare");
      __n = _M_limit(__pos, __n);
      const size_type __osize = __str.size();
      const size_type __len = std::min(__n, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __str.data(), __len);
      if (!__r)
 __r = _S_compare(__n, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos1, size_type __n1, const basic_string& __str,
     size_type __pos2, size_type __n2) const
    {
      _M_check(__pos1, "basic_string::compare");
      __str._M_check(__pos2, "basic_string::compare");
      __n1 = _M_limit(__pos1, __n1);
      __n2 = __str._M_limit(__pos2, __n2);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos1,
         __str.data() + __pos2, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(const _CharT* __s) const
    {
                                    ;
      const size_type __size = this->size();
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__size, __osize);
      int __r = traits_type::compare(_M_data(), __s, __len);
      if (!__r)
 __r = _S_compare(__size, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s) const
    {
                                    ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__n1, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s,
     size_type __n2) const
    {
                                              ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in,
        basic_string<_CharT, _Traits, _Alloc>& __str)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;
      typedef ctype<_CharT> __ctype_type;
      typedef typename __ctype_type::ctype_base __ctype_base;

      __size_type __extracted = 0;
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   if (true)
     {

       __str.erase();
       _CharT __buf[128];
       __size_type __len = 0;
       const streamsize __w = __in.width();
       const __size_type __n = __w > 0 ? static_cast<__size_type>(__w)
                                : __str.max_size();
       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(__ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    if (__len == sizeof(__buf) / sizeof(_CharT))
      {
        __str.append(__buf, sizeof(__buf) / sizeof(_CharT));
        __len = 0;
      }
    __buf[__len++] = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }
       __str.append(__buf, __len);

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       __in.width(0);
     }
   if (false)
     {
       __in._M_setstate(__ios_base::badbit);
                              ;
     }
   if (false)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }

      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __in,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;

      __size_type __extracted = 0;
      const __size_type __n = __str.max_size();
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, true);
      if (__cerb)
 {
   if (true)
     {
       __str.erase();
       const __int_type __idelim = _Traits::to_int_type(__delim);
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !_Traits::eq_int_type(__c, __idelim))
  {
    __str += _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       else if (_Traits::eq_int_type(__c, __idelim))
  {
    ++__extracted;
    __in.rdbuf()->sbumpc();
  }
       else
  __err |= __ios_base::failbit;
     }
   if (false)
     {
       __in._M_setstate(__ios_base::badbit);
                              ;
     }
   if (false)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }
      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }





  extern template class basic_string<char>;
  extern template
    basic_istream<char>&
    operator>>(basic_istream<char>&, string&);
  extern template
    basic_ostream<char>&
    operator<<(basic_ostream<char>&, const string&);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&, char);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&);


  extern template class basic_string<wchar_t>;
  extern template
    basic_istream<wchar_t>&
    operator>>(basic_istream<wchar_t>&, wstring&);
  extern template
    basic_ostream<wchar_t>&
    operator<<(basic_ostream<wchar_t>&, const wstring&);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&, wchar_t);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&);



}
# 56 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3
# 42 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 2 3


namespace std {
# 61 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 class locale
  {
  public:


    typedef int category;


    class facet;
    class id;
    class _Impl;

    friend class facet;
    friend class _Impl;

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Cache>
      friend struct __use_cache;
# 97 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 static const category none = 0;
    static const category ctype = 1L << 0;
    static const category numeric = 1L << 1;
    static const category collate = 1L << 2;
    static const category time = 1L << 3;
    static const category monetary = 1L << 4;
    static const category messages = 1L << 5;
    static const category all = (ctype | numeric | collate |
        time | monetary | messages);
# 116 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 locale() throw();
# 125 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 locale(const locale& __other) throw();
# 135 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 explicit
    locale(const char* __s);
# 150 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 locale(const locale& __base, const char* __s, category __cat);
# 163 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 locale(const locale& __base, const locale& __add, category __cat);
# 175 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 template<typename _Facet>
      locale(const locale& __other, _Facet* __f);


    ~locale() throw();
# 189 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 const locale&
    operator=(const locale& __other) throw();
# 204 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 template<typename _Facet>
      locale
      combine(const locale& __other) const;






    string
    name() const;
# 223 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 bool
    operator==(const locale& __other) const throw();







    bool
    operator!=(const locale& __other) const throw()
    { return !(this->operator==(__other)); }
# 251 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 template<typename _Char, typename _Traits, typename _Alloc>
      bool
      operator()(const basic_string<_Char, _Traits, _Alloc>& __s1,
   const basic_string<_Char, _Traits, _Alloc>& __s2) const;
# 267 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 static locale
    global(const locale&);




    static const locale&
    classic();

  private:

    _Impl* _M_impl;


    static _Impl* _S_classic;


    static _Impl* _S_global;





    static const char* const* const _S_categories;
# 302 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 enum { _S_categories_size = 6 + 0 };


    static __gthread_once_t _S_once;


    explicit
    locale(_Impl*) throw();

    static void
    _S_initialize();

    static void
    _S_initialize_once() throw();

    static category
    _S_normalize_category(category);

    void
    _M_coalesce(const locale& __base, const locale& __add, category __cat);
  };
# 336 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 class locale::facet
  {
  private:
    friend class locale;
    friend class locale::_Impl;

    mutable _Atomic_word _M_refcount;


    static __c_locale _S_c_locale;


    static const char _S_c_name[2];


    static __gthread_once_t _S_once;


    static void
    _S_initialize_once();

  protected:
# 367 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 explicit
    facet(size_t __refs = 0) throw() : _M_refcount(__refs ? 1 : 0)
    { }


    virtual
    ~facet();

    static void
    _S_create_c_locale(__c_locale& __cloc, const char* __s,
         __c_locale __old = 0);

    static __c_locale
    _S_clone_c_locale(__c_locale& __cloc) throw();

    static void
    _S_destroy_c_locale(__c_locale& __cloc);

    static __c_locale
    _S_lc_ctype_c_locale(__c_locale __cloc, const char* __s);



    static __c_locale
    _S_get_c_locale();

    __attribute__ ((__const__)) static const char*
    _S_get_c_name() throw();

  private:
    void
    _M_add_reference() const throw()
    { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }

    void
    _M_remove_reference() const throw()
    {
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1) == 1)
 {
   if (true)
     { delete this; }
   if (false)
     { }
 }
    }

    facet(const facet&);

    facet&
    operator=(const facet&);
  };
# 431 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 class locale::id
  {
  private:
    friend class locale;
    friend class locale::_Impl;

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();




    mutable size_t _M_index;


    static _Atomic_word _S_refcount;

    void
    operator=(const id&);

    id(const id&);

  public:



    id() { }

    size_t
    _M_id() const throw();
  };



  class locale::_Impl
  {
  public:

    friend class locale;
    friend class locale::facet;

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Cache>
      friend struct __use_cache;

  private:

    _Atomic_word _M_refcount;
    const facet** _M_facets;
    size_t _M_facets_size;
    const facet** _M_caches;
    char** _M_names;
    static const locale::id* const _S_id_ctype[];
    static const locale::id* const _S_id_numeric[];
    static const locale::id* const _S_id_collate[];
    static const locale::id* const _S_id_time[];
    static const locale::id* const _S_id_monetary[];
    static const locale::id* const _S_id_messages[];
    static const locale::id* const* const _S_facet_categories[];

    void
    _M_add_reference() throw()
    { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }

    void
    _M_remove_reference() throw()
    {
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1) == 1)
 {
   if (true)
     { delete this; }
   if (false)
     { }
 }
    }

    _Impl(const _Impl&, size_t);
    _Impl(const char*, size_t);
    _Impl(size_t) throw();

   ~_Impl() throw();

    _Impl(const _Impl&);

    void
    operator=(const _Impl&);

    bool
    _M_check_same_name()
    {
      bool __ret = true;
      if (_M_names[1])

 for (size_t __i = 0; __ret && __i < _S_categories_size - 1; ++__i)
   __ret = __builtin_strcmp(_M_names[__i], _M_names[__i + 1]) == 0;
      return __ret;
    }

    void
    _M_replace_categories(const _Impl*, category);

    void
    _M_replace_category(const _Impl*, const locale::id* const*);

    void
    _M_replace_facet(const _Impl*, const locale::id*);

    void
    _M_install_facet(const locale::id*, const facet*);

    template<typename _Facet>
      void
      _M_init_facet(_Facet* __facet)
      { _M_install_facet(&_Facet::id, __facet); }

    void
    _M_install_cache(const facet*, size_t);
  };
# 574 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 template<typename _Facet>
    bool
    has_facet(const locale& __loc) throw();
# 591 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 template<typename _Facet>
    const _Facet&
    use_facet(const locale& __loc);
# 608 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 template<typename _CharT>
    class collate : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;


    protected:


      __c_locale _M_c_locale_collate;

    public:

      static locale::id id;
# 635 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 explicit
      collate(size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_get_c_locale())
      { }
# 649 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 explicit
      collate(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_clone_c_locale(__cloc))
      { }
# 666 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 int
      compare(const _CharT* __lo1, const _CharT* __hi1,
       const _CharT* __lo2, const _CharT* __hi2) const
      { return this->do_compare(__lo1, __hi1, __lo2, __hi2); }
# 685 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 string_type
      transform(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_transform(__lo, __hi); }
# 699 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 long
      hash(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_hash(__lo, __hi); }


      int
      _M_compare(const _CharT*, const _CharT*) const throw();

      size_t
      _M_transform(_CharT*, const _CharT*, size_t) const throw();

  protected:

      virtual
      ~collate()
      { _S_destroy_c_locale(_M_c_locale_collate); }
# 728 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 virtual int
      do_compare(const _CharT* __lo1, const _CharT* __hi1,
   const _CharT* __lo2, const _CharT* __hi2) const;
# 744 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 virtual string_type
      do_transform(const _CharT* __lo, const _CharT* __hi) const;
# 757 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
 virtual long
      do_hash(const _CharT* __lo, const _CharT* __hi) const;
    };

  template<typename _CharT>
    locale::id collate<_CharT>::id;


  template<>
    int
    collate<char>::_M_compare(const char*, const char*) const throw();

  template<>
    size_t
    collate<char>::_M_transform(char*, const char*, size_t) const throw();


  template<>
    int
    collate<wchar_t>::_M_compare(const wchar_t*, const wchar_t*) const throw();

  template<>
    size_t
    collate<wchar_t>::_M_transform(wchar_t*, const wchar_t*, size_t) const throw();



  template<typename _CharT>
    class collate_byname : public collate<_CharT>
    {
    public:


      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;


      explicit
      collate_byname(const char* __s, size_t __refs = 0)
      : collate<_CharT>(__refs)
      {
 if (__builtin_strcmp(__s, "C") != 0
     && __builtin_strcmp(__s, "POSIX") != 0)
   {
     this->_S_destroy_c_locale(this->_M_c_locale_collate);
     this->_S_create_c_locale(this->_M_c_locale_collate, __s);
   }
      }

    protected:
      virtual
      ~collate_byname() { }
    };

}




# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.tcc" 1 3
# 37 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.tcc" 3
# 37 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.tcc" 3

namespace std {

  template<typename _Facet>
    locale::
    locale(const locale& __other, _Facet* __f)
    {
      _M_impl = new _Impl(*__other._M_impl, 1);

      if (true)
 { _M_impl->_M_install_facet(&_Facet::id, __f); }
      if (false)
 {
   _M_impl->_M_remove_reference();
                          ;
 }
      delete [] _M_impl->_M_names[0];
      _M_impl->_M_names[0] = 0;
    }

  template<typename _Facet>
    locale
    locale::
    combine(const locale& __other) const
    {
      _Impl* __tmp = new _Impl(*_M_impl, 1);
      if (true)
 {
   __tmp->_M_replace_facet(__other._M_impl, &_Facet::id);
 }
      if (false)
 {
   __tmp->_M_remove_reference();
                          ;
 }
      return locale(__tmp);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    bool
    locale::
    operator()(const basic_string<_CharT, _Traits, _Alloc>& __s1,
        const basic_string<_CharT, _Traits, _Alloc>& __s2) const
    {
      typedef std::collate<_CharT> __collate_type;
      const __collate_type& __collate = use_facet<__collate_type>(*this);
      return (__collate.compare(__s1.data(), __s1.data() + __s1.length(),
    __s2.data(), __s2.data() + __s2.length()) < 0);
    }


  template<typename _Facet>
    bool
    has_facet(const locale& __loc) throw()
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      return (__i < __loc._M_impl->_M_facets_size

       && dynamic_cast<const _Facet*>(__facets[__i]));



    }

  template<typename _Facet>
    const _Facet&
    use_facet(const locale& __loc)
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      if (__i >= __loc._M_impl->_M_facets_size || !__facets[__i])
        __throw_bad_cast();

      return dynamic_cast<const _Facet&>(*__facets[__i]);



    }



  template<typename _CharT>
    int
    collate<_CharT>::_M_compare(const _CharT*, const _CharT*) const throw ()
    { return 0; }


  template<typename _CharT>
    size_t
    collate<_CharT>::_M_transform(_CharT*, const _CharT*, size_t) const throw ()
    { return 0; }

  template<typename _CharT>
    int
    collate<_CharT>::
    do_compare(const _CharT* __lo1, const _CharT* __hi1,
        const _CharT* __lo2, const _CharT* __hi2) const
    {


      const string_type __one(__lo1, __hi1);
      const string_type __two(__lo2, __hi2);

      const _CharT* __p = __one.c_str();
      const _CharT* __pend = __one.data() + __one.length();
      const _CharT* __q = __two.c_str();
      const _CharT* __qend = __two.data() + __two.length();




      for (;;)
 {
   const int __res = _M_compare(__p, __q);
   if (__res)
     return __res;

   __p += char_traits<_CharT>::length(__p);
   __q += char_traits<_CharT>::length(__q);
   if (__p == __pend && __q == __qend)
     return 0;
   else if (__p == __pend)
     return -1;
   else if (__q == __qend)
     return 1;

   __p++;
   __q++;
 }
    }

  template<typename _CharT>
    typename collate<_CharT>::string_type
    collate<_CharT>::
    do_transform(const _CharT* __lo, const _CharT* __hi) const
    {
      string_type __ret;


      const string_type __str(__lo, __hi);

      const _CharT* __p = __str.c_str();
      const _CharT* __pend = __str.data() + __str.length();

      size_t __len = (__hi - __lo) * 2;

      _CharT* __c = new _CharT[__len];

      if (true)
 {



   for (;;)
     {

       size_t __res = _M_transform(__c, __p, __len);


       if (__res >= __len)
  {
    __len = __res + 1;
    delete [] __c, __c = 0;
    __c = new _CharT[__len];
    __res = _M_transform(__c, __p, __len);
  }

       __ret.append(__c, __res);
       __p += char_traits<_CharT>::length(__p);
       if (__p == __pend)
  break;

       __p++;
       __ret.push_back(_CharT());
     }
 }
      if (false)
 {
   delete [] __c;
                          ;
 }

      delete [] __c;

      return __ret;
    }

  template<typename _CharT>
    long
    collate<_CharT>::
    do_hash(const _CharT* __lo, const _CharT* __hi) const
    {
      unsigned long __val = 0;
      for (; __lo < __hi; ++__lo)
 __val =
   *__lo + ((__val << 7)
     | (__val >> (__gnu_cxx::__numeric_traits<unsigned long>::
    __digits - 7)));
      return static_cast<long>(__val);
    }





  extern template class collate<char>;
  extern template class collate_byname<char>;

  extern template
    const collate<char>&
    use_facet<collate<char> >(const locale&);

  extern template
    bool
    has_facet<collate<char> >(const locale&);


  extern template class collate<wchar_t>;
  extern template class collate_byname<wchar_t>;

  extern template
    const collate<wchar_t>&
    use_facet<collate<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<collate<wchar_t> >(const locale&);



}
# 815 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 2 3
# 43 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 2 3
# 53 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
namespace std {





  enum _Ios_Fmtflags
    {
      _S_boolalpha = 1L << 0,
      _S_dec = 1L << 1,
      _S_fixed = 1L << 2,
      _S_hex = 1L << 3,
      _S_internal = 1L << 4,
      _S_left = 1L << 5,
      _S_oct = 1L << 6,
      _S_right = 1L << 7,
      _S_scientific = 1L << 8,
      _S_showbase = 1L << 9,
      _S_showpoint = 1L << 10,
      _S_showpos = 1L << 11,
      _S_skipws = 1L << 12,
      _S_unitbuf = 1L << 13,
      _S_uppercase = 1L << 14,
      _S_adjustfield = _S_left | _S_right | _S_internal,
      _S_basefield = _S_dec | _S_oct | _S_hex,
      _S_floatfield = _S_scientific | _S_fixed,
      _S_ios_fmtflags_end = 1L << 16
    };

  inline _Ios_Fmtflags
  operator&(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Fmtflags
  operator|(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Fmtflags
  operator^(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Fmtflags&
  operator|=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a | __b; }

  inline _Ios_Fmtflags&
  operator&=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a & __b; }

  inline _Ios_Fmtflags&
  operator^=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a ^ __b; }

  inline _Ios_Fmtflags
  operator~(_Ios_Fmtflags __a)
  { return _Ios_Fmtflags(~static_cast<int>(__a)); }


  enum _Ios_Openmode
    {
      _S_app = 1L << 0,
      _S_ate = 1L << 1,
      _S_bin = 1L << 2,
      _S_in = 1L << 3,
      _S_out = 1L << 4,
      _S_trunc = 1L << 5,
      _S_ios_openmode_end = 1L << 16
    };

  inline _Ios_Openmode
  operator&(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Openmode
  operator|(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Openmode
  operator^(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Openmode&
  operator|=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a | __b; }

  inline _Ios_Openmode&
  operator&=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a & __b; }

  inline _Ios_Openmode&
  operator^=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a ^ __b; }

  inline _Ios_Openmode
  operator~(_Ios_Openmode __a)
  { return _Ios_Openmode(~static_cast<int>(__a)); }


  enum _Ios_Iostate
    {
      _S_goodbit = 0,
      _S_badbit = 1L << 0,
      _S_eofbit = 1L << 1,
      _S_failbit = 1L << 2,
      _S_ios_iostate_end = 1L << 16
    };

  inline _Ios_Iostate
  operator&(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Iostate
  operator|(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Iostate
  operator^(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Iostate&
  operator|=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a | __b; }

  inline _Ios_Iostate&
  operator&=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a & __b; }

  inline _Ios_Iostate&
  operator^=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a ^ __b; }

  inline _Ios_Iostate
  operator~(_Ios_Iostate __a)
  { return _Ios_Iostate(~static_cast<int>(__a)); }

  enum _Ios_Seekdir
    {
      _S_beg = 0,
      _S_cur = 1,
      _S_end = 2,
      _S_ios_seekdir_end = 1L << 16
    };
# 206 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
 class ios_base
  {
  public:







    class failure : public exception
    {
    public:


      explicit
      failure(const string& __str) throw();



      virtual
      ~failure() throw();

      virtual const char*
      what() const throw();

    private:
      string _M_msg;
    };
# 262 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
 typedef _Ios_Fmtflags fmtflags;


    static const fmtflags boolalpha = _S_boolalpha;


    static const fmtflags dec = _S_dec;


    static const fmtflags fixed = _S_fixed;


    static const fmtflags hex = _S_hex;




    static const fmtflags internal = _S_internal;



    static const fmtflags left = _S_left;


    static const fmtflags oct = _S_oct;



    static const fmtflags right = _S_right;


    static const fmtflags scientific = _S_scientific;



    static const fmtflags showbase = _S_showbase;



    static const fmtflags showpoint = _S_showpoint;


    static const fmtflags showpos = _S_showpos;


    static const fmtflags skipws = _S_skipws;


    static const fmtflags unitbuf = _S_unitbuf;



    static const fmtflags uppercase = _S_uppercase;


    static const fmtflags adjustfield = _S_adjustfield;


    static const fmtflags basefield = _S_basefield;


    static const fmtflags floatfield = _S_floatfield;
# 337 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
 typedef _Ios_Iostate iostate;



    static const iostate badbit = _S_badbit;


    static const iostate eofbit = _S_eofbit;




    static const iostate failbit = _S_failbit;


    static const iostate goodbit = _S_goodbit;
# 368 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
 typedef _Ios_Openmode openmode;


    static const openmode app = _S_app;


    static const openmode ate = _S_ate;




    static const openmode binary = _S_bin;


    static const openmode in = _S_in;


    static const openmode out = _S_out;


    static const openmode trunc = _S_trunc;
# 400 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
 typedef _Ios_Seekdir seekdir;


    static const seekdir beg = _S_beg;


    static const seekdir cur = _S_cur;


    static const seekdir end = _S_end;


    typedef int io_state;
    typedef int open_mode;
    typedef int seek_dir;

    typedef std::streampos streampos;
    typedef std::streamoff streamoff;
# 426 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
 enum event
    {
      erase_event,
      imbue_event,
      copyfmt_event
    };
# 443 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
 typedef void (*event_callback) (event, ios_base&, int);
# 455 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
 void
    register_callback(event_callback __fn, int __index);

  protected:
    streamsize _M_precision;
    streamsize _M_width;
    fmtflags _M_flags;
    iostate _M_exception;
    iostate _M_streambuf_state;



    struct _Callback_list
    {

      _Callback_list* _M_next;
      ios_base::event_callback _M_fn;
      int _M_index;
      _Atomic_word _M_refcount;

      _Callback_list(ios_base::event_callback __fn, int __index,
       _Callback_list* __cb)
      : _M_next(__cb), _M_fn(__fn), _M_index(__index), _M_refcount(0) { }

      void
      _M_add_reference() { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }


      int
      _M_remove_reference()
      { return __gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1); }
    };

     _Callback_list* _M_callbacks;

    void
    _M_call_callbacks(event __ev) throw();

    void
    _M_dispose_callbacks(void) throw();


    struct _Words
    {
      void* _M_pword;
      long _M_iword;
      _Words() : _M_pword(0), _M_iword(0) { }
    };


    _Words _M_word_zero;



    enum { _S_local_word_size = 8 };
    _Words _M_local_word[_S_local_word_size];


    int _M_word_size;
    _Words* _M_word;

    _Words&
    _M_grow_words(int __index, bool __iword);


    locale _M_ios_locale;

    void
    _M_init() throw();

  public:





    class Init
    {
      friend class ios_base;
    public:
      Init();
      ~Init();

    private:
      static _Atomic_word _S_refcount;
      static bool _S_synced_with_stdio;
    };






    fmtflags
    flags() const
    { return _M_flags; }
# 559 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
 fmtflags
    flags(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags = __fmtfl;
      return __old;
    }
# 575 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
 fmtflags
    setf(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags |= __fmtfl;
      return __old;
    }
# 592 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
 fmtflags
    setf(fmtflags __fmtfl, fmtflags __mask)
    {
      fmtflags __old = _M_flags;
      _M_flags &= ~__mask;
      _M_flags |= (__fmtfl & __mask);
      return __old;
    }







    void
    unsetf(fmtflags __mask)
    { _M_flags &= ~__mask; }
# 618 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
 streamsize
    precision() const
    { return _M_precision; }






    streamsize
    precision(streamsize __prec)
    {
      streamsize __old = _M_precision;
      _M_precision = __prec;
      return __old;
    }







    streamsize
    width() const
    { return _M_width; }






    streamsize
    width(streamsize __wide)
    {
      streamsize __old = _M_width;
      _M_width = __wide;
      return __old;
    }
# 669 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
 static bool
    sync_with_stdio(bool __sync = true);
# 681 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
 locale
    imbue(const locale& __loc) throw();
# 692 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
 locale
    getloc() const
    { return _M_ios_locale; }
# 703 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
 const locale&
    _M_getloc() const
    { return _M_ios_locale; }
# 722 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
 static int
    xalloc() throw();
# 738 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
 long&
    iword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
   ? _M_word[__ix] : _M_grow_words(__ix, true);
      return __word._M_iword;
    }
# 759 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
 void*&
    pword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
   ? _M_word[__ix] : _M_grow_words(__ix, false);
      return __word._M_pword;
    }
# 776 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
 virtual ~ios_base();

  protected:
    ios_base() throw ();



  private:
    ios_base(const ios_base&);

    ios_base&
    operator=(const ios_base&);
  };



  inline ios_base&
  boolalpha(ios_base& __base)
  {
    __base.setf(ios_base::boolalpha);
    return __base;
  }


  inline ios_base&
  noboolalpha(ios_base& __base)
  {
    __base.unsetf(ios_base::boolalpha);
    return __base;
  }


  inline ios_base&
  showbase(ios_base& __base)
  {
    __base.setf(ios_base::showbase);
    return __base;
  }


  inline ios_base&
  noshowbase(ios_base& __base)
  {
    __base.unsetf(ios_base::showbase);
    return __base;
  }


  inline ios_base&
  showpoint(ios_base& __base)
  {
    __base.setf(ios_base::showpoint);
    return __base;
  }


  inline ios_base&
  noshowpoint(ios_base& __base)
  {
    __base.unsetf(ios_base::showpoint);
    return __base;
  }


  inline ios_base&
  showpos(ios_base& __base)
  {
    __base.setf(ios_base::showpos);
    return __base;
  }


  inline ios_base&
  noshowpos(ios_base& __base)
  {
    __base.unsetf(ios_base::showpos);
    return __base;
  }


  inline ios_base&
  skipws(ios_base& __base)
  {
    __base.setf(ios_base::skipws);
    return __base;
  }


  inline ios_base&
  noskipws(ios_base& __base)
  {
    __base.unsetf(ios_base::skipws);
    return __base;
  }


  inline ios_base&
  uppercase(ios_base& __base)
  {
    __base.setf(ios_base::uppercase);
    return __base;
  }


  inline ios_base&
  nouppercase(ios_base& __base)
  {
    __base.unsetf(ios_base::uppercase);
    return __base;
  }


  inline ios_base&
  unitbuf(ios_base& __base)
  {
     __base.setf(ios_base::unitbuf);
     return __base;
  }


  inline ios_base&
  nounitbuf(ios_base& __base)
  {
     __base.unsetf(ios_base::unitbuf);
     return __base;
  }



  inline ios_base&
  internal(ios_base& __base)
  {
     __base.setf(ios_base::internal, ios_base::adjustfield);
     return __base;
  }


  inline ios_base&
  left(ios_base& __base)
  {
    __base.setf(ios_base::left, ios_base::adjustfield);
    return __base;
  }


  inline ios_base&
  right(ios_base& __base)
  {
    __base.setf(ios_base::right, ios_base::adjustfield);
    return __base;
  }



  inline ios_base&
  dec(ios_base& __base)
  {
    __base.setf(ios_base::dec, ios_base::basefield);
    return __base;
  }


  inline ios_base&
  hex(ios_base& __base)
  {
    __base.setf(ios_base::hex, ios_base::basefield);
    return __base;
  }


  inline ios_base&
  oct(ios_base& __base)
  {
    __base.setf(ios_base::oct, ios_base::basefield);
    return __base;
  }



  inline ios_base&
  fixed(ios_base& __base)
  {
    __base.setf(ios_base::fixed, ios_base::floatfield);
    return __base;
  }


  inline ios_base&
  scientific(ios_base& __base)
  {
    __base.setf(ios_base::scientific, ios_base::floatfield);
    return __base;
  }

}
# 43 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 1 3
# 37 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
# 37 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3








namespace std {

  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs_eof(basic_streambuf<_CharT, _Traits>*,
     basic_streambuf<_CharT, _Traits>*, bool&);
# 113 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 template<typename _CharT, typename _Traits>
    class basic_streambuf
    {
    public:






      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename traits_type::int_type int_type;
      typedef typename traits_type::pos_type pos_type;
      typedef typename traits_type::off_type off_type;




      typedef basic_streambuf<char_type, traits_type> __streambuf_type;


      friend class basic_ios<char_type, traits_type>;
      friend class basic_istream<char_type, traits_type>;
      friend class basic_ostream<char_type, traits_type>;
      friend class istreambuf_iterator<char_type, traits_type>;
      friend class ostreambuf_iterator<char_type, traits_type>;

      friend streamsize
      __copy_streambufs_eof<>(__streambuf_type*, __streambuf_type*, bool&);

      template<bool _IsMove, typename _CharT2>
        friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
            _CharT2*>::__type
        __copy_move_a2(istreambuf_iterator<_CharT2>,
         istreambuf_iterator<_CharT2>, _CharT2*);

      template<typename _CharT2>
        friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
      istreambuf_iterator<_CharT2> >::__type
        find(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      const _CharT2&);

      template<typename _CharT2, typename _Traits2>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&, _CharT2*);

      template<typename _CharT2, typename _Traits2, typename _Alloc>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&,
     basic_string<_CharT2, _Traits2, _Alloc>&);

      template<typename _CharT2, typename _Traits2, typename _Alloc>
        friend basic_istream<_CharT2, _Traits2>&
        getline(basic_istream<_CharT2, _Traits2>&,
  basic_string<_CharT2, _Traits2, _Alloc>&, _CharT2);

    protected:
# 179 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 char_type* _M_in_beg;
      char_type* _M_in_cur;
      char_type* _M_in_end;
      char_type* _M_out_beg;
      char_type* _M_out_cur;
      char_type* _M_out_end;


      locale _M_buf_locale;

  public:

      virtual
      ~basic_streambuf()
      { }
# 203 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 locale
      pubimbue(const locale &__loc)
      {
 locale __tmp(this->getloc());
 this->imbue(__loc);
 _M_buf_locale = __loc;
 return __tmp;
      }
# 220 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 locale
      getloc() const
      { return _M_buf_locale; }
# 233 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 __streambuf_type*
      pubsetbuf(char_type* __s, streamsize __n)
      { return this->setbuf(__s, __n); }

      pos_type
      pubseekoff(off_type __off, ios_base::seekdir __way,
   ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekoff(__off, __way, __mode); }

      pos_type
      pubseekpos(pos_type __sp,
   ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekpos(__sp, __mode); }

      int
      pubsync() { return this->sync(); }
# 260 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 streamsize
      in_avail()
      {
 const streamsize __ret = this->egptr() - this->gptr();
 return __ret ? __ret : this->showmanyc();
      }
# 274 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 int_type
      snextc()
      {
 int_type __ret = traits_type::eof();
 if (__builtin_expect(!traits_type::eq_int_type(this->sbumpc(),
             __ret), true))
   __ret = this->sgetc();
 return __ret;
      }
# 292 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 int_type
      sbumpc()
      {
 int_type __ret;
 if (__builtin_expect(this->gptr() < this->egptr(), true))
   {
     __ret = traits_type::to_int_type(*this->gptr());
     this->gbump(1);
   }
 else
   __ret = this->uflow();
 return __ret;
      }
# 314 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 int_type
      sgetc()
      {
 int_type __ret;
 if (__builtin_expect(this->gptr() < this->egptr(), true))
   __ret = traits_type::to_int_type(*this->gptr());
 else
   __ret = this->underflow();
 return __ret;
      }
# 333 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 streamsize
      sgetn(char_type* __s, streamsize __n)
      { return this->xsgetn(__s, __n); }
# 348 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 int_type
      sputbackc(char_type __c)
      {
 int_type __ret;
 const bool __testpos = this->eback() < this->gptr();
 if (__builtin_expect(!__testpos ||
        !traits_type::eq(__c, this->gptr()[-1]), false))
   __ret = this->pbackfail(traits_type::to_int_type(__c));
 else
   {
     this->gbump(-1);
     __ret = traits_type::to_int_type(*this->gptr());
   }
 return __ret;
      }
# 373 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 int_type
      sungetc()
      {
 int_type __ret;
 if (__builtin_expect(this->eback() < this->gptr(), true))
   {
     this->gbump(-1);
     __ret = traits_type::to_int_type(*this->gptr());
   }
 else
   __ret = this->pbackfail();
 return __ret;
      }
# 400 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 int_type
      sputc(char_type __c)
      {
 int_type __ret;
 if (__builtin_expect(this->pptr() < this->epptr(), true))
   {
     *this->pptr() = __c;
     this->pbump(1);
     __ret = traits_type::to_int_type(__c);
   }
 else
   __ret = this->overflow(traits_type::to_int_type(__c));
 return __ret;
      }
# 426 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 streamsize
      sputn(const char_type* __s, streamsize __n)
      { return this->xsputn(__s, __n); }

    protected:
# 440 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 basic_streambuf()
      : _M_in_beg(0), _M_in_cur(0), _M_in_end(0),
      _M_out_beg(0), _M_out_cur(0), _M_out_end(0),
      _M_buf_locale(locale())
      { }
# 458 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 char_type*
      eback() const { return _M_in_beg; }

      char_type*
      gptr() const { return _M_in_cur; }

      char_type*
      egptr() const { return _M_in_end; }
# 474 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 void
      gbump(int __n) { _M_in_cur += __n; }
# 485 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 void
      setg(char_type* __gbeg, char_type* __gnext, char_type* __gend)
      {
 _M_in_beg = __gbeg;
 _M_in_cur = __gnext;
 _M_in_end = __gend;
      }
# 505 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 char_type*
      pbase() const { return _M_out_beg; }

      char_type*
      pptr() const { return _M_out_cur; }

      char_type*
      epptr() const { return _M_out_end; }
# 521 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 void
      pbump(int __n) { _M_out_cur += __n; }
# 531 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 void
      setp(char_type* __pbeg, char_type* __pend)
      {
 _M_out_beg = _M_out_cur = __pbeg;
 _M_out_end = __pend;
      }
# 552 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 virtual void
      imbue(const locale&)
      { }
# 567 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 virtual basic_streambuf<char_type,_Traits>*
      setbuf(char_type*, streamsize)
      { return this; }
# 578 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 virtual pos_type
      seekoff(off_type, ios_base::seekdir,
       ios_base::openmode = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); }
# 590 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 virtual pos_type
      seekpos(pos_type,
       ios_base::openmode = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); }
# 603 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 virtual int
      sync() { return 0; }
# 625 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 virtual streamsize
      showmanyc() { return 0; }
# 641 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 virtual streamsize
      xsgetn(char_type* __s, streamsize __n);
# 663 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 virtual int_type
      underflow()
      { return traits_type::eof(); }
# 676 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 virtual int_type
      uflow()
      {
 int_type __ret = traits_type::eof();
 const bool __testeof = traits_type::eq_int_type(this->underflow(),
       __ret);
 if (!__testeof)
   {
     __ret = traits_type::to_int_type(*this->gptr());
     this->gbump(1);
   }
 return __ret;
      }
# 700 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 virtual int_type
      pbackfail(int_type = traits_type::eof())
      { return traits_type::eof(); }
# 718 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 virtual streamsize
      xsputn(const char_type* __s, streamsize __n);
# 744 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 virtual int_type
      overflow(int_type = traits_type::eof())
      { return traits_type::eof(); }



    public:
# 759 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
 void
      stossc()
      {
 if (this->gptr() < this->egptr())
   this->gbump(1);
 else
   this->uflow();
      }


    private:


      basic_streambuf(const __streambuf_type& __sb)
      : _M_in_beg(__sb._M_in_beg), _M_in_cur(__sb._M_in_cur),
      _M_in_end(__sb._M_in_end), _M_out_beg(__sb._M_out_beg),
      _M_out_cur(__sb._M_out_cur), _M_out_end(__sb._M_out_cur),
      _M_buf_locale(__sb._M_buf_locale)
      { }

      __streambuf_type&
      operator=(const __streambuf_type&) { return *this; };
    };


  template<>
    streamsize
    __copy_streambufs_eof(basic_streambuf<char>* __sbin,
     basic_streambuf<char>* __sbout, bool& __ineof);

  template<>
    streamsize
    __copy_streambufs_eof(basic_streambuf<wchar_t>* __sbin,
     basic_streambuf<wchar_t>* __sbout, bool& __ineof);


}




# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf.tcc" 1 3
# 38 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf.tcc" 3
# 38 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf.tcc" 3

namespace std {

  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsgetn(char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
 {
   const streamsize __buf_len = this->egptr() - this->gptr();
   if (__buf_len)
     {
       const streamsize __remaining = __n - __ret;
       const streamsize __len = std::min(__buf_len, __remaining);
       traits_type::copy(__s, this->gptr(), __len);
       __ret += __len;
       __s += __len;
       this->gbump(__len);
     }

   if (__ret < __n)
     {
       const int_type __c = this->uflow();
       if (!traits_type::eq_int_type(__c, traits_type::eof()))
  {
    traits_type::assign(*__s++, traits_type::to_char_type(__c));
    ++__ret;
  }
       else
  break;
     }
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsputn(const char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
 {
   const streamsize __buf_len = this->epptr() - this->pptr();
   if (__buf_len)
     {
       const streamsize __remaining = __n - __ret;
       const streamsize __len = std::min(__buf_len, __remaining);
       traits_type::copy(this->pptr(), __s, __len);
       __ret += __len;
       __s += __len;
       this->pbump(__len);
     }

   if (__ret < __n)
     {
       int_type __c = this->overflow(traits_type::to_int_type(*__s));
       if (!traits_type::eq_int_type(__c, traits_type::eof()))
  {
    ++__ret;
    ++__s;
  }
       else
  break;
     }
 }
      return __ret;
    }




  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs_eof(basic_streambuf<_CharT, _Traits>* __sbin,
     basic_streambuf<_CharT, _Traits>* __sbout,
     bool& __ineof)
    {
      streamsize __ret = 0;
      __ineof = true;
      typename _Traits::int_type __c = __sbin->sgetc();
      while (!_Traits::eq_int_type(__c, _Traits::eof()))
 {
   __c = __sbout->sputc(_Traits::to_char_type(__c));
   if (_Traits::eq_int_type(__c, _Traits::eof()))
     {
       __ineof = false;
       break;
     }
   ++__ret;
   __c = __sbin->snextc();
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    inline streamsize
    __copy_streambufs(basic_streambuf<_CharT, _Traits>* __sbin,
        basic_streambuf<_CharT, _Traits>* __sbout)
    {
      bool __ineof;
      return __copy_streambufs_eof(__sbin, __sbout, __ineof);
    }





  extern template class basic_streambuf<char>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<char>*,
        basic_streambuf<char>*);
  extern template
    streamsize
    __copy_streambufs_eof(basic_streambuf<char>*,
     basic_streambuf<char>*, bool&);


  extern template class basic_streambuf<wchar_t>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<wchar_t>*,
        basic_streambuf<wchar_t>*);
  extern template
    streamsize
    __copy_streambufs_eof(basic_streambuf<wchar_t>*,
     basic_streambuf<wchar_t>*, bool&);



}
# 799 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 2 3
# 44 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 1 3
# 35 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
# 35 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3



# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 1 3
# 39 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
# 39 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3

# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 1 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 3




# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wctype.h" 1 3
# 13 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wctype.h" 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 13 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wctype.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {
# 166 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wctype.h" 3
 typedef wchar_t wctrans_t;
  wint_t towctrans(wint_t,wctrans_t);
  wctrans_t wctrans(const char *);
  wctype_t wctype(const char *);


}


#pragma pack(pop)
# 46 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 2 3
# 75 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 3
namespace std {

  using ::wctrans_t;
  using ::wctype_t;
  using ::wint_t;

  using ::iswalnum;
  using ::iswalpha;

  using ::iswblank;

  using ::iswcntrl;
  using ::iswctype;
  using ::iswdigit;
  using ::iswgraph;
  using ::iswlower;
  using ::iswprint;
  using ::iswpunct;
  using ::iswspace;
  using ::iswupper;
  using ::iswxdigit;
  using ::towctrans;
  using ::towlower;
  using ::towupper;
  using ::wctrans;
  using ::wctype;

}
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 1 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3
# 42 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/ctype_base.h" 1 3
# 37 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/ctype_base.h" 3
namespace std {


  struct ctype_base
  {

    typedef const int* __to_type;



    typedef unsigned short mask;
    static const mask upper = 1 << 0;
    static const mask lower = 1 << 1;
    static const mask alpha = 1 << 2;
    static const mask digit = 1 << 3;
    static const mask xdigit = 1 << 4;
    static const mask space = 1 << 5;
    static const mask print = 1 << 6;
    static const mask graph = (1 << 2) | (1 << 3) | (1 << 9);
    static const mask cntrl = 1 << 8;
    static const mask punct = 1 << 9;
    static const mask alnum = (1 << 2) | (1 << 3);
  };

}
# 43 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3






# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf_iterator.h" 1 3
# 35 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf_iterator.h" 3
# 35 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf_iterator.h" 3




namespace std {
# 48 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf_iterator.h" 3
 template<typename _CharT, typename _Traits>
    class istreambuf_iterator
    : public iterator<input_iterator_tag, _CharT, typename _Traits::off_type,
        _CharT*, _CharT&>
    {
    public:



      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename _Traits::int_type int_type;
      typedef basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef basic_istream<_CharT, _Traits> istream_type;


      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
                      ostreambuf_iterator<_CharT2> >::__type
 copy(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      ostreambuf_iterator<_CharT2>);

      template<bool _IsMove, typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
            _CharT2*>::__type
 __copy_move_a2(istreambuf_iterator<_CharT2>,
         istreambuf_iterator<_CharT2>, _CharT2*);

      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
               istreambuf_iterator<_CharT2> >::__type
 find(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      const _CharT2&);

    private:







      mutable streambuf_type* _M_sbuf;
      mutable int_type _M_c;

    public:

      istreambuf_iterator() throw()
      : _M_sbuf(0), _M_c(traits_type::eof()) { }


      istreambuf_iterator(istream_type& __s) throw()
      : _M_sbuf(__s.rdbuf()), _M_c(traits_type::eof()) { }


      istreambuf_iterator(streambuf_type* __s) throw()
      : _M_sbuf(__s), _M_c(traits_type::eof()) { }




      char_type
      operator*() const
      {







 return traits_type::to_char_type(_M_get());
      }


      istreambuf_iterator&
      operator++()
      {


                        ;
 if (_M_sbuf)
   {
     _M_sbuf->sbumpc();
     _M_c = traits_type::eof();
   }
 return *this;
      }


      istreambuf_iterator
      operator++(int)
      {


                        ;

 istreambuf_iterator __old = *this;
 if (_M_sbuf)
   {
     __old._M_c = _M_sbuf->sbumpc();
     _M_c = traits_type::eof();
   }
 return __old;
      }





      bool
      equal(const istreambuf_iterator& __b) const
      { return _M_at_eof() == __b._M_at_eof(); }

    private:
      int_type
      _M_get() const
      {
 const int_type __eof = traits_type::eof();
 int_type __ret = __eof;
 if (_M_sbuf)
   {
     if (!traits_type::eq_int_type(_M_c, __eof))
       __ret = _M_c;
     else if (!traits_type::eq_int_type((__ret = _M_sbuf->sgetc()),
            __eof))
       _M_c = __ret;
     else
       _M_sbuf = 0;
   }
 return __ret;
      }

      bool
      _M_at_eof() const
      {
 const int_type __eof = traits_type::eof();
 return traits_type::eq_int_type(_M_get(), __eof);
      }
    };

  template<typename _CharT, typename _Traits>
    inline bool
    operator==(const istreambuf_iterator<_CharT, _Traits>& __a,
        const istreambuf_iterator<_CharT, _Traits>& __b)
    { return __a.equal(__b); }

  template<typename _CharT, typename _Traits>
    inline bool
    operator!=(const istreambuf_iterator<_CharT, _Traits>& __a,
        const istreambuf_iterator<_CharT, _Traits>& __b)
    { return !__a.equal(__b); }


  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    public:



      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef basic_ostream<_CharT, _Traits> ostream_type;


      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
                      ostreambuf_iterator<_CharT2> >::__type
 copy(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      ostreambuf_iterator<_CharT2>);

    private:
      streambuf_type* _M_sbuf;
      bool _M_failed;

    public:

      ostreambuf_iterator(ostream_type& __s) throw ()
      : _M_sbuf(__s.rdbuf()), _M_failed(!_M_sbuf) { }


      ostreambuf_iterator(streambuf_type* __s) throw ()
      : _M_sbuf(__s), _M_failed(!_M_sbuf) { }


      ostreambuf_iterator&
      operator=(_CharT __c)
      {
 if (!_M_failed &&
     _Traits::eq_int_type(_M_sbuf->sputc(__c), _Traits::eof()))
   _M_failed = true;
 return *this;
      }


      ostreambuf_iterator&
      operator*()
      { return *this; }


      ostreambuf_iterator&
      operator++(int)
      { return *this; }


      ostreambuf_iterator&
      operator++()
      { return *this; }


      bool
      failed() const throw()
      { return _M_failed; }

      ostreambuf_iterator&
      _M_put(const _CharT* __ws, streamsize __len)
      {
 if (__builtin_expect(!_M_failed, true)
     && __builtin_expect(this->_M_sbuf->sputn(__ws, __len) != __len,
    false))
   _M_failed = true;
 return *this;
      }
    };


  template<typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
                           ostreambuf_iterator<_CharT> >::__type
    copy(istreambuf_iterator<_CharT> __first,
  istreambuf_iterator<_CharT> __last,
  ostreambuf_iterator<_CharT> __result)
    {
      if (__first._M_sbuf && !__last._M_sbuf && !__result._M_failed)
 {
   bool __ineof;
   __copy_streambufs_eof(__first._M_sbuf, __result._M_sbuf, __ineof);
   if (!__ineof)
     __result._M_failed = true;
 }
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
            ostreambuf_iterator<_CharT> >::__type
    __copy_move_a2(_CharT* __first, _CharT* __last,
     ostreambuf_iterator<_CharT> __result)
    {
      const streamsize __num = __last - __first;
      if (__num > 0)
 __result._M_put(__first, __num);
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        ostreambuf_iterator<_CharT> >::__type
    __copy_move_a2(const _CharT* __first, const _CharT* __last,
     ostreambuf_iterator<_CharT> __result)
    {
      const streamsize __num = __last - __first;
      if (__num > 0)
 __result._M_put(__first, __num);
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
            _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT> __first,
     istreambuf_iterator<_CharT> __last, _CharT* __result)
    {
      typedef istreambuf_iterator<_CharT> __is_iterator_type;
      typedef typename __is_iterator_type::traits_type traits_type;
      typedef typename __is_iterator_type::streambuf_type streambuf_type;
      typedef typename traits_type::int_type int_type;

      if (__first._M_sbuf && !__last._M_sbuf)
 {
   streambuf_type* __sb = __first._M_sbuf;
   int_type __c = __sb->sgetc();
   while (!traits_type::eq_int_type(__c, traits_type::eof()))
     {
       const streamsize __n = __sb->egptr() - __sb->gptr();
       if (__n > 1)
  {
    traits_type::copy(__result, __sb->gptr(), __n);
    __sb->gbump(__n);
    __result += __n;
    __c = __sb->underflow();
  }
       else
  {
    *__result++ = traits_type::to_char_type(__c);
    __c = __sb->snextc();
  }
     }
 }
      return __result;
    }

  template<typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
          istreambuf_iterator<_CharT> >::__type
    find(istreambuf_iterator<_CharT> __first,
  istreambuf_iterator<_CharT> __last, const _CharT& __val)
    {
      typedef istreambuf_iterator<_CharT> __is_iterator_type;
      typedef typename __is_iterator_type::traits_type traits_type;
      typedef typename __is_iterator_type::streambuf_type streambuf_type;
      typedef typename traits_type::int_type int_type;

      if (__first._M_sbuf && !__last._M_sbuf)
 {
   const int_type __ival = traits_type::to_int_type(__val);
   streambuf_type* __sb = __first._M_sbuf;
   int_type __c = __sb->sgetc();
   while (!traits_type::eq_int_type(__c, traits_type::eof())
   && !traits_type::eq_int_type(__c, __ival))
     {
       streamsize __n = __sb->egptr() - __sb->gptr();
       if (__n > 1)
  {
    const _CharT* __p = traits_type::find(__sb->gptr(),
       __n, __val);
    if (__p)
      __n = __p - __sb->gptr();
    __sb->gbump(__n);
    __c = __sb->sgetc();
  }
       else
  __c = __sb->snextc();
     }

   if (!traits_type::eq_int_type(__c, traits_type::eof()))
     __first._M_c = __c;
   else
     __first._M_sbuf = 0;
 }
      return __first;
    }



}
# 50 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3

namespace std {
# 63 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 template<typename _Tp>
    void
    __convert_to_v(const char*, _Tp&, ios_base::iostate&,
     const __c_locale&) throw();


  template<>
    void
    __convert_to_v(const char*, float&, ios_base::iostate&,
     const __c_locale&) throw();

  template<>
    void
    __convert_to_v(const char*, double&, ios_base::iostate&,
     const __c_locale&) throw();

  template<>
    void
    __convert_to_v(const char*, long double&, ios_base::iostate&,
     const __c_locale&) throw();



  template<typename _CharT, typename _Traits>
    struct __pad
    {
      static void
      _S_pad(ios_base& __io, _CharT __fill, _CharT* __news,
      const _CharT* __olds, streamsize __newlen, streamsize __oldlen);
    };






  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
     const char* __gbeg, size_t __gsize,
     const _CharT* __first, const _CharT* __last);




  template<typename _CharT>
    inline
    ostreambuf_iterator<_CharT>
    __write(ostreambuf_iterator<_CharT> __s, const _CharT* __ws, int __len)
    {
      __s._M_put(__ws, __len);
      return __s;
    }


  template<typename _CharT, typename _OutIter>
    inline
    _OutIter
    __write(_OutIter __s, const _CharT* __ws, int __len)
    {
      for (int __j = 0; __j < __len; __j++, ++__s)
 *__s = __ws[__j];
      return __s;
    }
# 141 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 template<typename _CharT>
    class __ctype_abstract_base : public locale::facet, public ctype_base
    {
    public:


      typedef _CharT char_type;
# 159 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 bool
      is(mask __m, char_type __c) const
      { return this->do_is(__m, __c); }
# 176 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 const char_type*
      is(const char_type *__lo, const char_type *__hi, mask *__vec) const
      { return this->do_is(__lo, __hi, __vec); }
# 192 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 const char_type*
      scan_is(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_is(__m, __lo, __hi); }
# 208 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 const char_type*
      scan_not(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_not(__m, __lo, __hi); }
# 222 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }
# 237 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }
# 251 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }
# 266 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }
# 283 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 char_type
      widen(char __c) const
      { return this->do_widen(__c); }
# 302 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      { return this->do_widen(__lo, __hi, __to); }
# 321 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 char
      narrow(char_type __c, char __dfault) const
      { return this->do_narrow(__c, __dfault); }
# 343 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
       char __dfault, char *__to) const
      { return this->do_narrow(__lo, __hi, __dfault, __to); }

    protected:
      explicit
      __ctype_abstract_base(size_t __refs = 0): facet(__refs) { }

      virtual
      ~__ctype_abstract_base() { }
# 368 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual bool
      do_is(mask __m, char_type __c) const = 0;
# 387 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi,
     mask* __vec) const = 0;
# 406 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo,
   const char_type* __hi) const = 0;
# 425 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const = 0;
# 443 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual char_type
      do_toupper(char_type) const = 0;
# 460 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const = 0;
# 476 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual char_type
      do_tolower(char_type) const = 0;
# 493 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const = 0;
# 512 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual char_type
      do_widen(char) const = 0;
# 533 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual const char*
      do_widen(const char* __lo, const char* __hi,
        char_type* __dest) const = 0;
# 555 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual char
      do_narrow(char_type, char __dfault) const = 0;
# 579 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const = 0;
    };
# 602 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 template<typename _CharT>
    class ctype : public __ctype_abstract_base<_CharT>
    {
    public:

      typedef _CharT char_type;
      typedef typename __ctype_abstract_base<_CharT>::mask mask;


      static locale::id id;

      explicit
      ctype(size_t __refs = 0) : __ctype_abstract_base<_CharT>(__refs) { }

   protected:
      virtual
      ~ctype();

      virtual bool
      do_is(mask __m, char_type __c) const;

      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi, mask* __vec) const;

      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo, const char_type* __hi) const;

      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const;

      virtual char_type
      do_toupper(char_type __c) const;

      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;

      virtual char_type
      do_tolower(char_type __c) const;

      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;

      virtual char_type
      do_widen(char __c) const;

      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const;

      virtual char
      do_narrow(char_type, char __dfault) const;

      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const;
    };

  template<typename _CharT>
    locale::id ctype<_CharT>::id;
# 671 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 template<>
    class ctype<char> : public locale::facet, public ctype_base
    {
    public:


      typedef char char_type;

    protected:

      __c_locale _M_c_locale_ctype;
      bool _M_del;
      __to_type _M_toupper;
      __to_type _M_tolower;
      const mask* _M_table;
      mutable char _M_widen_ok;
      mutable char _M_widen[1 + static_cast<unsigned char>(-1)];
      mutable char _M_narrow[1 + static_cast<unsigned char>(-1)];
      mutable char _M_narrow_ok;


    public:

      static locale::id id;

      static const size_t table_size = 1 + static_cast<unsigned char>(-1);
# 708 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 explicit
      ctype(const mask* __table = 0, bool __del = false, size_t __refs = 0);
# 721 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 explicit
      ctype(__c_locale __cloc, const mask* __table = 0, bool __del = false,
     size_t __refs = 0);
# 734 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 inline bool
      is(mask __m, char __c) const;
# 749 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 inline const char*
      is(const char* __lo, const char* __hi, mask* __vec) const;
# 763 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 inline const char*
      scan_is(mask __m, const char* __lo, const char* __hi) const;
# 777 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 inline const char*
      scan_not(mask __m, const char* __lo, const char* __hi) const;
# 792 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }
# 809 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }
# 825 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }
# 842 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }
# 862 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 char_type
      widen(char __c) const
      {
 if (_M_widen_ok)
   return _M_widen[static_cast<unsigned char>(__c)];
 this->_M_widen_init();
 return this->do_widen(__c);
      }
# 889 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      {
 if (_M_widen_ok == 1)
   {
     __builtin_memcpy(__to, __lo, __hi - __lo);
     return __hi;
   }
 if (!_M_widen_ok)
   _M_widen_init();
 return this->do_widen(__lo, __hi, __to);
      }
# 920 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 char
      narrow(char_type __c, char __dfault) const
      {
 if (_M_narrow[static_cast<unsigned char>(__c)])
   return _M_narrow[static_cast<unsigned char>(__c)];
 const char __t = do_narrow(__c, __dfault);
 if (__t != __dfault)
   _M_narrow[static_cast<unsigned char>(__c)] = __t;
 return __t;
      }
# 953 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
      char __dfault, char *__to) const
      {
 if (__builtin_expect(_M_narrow_ok == 1, true))
   {
     __builtin_memcpy(__to, __lo, __hi - __lo);
     return __hi;
   }
 if (!_M_narrow_ok)
   _M_narrow_init();
 return this->do_narrow(__lo, __hi, __dfault, __to);
      }





      const mask*
      table() const throw()
      { return _M_table; }


      static const mask*
      classic_table() throw();
    protected:







      virtual
      ~ctype();
# 1002 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual char_type
      do_toupper(char_type) const;
# 1019 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;
# 1035 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual char_type
      do_tolower(char_type) const;
# 1052 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;
# 1072 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual char_type
      do_widen(char __c) const
      { return __c; }
# 1095 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const
      {
 __builtin_memcpy(__dest, __lo, __hi - __lo);
 return __hi;
      }
# 1121 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual char
      do_narrow(char_type __c, char) const
      { return __c; }
# 1147 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char, char* __dest) const
      {
 __builtin_memcpy(__dest, __lo, __hi - __lo);
 return __hi;
      }

    private:
      void _M_narrow_init() const;
      void _M_widen_init() const;
    };
# 1172 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 template<>
    class ctype<wchar_t> : public __ctype_abstract_base<wchar_t>
    {
    public:


      typedef wchar_t char_type;
      typedef wctype_t __wmask_type;

    protected:
      __c_locale _M_c_locale_ctype;


      bool _M_narrow_ok;
      char _M_narrow[128];
      wint_t _M_widen[1 + static_cast<unsigned char>(-1)];


      mask _M_bit[16];
      __wmask_type _M_wmask[16];

    public:


      static locale::id id;
# 1205 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 explicit
      ctype(size_t __refs = 0);
# 1216 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 explicit
      ctype(__c_locale __cloc, size_t __refs = 0);

    protected:
      __wmask_type
      _M_convert_to_wmask(const mask __m) const throw();


      virtual
      ~ctype();
# 1240 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual bool
      do_is(mask __m, char_type __c) const;
# 1259 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi, mask* __vec) const;
# 1277 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo, const char_type* __hi) const;
# 1295 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const;
# 1312 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual char_type
      do_toupper(char_type) const;
# 1329 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;
# 1345 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual char_type
      do_tolower(char_type) const;
# 1362 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;
# 1382 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual char_type
      do_widen(char) const;
# 1404 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const;
# 1427 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual char
      do_narrow(char_type, char __dfault) const;
# 1453 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const;


      void
      _M_initialize_ctype() throw();
    };



  template<typename _CharT>
    class ctype_byname : public ctype<_CharT>
    {
    public:
      typedef typename ctype<_CharT>::mask mask;

      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname() { };
    };


  template<>
    class ctype_byname<char> : public ctype<char>
    {
    public:
      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname();
    };


  template<>
    class ctype_byname<wchar_t> : public ctype<wchar_t>
    {
    public:
      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname();
    };


}




# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/ctype_inline.h" 1 3
# 37 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/ctype_inline.h" 3
namespace std {

  bool
  ctype<char>::
  is(mask __m, char __c) const
  { return (_M_table[static_cast<unsigned char>(__c) ] & __m); }


  const char*
  ctype<char>::
  is(const char* __low, const char* __high, mask* __vec) const
  {
    while (__low < __high)
      *__vec++ = _M_table[static_cast<unsigned char>(*__low++)];
    return __high;
  }

  const char*
  ctype<char>::
  scan_is(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high && !this->is(__m, *__low))
      ++__low;
    return __low;
  }

  const char*
  ctype<char>::
  scan_not(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high && this->is(__m, *__low) != 0)
      ++__low;
    return __low;
  }

}
# 1509 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3

namespace std {


  class __num_base
  {
  public:


    enum
      {
        _S_ominus,
        _S_oplus,
        _S_ox,
        _S_oX,
        _S_odigits,
        _S_odigits_end = _S_odigits + 16,
        _S_oudigits = _S_odigits_end,
        _S_oudigits_end = _S_oudigits + 16,
        _S_oe = _S_odigits + 14,
        _S_oE = _S_oudigits + 14,
 _S_oend = _S_oudigits_end
      };






    static const char* _S_atoms_out;



    static const char* _S_atoms_in;

    enum
    {
      _S_iminus,
      _S_iplus,
      _S_ix,
      _S_iX,
      _S_izero,
      _S_ie = _S_izero + 14,
      _S_iE = _S_izero + 20,
      _S_iend = 26
    };



    static void
    _S_format_float(const ios_base& __io, char* __fptr, char __mod) throw();
  };

  template<typename _CharT>
    struct __numpunct_cache : public locale::facet
    {
      const char* _M_grouping;
      size_t _M_grouping_size;
      bool _M_use_grouping;
      const _CharT* _M_truename;
      size_t _M_truename_size;
      const _CharT* _M_falsename;
      size_t _M_falsename_size;
      _CharT _M_decimal_point;
      _CharT _M_thousands_sep;





      _CharT _M_atoms_out[__num_base::_S_oend];





      _CharT _M_atoms_in[__num_base::_S_iend];

      bool _M_allocated;

      __numpunct_cache(size_t __refs = 0) : facet(__refs),
      _M_grouping(__null), _M_grouping_size(0), _M_use_grouping(false),
      _M_truename(__null), _M_truename_size(0), _M_falsename(__null),
      _M_falsename_size(0), _M_decimal_point(_CharT()),
      _M_thousands_sep(_CharT()), _M_allocated(false)
      { }

      ~__numpunct_cache();

      void
      _M_cache(const locale& __loc);

    private:
      __numpunct_cache&
      operator=(const __numpunct_cache&);

      explicit
      __numpunct_cache(const __numpunct_cache&);
    };

  template<typename _CharT>
    __numpunct_cache<_CharT>::~__numpunct_cache()
    {
      if (_M_allocated)
 {
   delete [] _M_grouping;
   delete [] _M_truename;
   delete [] _M_falsename;
 }
    }
# 1634 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 template<typename _CharT>
    class numpunct : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;

      typedef __numpunct_cache<_CharT> __cache_type;

    protected:
      __cache_type* _M_data;

    public:

      static locale::id id;






      explicit
      numpunct(size_t __refs = 0) : facet(__refs), _M_data(__null)
      { _M_initialize_numpunct(); }
# 1671 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 explicit
      numpunct(__cache_type* __cache, size_t __refs = 0)
      : facet(__refs), _M_data(__cache)
      { _M_initialize_numpunct(); }
# 1685 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 explicit
      numpunct(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_data(__null)
      { _M_initialize_numpunct(__cloc); }
# 1699 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 char_type
      decimal_point() const
      { return this->do_decimal_point(); }
# 1712 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 char_type
      thousands_sep() const
      { return this->do_thousands_sep(); }
# 1743 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 string
      grouping() const
      { return this->do_grouping(); }
# 1756 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 string_type
      truename() const
      { return this->do_truename(); }
# 1769 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 string_type
      falsename() const
      { return this->do_falsename(); }

    protected:

      virtual
      ~numpunct();
# 1786 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual char_type
      do_decimal_point() const
      { return _M_data->_M_decimal_point; }
# 1798 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual char_type
      do_thousands_sep() const
      { return _M_data->_M_thousands_sep; }
# 1811 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual string
      do_grouping() const
      { return _M_data->_M_grouping; }
# 1824 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual string_type
      do_truename() const
      { return _M_data->_M_truename; }
# 1837 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual string_type
      do_falsename() const
      { return _M_data->_M_falsename; }


      void
      _M_initialize_numpunct(__c_locale __cloc = __null);
    };

  template<typename _CharT>
    locale::id numpunct<_CharT>::id;

  template<>
    numpunct<char>::~numpunct();

  template<>
    void
    numpunct<char>::_M_initialize_numpunct(__c_locale __cloc);


  template<>
    numpunct<wchar_t>::~numpunct();

  template<>
    void
    numpunct<wchar_t>::_M_initialize_numpunct(__c_locale __cloc);



  template<typename _CharT>
    class numpunct_byname : public numpunct<_CharT>
    {
    public:
      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;

      explicit
      numpunct_byname(const char* __s, size_t __refs = 0)
      : numpunct<_CharT>(__refs)
      {
 if (__builtin_strcmp(__s, "C") != 0
     && __builtin_strcmp(__s, "POSIX") != 0)
   {
     __c_locale __tmp;
     this->_S_create_c_locale(__tmp, __s);
     this->_M_initialize_numpunct(__tmp);
     this->_S_destroy_c_locale(__tmp);
   }
      }

    protected:
      virtual
      ~numpunct_byname() { }
    };
# 1907 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 template<typename _CharT, typename _InIter>
    class num_get : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef _InIter iter_type;



      static locale::id id;
# 1928 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 explicit
      num_get(size_t __refs = 0) : facet(__refs) { }
# 1954 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, bool& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 1990 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned short& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned int& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }


      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned long long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 2049 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, float& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 2091 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, void*& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

    protected:

      virtual ~num_get() { }

      iter_type
      _M_extract_float(iter_type, iter_type, ios_base&, ios_base::iostate&,
         string&) const;

      template<typename _ValueT>
        iter_type
        _M_extract_int(iter_type, iter_type, ios_base&, ios_base::iostate&,
         _ValueT&) const;

      template<typename _CharT2>
      typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value, int>::__type
        _M_find(const _CharT2*, size_t __len, _CharT2 __c) const
        {
   int __ret = -1;
   if (__len <= 10)
     {
       if (__c >= _CharT2('0') && __c < _CharT2(_CharT2('0') + __len))
  __ret = __c - _CharT2('0');
     }
   else
     {
       if (__c >= _CharT2('0') && __c <= _CharT2('9'))
  __ret = __c - _CharT2('0');
       else if (__c >= _CharT2('a') && __c <= _CharT2('f'))
  __ret = 10 + (__c - _CharT2('a'));
       else if (__c >= _CharT2('A') && __c <= _CharT2('F'))
  __ret = 10 + (__c - _CharT2('A'));
     }
   return __ret;
 }

      template<typename _CharT2>
      typename __gnu_cxx::__enable_if<!__is_char<_CharT2>::__value,
          int>::__type
        _M_find(const _CharT2* __zero, size_t __len, _CharT2 __c) const
        {
   int __ret = -1;
   const char_type* __q = char_traits<_CharT2>::find(__zero, __len, __c);
   if (__q)
     {
       __ret = __q - __zero;
       if (__ret > 15)
  __ret -= 6;
     }
   return __ret;
 }
# 2162 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate&, bool&) const;

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned short& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned int& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }


      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, long long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned long long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }


      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      float&) const;

      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      double&) const;







      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      long double&) const;


      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      void*&) const;
# 2227 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 };

  template<typename _CharT, typename _InIter>
    locale::id num_get<_CharT, _InIter>::id;
# 2245 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 template<typename _CharT, typename _OutIter>
    class num_put : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef _OutIter iter_type;



      static locale::id id;
# 2266 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 explicit
      num_put(size_t __refs = 0) : facet(__refs) { }
# 2284 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, bool __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2326 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, long __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   unsigned long __v) const
      { return this->do_put(__s, __f, __fill, __v); }


      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, long long __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   unsigned long long __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2389 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, double __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   long double __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2414 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   const void* __v) const
      { return this->do_put(__s, __f, __fill, __v); }

    protected:
      template<typename _ValueT>
        iter_type
        _M_insert_float(iter_type, ios_base& __io, char_type __fill,
   char __mod, _ValueT __v) const;

      void
      _M_group_float(const char* __grouping, size_t __grouping_size,
       char_type __sep, const char_type* __p, char_type* __new,
       char_type* __cs, int& __len) const;

      template<typename _ValueT>
        iter_type
        _M_insert_int(iter_type, ios_base& __io, char_type __fill,
        _ValueT __v) const;

      void
      _M_group_int(const char* __grouping, size_t __grouping_size,
     char_type __sep, ios_base& __io, char_type* __new,
     char_type* __cs, int& __len) const;

      void
      _M_pad(char_type __fill, streamsize __w, ios_base& __io,
      char_type* __new, const char_type* __cs, int& __len) const;


      virtual
      ~num_put() { };
# 2462 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, bool __v) const;

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill, long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      unsigned long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }


      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      long long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      unsigned long long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }


      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, double __v) const;






      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, long double __v) const;


      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, const void* __v) const;







    };

  template <typename _CharT, typename _OutIter>
    locale::id num_put<_CharT, _OutIter>::id;
# 2520 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
 template<typename _CharT>
    inline bool
    isspace(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::space, __c); }


  template<typename _CharT>
    inline bool
    isprint(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::print, __c); }


  template<typename _CharT>
    inline bool
    iscntrl(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::cntrl, __c); }


  template<typename _CharT>
    inline bool
    isupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::upper, __c); }


  template<typename _CharT>
    inline bool
    islower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::lower, __c); }


  template<typename _CharT>
    inline bool
    isalpha(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alpha, __c); }


  template<typename _CharT>
    inline bool
    isdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::digit, __c); }


  template<typename _CharT>
    inline bool
    ispunct(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::punct, __c); }


  template<typename _CharT>
    inline bool
    isxdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::xdigit, __c); }


  template<typename _CharT>
    inline bool
    isalnum(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alnum, __c); }


  template<typename _CharT>
    inline bool
    isgraph(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::graph, __c); }


  template<typename _CharT>
    inline _CharT
    toupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).toupper(__c); }


  template<typename _CharT>
    inline _CharT
    tolower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).tolower(__c); }

}




# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 1 3
# 35 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
# 35 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3

namespace std {



  template<typename _Facet>
    struct __use_cache
    {
      const _Facet*
      operator() (const locale& __loc) const;
    };


  template<typename _CharT>
    struct __use_cache<__numpunct_cache<_CharT> >
    {
      const __numpunct_cache<_CharT>*
      operator() (const locale& __loc) const
      {
 const size_t __i = numpunct<_CharT>::id._M_id();
 const locale::facet** __caches = __loc._M_impl->_M_caches;
 if (!__caches[__i])
   {
     __numpunct_cache<_CharT>* __tmp = __null;
     if (true)
       {
  __tmp = new __numpunct_cache<_CharT>;
  __tmp->_M_cache(__loc);
       }
     if (false)
       {
  delete __tmp;
                         ;
       }
     __loc._M_impl->_M_install_cache(__tmp, __i);
   }
 return static_cast<const __numpunct_cache<_CharT>*>(__caches[__i]);
      }
    };

  template<typename _CharT>
    void
    __numpunct_cache<_CharT>::_M_cache(const locale& __loc)
    {
      _M_allocated = true;

      const numpunct<_CharT>& __np = use_facet<numpunct<_CharT> >(__loc);

      char* __grouping = 0;
      _CharT* __truename = 0;
      _CharT* __falsename = 0;
      if (true)
 {
   _M_grouping_size = __np.grouping().size();
   __grouping = new char[_M_grouping_size];
   __np.grouping().copy(__grouping, _M_grouping_size);
   _M_grouping = __grouping;
   _M_use_grouping = (_M_grouping_size
        && static_cast<signed char>(_M_grouping[0]) > 0
        && (_M_grouping[0]
     != __gnu_cxx::__numeric_traits<char>::__max));

   _M_truename_size = __np.truename().size();
   __truename = new _CharT[_M_truename_size];
   __np.truename().copy(__truename, _M_truename_size);
   _M_truename = __truename;

   _M_falsename_size = __np.falsename().size();
   __falsename = new _CharT[_M_falsename_size];
   __np.falsename().copy(__falsename, _M_falsename_size);
   _M_falsename = __falsename;

   _M_decimal_point = __np.decimal_point();
   _M_thousands_sep = __np.thousands_sep();

   const ctype<_CharT>& __ct = use_facet<ctype<_CharT> >(__loc);
   __ct.widen(__num_base::_S_atoms_out,
       __num_base::_S_atoms_out
       + __num_base::_S_oend, _M_atoms_out);
   __ct.widen(__num_base::_S_atoms_in,
       __num_base::_S_atoms_in
       + __num_base::_S_iend, _M_atoms_in);
 }
      if (false)
 {
   delete [] __grouping;
   delete [] __truename;
   delete [] __falsename;
                          ;
 }
    }
# 135 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
 __attribute__ ((__pure__)) bool
  __verify_grouping(const char* __grouping, size_t __grouping_size,
      const string& __grouping_tmp) throw ();



  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    _M_extract_float(_InIter __beg, _InIter __end, ios_base& __io,
       ios_base::iostate& __err, string& __xtrc) const
    {
      typedef char_traits<_CharT> __traits_type;
      typedef __numpunct_cache<_CharT> __cache_type;
      __use_cache<__cache_type> __uc;
      const locale& __loc = __io._M_getloc();
      const __cache_type* __lc = __uc(__loc);
      const _CharT* __lit = __lc->_M_atoms_in;
      char_type __c = char_type();


      bool __testeof = __beg == __end;


      if (!__testeof)
 {
   __c = *__beg;
   const bool __plus = __c == __lit[__num_base::_S_iplus];
   if ((__plus || __c == __lit[__num_base::_S_iminus])
       && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       && !(__c == __lc->_M_decimal_point))
     {
       __xtrc += __plus ? '+' : '-';
       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
 }


      bool __found_mantissa = false;
      int __sep_pos = 0;
      while (!__testeof)
 {
   if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       || __c == __lc->_M_decimal_point)
     break;
   else if (__c == __lit[__num_base::_S_izero])
     {
       if (!__found_mantissa)
  {
    __xtrc += '0';
    __found_mantissa = true;
  }
       ++__sep_pos;

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
   else
     break;
 }


      bool __found_dec = false;
      bool __found_sci = false;
      string __found_grouping;
      if (__lc->_M_use_grouping)
 __found_grouping.reserve(32);
      const char_type* __lit_zero = __lit + __num_base::_S_izero;

      if (!__lc->_M_allocated)

 while (!__testeof)
   {
     const int __digit = _M_find(__lit_zero, 10, __c);
     if (__digit != -1)
       {
  __xtrc += '0' + __digit;
  __found_mantissa = true;
       }
     else if (__c == __lc->_M_decimal_point
       && !__found_dec && !__found_sci)
       {
  __xtrc += '.';
  __found_dec = true;
       }
     else if ((__c == __lit[__num_base::_S_ie]
        || __c == __lit[__num_base::_S_iE])
       && !__found_sci && __found_mantissa)
       {

  __xtrc += 'e';
  __found_sci = true;


  if (++__beg != __end)
    {
      __c = *__beg;
      const bool __plus = __c == __lit[__num_base::_S_iplus];
      if (__plus || __c == __lit[__num_base::_S_iminus])
        __xtrc += __plus ? '+' : '-';
      else
        continue;
    }
  else
    {
      __testeof = true;
      break;
    }
       }
     else
       break;

     if (++__beg != __end)
       __c = *__beg;
     else
       __testeof = true;
   }
      else
 while (!__testeof)
   {


     if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       {
  if (!__found_dec && !__found_sci)
    {


      if (__sep_pos)
        {
   __found_grouping += static_cast<char>(__sep_pos);
   __sep_pos = 0;
        }
      else
        {


   __xtrc.clear();
   break;
        }
    }
  else
    break;
       }
     else if (__c == __lc->_M_decimal_point)
       {
  if (!__found_dec && !__found_sci)
    {



      if (__found_grouping.size())
        __found_grouping += static_cast<char>(__sep_pos);
      __xtrc += '.';
      __found_dec = true;
    }
  else
    break;
       }
     else
       {
  const char_type* __q =
    __traits_type::find(__lit_zero, 10, __c);
  if (__q)
    {
      __xtrc += '0' + (__q - __lit_zero);
      __found_mantissa = true;
      ++__sep_pos;
    }
  else if ((__c == __lit[__num_base::_S_ie]
     || __c == __lit[__num_base::_S_iE])
    && !__found_sci && __found_mantissa)
    {

      if (__found_grouping.size() && !__found_dec)
        __found_grouping += static_cast<char>(__sep_pos);
      __xtrc += 'e';
      __found_sci = true;


      if (++__beg != __end)
        {
   __c = *__beg;
   const bool __plus = __c == __lit[__num_base::_S_iplus];
   if ((__plus || __c == __lit[__num_base::_S_iminus])
       && !(__lc->_M_use_grouping
     && __c == __lc->_M_thousands_sep)
       && !(__c == __lc->_M_decimal_point))
        __xtrc += __plus ? '+' : '-';
   else
     continue;
        }
      else
        {
   __testeof = true;
   break;
        }
    }
  else
    break;
       }

     if (++__beg != __end)
       __c = *__beg;
     else
       __testeof = true;
   }



      if (__found_grouping.size())
        {

   if (!__found_dec && !__found_sci)
     __found_grouping += static_cast<char>(__sep_pos);

          if (!std::__verify_grouping(__lc->_M_grouping,
          __lc->_M_grouping_size,
          __found_grouping))
     __err = ios_base::failbit;
        }

      return __beg;
    }

  template<typename _CharT, typename _InIter>
    template<typename _ValueT>
      _InIter
      num_get<_CharT, _InIter>::
      _M_extract_int(_InIter __beg, _InIter __end, ios_base& __io,
       ios_base::iostate& __err, _ValueT& __v) const
      {
        typedef char_traits<_CharT> __traits_type;
 using __gnu_cxx::__add_unsigned;
 typedef typename __add_unsigned<_ValueT>::__type __unsigned_type;
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);
 const _CharT* __lit = __lc->_M_atoms_in;
 char_type __c = char_type();


 const ios_base::fmtflags __basefield = __io.flags()
                                        & ios_base::basefield;
 const bool __oct = __basefield == ios_base::oct;
 int __base = __oct ? 8 : (__basefield == ios_base::hex ? 16 : 10);


 bool __testeof = __beg == __end;


 bool __negative = false;
 if (!__testeof)
   {
     __c = *__beg;
     __negative = __c == __lit[__num_base::_S_iminus];
     if ((__negative || __c == __lit[__num_base::_S_iplus])
  && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  && !(__c == __lc->_M_decimal_point))
       {
  if (++__beg != __end)
    __c = *__beg;
  else
    __testeof = true;
       }
   }



 bool __found_zero = false;
 int __sep_pos = 0;
 while (!__testeof)
   {
     if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  || __c == __lc->_M_decimal_point)
       break;
     else if (__c == __lit[__num_base::_S_izero]
       && (!__found_zero || __base == 10))
       {
  __found_zero = true;
  ++__sep_pos;
  if (__basefield == 0)
    __base = 8;
  if (__base == 8)
    __sep_pos = 0;
       }
     else if (__found_zero
       && (__c == __lit[__num_base::_S_ix]
    || __c == __lit[__num_base::_S_iX]))
       {
  if (__basefield == 0)
    __base = 16;
  if (__base == 16)
    {
      __found_zero = false;
      __sep_pos = 0;
    }
  else
    break;
       }
     else
       break;

     if (++__beg != __end)
       {
  __c = *__beg;
  if (!__found_zero)
    break;
       }
     else
       __testeof = true;
   }



 const size_t __len = (__base == 16 ? __num_base::_S_iend
         - __num_base::_S_izero : __base);


 string __found_grouping;
 if (__lc->_M_use_grouping)
   __found_grouping.reserve(32);
 bool __testfail = false;
 bool __testoverflow = false;
 const __unsigned_type __max =
   (__negative && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
   ? -__gnu_cxx::__numeric_traits<_ValueT>::__min
   : __gnu_cxx::__numeric_traits<_ValueT>::__max;
 const __unsigned_type __smax = __max / __base;
 __unsigned_type __result = 0;
 int __digit = 0;
 const char_type* __lit_zero = __lit + __num_base::_S_izero;

 if (!__lc->_M_allocated)

   while (!__testeof)
     {
       __digit = _M_find(__lit_zero, __len, __c);
       if (__digit == -1)
  break;

       if (__result > __smax)
  __testoverflow = true;
       else
  {
    __result *= __base;
    __testoverflow |= __result > __max - __digit;
    __result += __digit;
    ++__sep_pos;
  }

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
 else
   while (!__testeof)
     {


       if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  {


    if (__sep_pos)
      {
        __found_grouping += static_cast<char>(__sep_pos);
        __sep_pos = 0;
      }
    else
      {
        __testfail = true;
        break;
      }
  }
       else if (__c == __lc->_M_decimal_point)
  break;
       else
  {
    const char_type* __q =
      __traits_type::find(__lit_zero, __len, __c);
    if (!__q)
      break;

    __digit = __q - __lit_zero;
    if (__digit > 15)
      __digit -= 6;
    if (__result > __smax)
      __testoverflow = true;
    else
      {
        __result *= __base;
        __testoverflow |= __result > __max - __digit;
        __result += __digit;
        ++__sep_pos;
      }
  }

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }



 if (__found_grouping.size())
   {

     __found_grouping += static_cast<char>(__sep_pos);

     if (!std::__verify_grouping(__lc->_M_grouping,
     __lc->_M_grouping_size,
     __found_grouping))
       __err = ios_base::failbit;
   }



 if ((!__sep_pos && !__found_zero && !__found_grouping.size())
     || __testfail)
   {
     __v = 0;
     __err = ios_base::failbit;
   }
 else if (__testoverflow)
   {
     if (__negative
  && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
       __v = __gnu_cxx::__numeric_traits<_ValueT>::__min;
     else
       __v = __gnu_cxx::__numeric_traits<_ValueT>::__max;
     __err = ios_base::failbit;
   }
 else
   __v = __negative ? -__result : __result;

 if (__testeof)
   __err |= ios_base::eofbit;
 return __beg;
      }



  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, bool& __v) const
    {
      if (!(__io.flags() & ios_base::boolalpha))
        {



   long __l = -1;
          __beg = _M_extract_int(__beg, __end, __io, __err, __l);
   if (__l == 0 || __l == 1)
     __v = bool(__l);
   else
     {


       __v = true;
       __err = ios_base::failbit;
       if (__beg == __end)
  __err |= ios_base::eofbit;
     }
        }
      else
        {

   typedef __numpunct_cache<_CharT> __cache_type;
   __use_cache<__cache_type> __uc;
   const locale& __loc = __io._M_getloc();
   const __cache_type* __lc = __uc(__loc);

   bool __testf = true;
   bool __testt = true;
   bool __donef = __lc->_M_falsename_size == 0;
   bool __donet = __lc->_M_truename_size == 0;
   bool __testeof = false;
   size_t __n = 0;
   while (!__donef || !__donet)
     {
       if (__beg == __end)
  {
    __testeof = true;
    break;
  }

       const char_type __c = *__beg;

       if (!__donef)
  __testf = __c == __lc->_M_falsename[__n];

       if (!__testf && __donet)
  break;

       if (!__donet)
  __testt = __c == __lc->_M_truename[__n];

       if (!__testt && __donef)
  break;

       if (!__testt && !__testf)
  break;

       ++__n;
       ++__beg;

       __donef = !__testf || __n >= __lc->_M_falsename_size;
       __donet = !__testt || __n >= __lc->_M_truename_size;
     }
   if (__testf && __n == __lc->_M_falsename_size && __n)
     {
       __v = false;
       if (__testt && __n == __lc->_M_truename_size)
  __err = ios_base::failbit;
       else
  __err = __testeof ? ios_base::eofbit : ios_base::goodbit;
     }
   else if (__testt && __n == __lc->_M_truename_size && __n)
     {
       __v = true;
       __err = __testeof ? ios_base::eofbit : ios_base::goodbit;
     }
   else
     {


       __v = false;
       __err = ios_base::failbit;
       if (__testeof)
  __err |= ios_base::eofbit;
     }
 }
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
    ios_base::iostate& __err, float& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }
# 729 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
 template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, long double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, void*& __v) const
    {

      typedef ios_base::fmtflags fmtflags;
      const fmtflags __fmt = __io.flags();
      __io.flags((__fmt & ~ios_base::basefield) | ios_base::hex);

      typedef __gnu_cxx::__conditional_type<(sizeof(void*)
          <= sizeof(unsigned long)),
 unsigned long, unsigned long long>::__type _UIntPtrType;

      _UIntPtrType __ul;
      __beg = _M_extract_int(__beg, __end, __io, __err, __ul);


      __io.flags(__fmt);

      __v = reinterpret_cast<void*>(__ul);
      return __beg;
    }



  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_pad(_CharT __fill, streamsize __w, ios_base& __io,
    _CharT* __new, const _CharT* __cs, int& __len) const
    {


      __pad<_CharT, char_traits<_CharT> >::_S_pad(__io, __fill, __new,
        __cs, __w, __len);
      __len = static_cast<int>(__w);
    }



  template<typename _CharT, typename _ValueT>
    int
    __int_to_char(_CharT* __bufend, _ValueT __v, const _CharT* __lit,
    ios_base::fmtflags __flags, bool __dec)
    {
      _CharT* __buf = __bufend;
      if (__builtin_expect(__dec, true))
 {

   do
     {
       *--__buf = __lit[(__v % 10) + __num_base::_S_odigits];
       __v /= 10;
     }
   while (__v != 0);
 }
      else if ((__flags & ios_base::basefield) == ios_base::oct)
 {

   do
     {
       *--__buf = __lit[(__v & 0x7) + __num_base::_S_odigits];
       __v >>= 3;
     }
   while (__v != 0);
 }
      else
 {

   const bool __uppercase = __flags & ios_base::uppercase;
   const int __case_offset = __uppercase ? __num_base::_S_oudigits
                                         : __num_base::_S_odigits;
   do
     {
       *--__buf = __lit[(__v & 0xf) + __case_offset];
       __v >>= 4;
     }
   while (__v != 0);
 }
      return __bufend - __buf;
    }



  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_int(const char* __grouping, size_t __grouping_size, _CharT __sep,
   ios_base&, _CharT* __new, _CharT* __cs, int& __len) const
    {
      _CharT* __p = std::__add_grouping(__new, __sep, __grouping,
     __grouping_size, __cs, __cs + __len);
      __len = __p - __new;
    }

  template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_int(_OutIter __s, ios_base& __io, _CharT __fill,
      _ValueT __v) const
      {
 using __gnu_cxx::__add_unsigned;
 typedef typename __add_unsigned<_ValueT>::__type __unsigned_type;
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);
 const _CharT* __lit = __lc->_M_atoms_out;
 const ios_base::fmtflags __flags = __io.flags();


 const int __ilen = 5 * sizeof(_ValueT);
 _CharT* __cs = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
            * __ilen));



 const ios_base::fmtflags __basefield = __flags & ios_base::basefield;
 const bool __dec = (__basefield != ios_base::oct
       && __basefield != ios_base::hex);
 const __unsigned_type __u = ((__v > 0 || !__dec)
         ? __unsigned_type(__v)
         : -__unsigned_type(__v));
  int __len = __int_to_char(__cs + __ilen, __u, __lit, __flags, __dec);
 __cs += __ilen - __len;


 if (__lc->_M_use_grouping)
   {


     _CharT* __cs2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * (__len + 1)
          * 2));
     _M_group_int(__lc->_M_grouping, __lc->_M_grouping_size,
    __lc->_M_thousands_sep, __io, __cs2 + 2, __cs, __len);
     __cs = __cs2 + 2;
   }


 if (__builtin_expect(__dec, true))
   {

     if (__v >= 0)
       {
  if (bool(__flags & ios_base::showpos)
      && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
    *--__cs = __lit[__num_base::_S_oplus], ++__len;
       }
     else
       *--__cs = __lit[__num_base::_S_ominus], ++__len;
   }
 else if (bool(__flags & ios_base::showbase) && __v)
   {
     if (__basefield == ios_base::oct)
       *--__cs = __lit[__num_base::_S_odigits], ++__len;
     else
       {

  const bool __uppercase = __flags & ios_base::uppercase;
  *--__cs = __lit[__num_base::_S_ox + __uppercase];

  *--__cs = __lit[__num_base::_S_odigits];
  __len += 2;
       }
   }


 const streamsize __w = __io.width();
 if (__w > static_cast<streamsize>(__len))
   {
     _CharT* __cs3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __w));
     _M_pad(__fill, __w, __io, __cs3, __cs, __len);
     __cs = __cs3;
   }
 __io.width(0);



 return std::__write(__s, __cs, __len);
      }

  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_float(const char* __grouping, size_t __grouping_size,
     _CharT __sep, const _CharT* __p, _CharT* __new,
     _CharT* __cs, int& __len) const
    {



      const int __declen = __p ? __p - __cs : __len;
      _CharT* __p2 = std::__add_grouping(__new, __sep, __grouping,
      __grouping_size,
      __cs, __cs + __declen);


      int __newlen = __p2 - __new;
      if (__p)
 {
   char_traits<_CharT>::copy(__p2, __p, __len - __declen);
   __newlen += __len - __declen;
 }
      __len = __newlen;
    }
# 965 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
 template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_float(_OutIter __s, ios_base& __io, _CharT __fill, char __mod,
         _ValueT __v) const
      {
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);


 const streamsize __prec = __io.precision() < 0 ? 6 : __io.precision();

 const int __max_digits =
   __gnu_cxx::__numeric_traits<_ValueT>::__digits10;


 int __len;

 char __fbuf[16];
 __num_base::_S_format_float(__io, __fbuf, __mod);




 int __cs_size = __max_digits * 3;
 char* __cs = static_cast<char*>(__builtin_alloca(__cs_size));
 __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
          __fbuf, __prec, __v);


 if (__len >= __cs_size)
   {
     __cs_size = __len + 1;
     __cs = static_cast<char*>(__builtin_alloca(__cs_size));
     __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
       __fbuf, __prec, __v);
   }
# 1026 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
 const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

 _CharT* __ws = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
            * __len));
 __ctype.widen(__cs, __cs + __len, __ws);


 _CharT* __wp = 0;
 const char* __p = char_traits<char>::find(__cs, __len, '.');
 if (__p)
   {
     __wp = __ws + (__p - __cs);
     *__wp = __lc->_M_decimal_point;
   }




 if (__lc->_M_use_grouping
     && (__wp || __len < 3 || (__cs[1] <= '9' && __cs[2] <= '9'
          && __cs[1] >= '0' && __cs[2] >= '0')))
   {


     _CharT* __ws2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __len * 2));

     streamsize __off = 0;
     if (__cs[0] == '-' || __cs[0] == '+')
       {
  __off = 1;
  __ws2[0] = __ws[0];
  __len -= 1;
       }

     _M_group_float(__lc->_M_grouping, __lc->_M_grouping_size,
      __lc->_M_thousands_sep, __wp, __ws2 + __off,
      __ws + __off, __len);
     __len += __off;

     __ws = __ws2;
   }


 const streamsize __w = __io.width();
 if (__w > static_cast<streamsize>(__len))
   {
     _CharT* __ws3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __w));
     _M_pad(__fill, __w, __io, __ws3, __ws, __len);
     __ws = __ws3;
   }
 __io.width(0);



 return std::__write(__s, __ws, __len);
      }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, bool __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      if ((__flags & ios_base::boolalpha) == 0)
        {
          const long __l = __v;
          __s = _M_insert_int(__s, __io, __fill, __l);
        }
      else
        {
   typedef __numpunct_cache<_CharT> __cache_type;
   __use_cache<__cache_type> __uc;
   const locale& __loc = __io._M_getloc();
   const __cache_type* __lc = __uc(__loc);

   const _CharT* __name = __v ? __lc->_M_truename
                              : __lc->_M_falsename;
   int __len = __v ? __lc->_M_truename_size
                   : __lc->_M_falsename_size;

   const streamsize __w = __io.width();
   if (__w > static_cast<streamsize>(__len))
     {
       const streamsize __plen = __w - __len;
       _CharT* __ps
  = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
       * __plen));

       char_traits<_CharT>::assign(__ps, __plen, __fill);
       __io.width(0);

       if ((__flags & ios_base::adjustfield) == ios_base::left)
  {
    __s = std::__write(__s, __name, __len);
    __s = std::__write(__s, __ps, __plen);
  }
       else
  {
    __s = std::__write(__s, __ps, __plen);
    __s = std::__write(__s, __name, __len);
  }
       return __s;
     }
   __io.width(0);
   __s = std::__write(__s, __name, __len);
 }
      return __s;
    }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, double __v) const
    { return _M_insert_float(__s, __io, __fill, char(), __v); }
# 1151 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
 template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
    long double __v) const
    { return _M_insert_float(__s, __io, __fill, 'L', __v); }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
           const void* __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      const ios_base::fmtflags __fmt = ~(ios_base::basefield
      | ios_base::uppercase);
      __io.flags((__flags & __fmt) | (ios_base::hex | ios_base::showbase));

      typedef __gnu_cxx::__conditional_type<(sizeof(const void*)
          <= sizeof(unsigned long)),
 unsigned long, unsigned long long>::__type _UIntPtrType;

      __s = _M_insert_int(__s, __io, __fill,
     reinterpret_cast<_UIntPtrType>(__v));
      __io.flags(__flags);
      return __s;
    }
# 1188 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
 template<typename _CharT, typename _Traits>
    void
    __pad<_CharT, _Traits>::_S_pad(ios_base& __io, _CharT __fill,
       _CharT* __news, const _CharT* __olds,
       streamsize __newlen, streamsize __oldlen)
    {
      const size_t __plen = static_cast<size_t>(__newlen - __oldlen);
      const ios_base::fmtflags __adjust = __io.flags() & ios_base::adjustfield;


      if (__adjust == ios_base::left)
 {
   _Traits::copy(__news, __olds, __oldlen);
   _Traits::assign(__news + __oldlen, __plen, __fill);
   return;
 }

      size_t __mod = 0;
      if (__adjust == ios_base::internal)
 {



          const locale& __loc = __io._M_getloc();
   const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

   if (__ctype.widen('-') == __olds[0]
       || __ctype.widen('+') == __olds[0])
     {
       __news[0] = __olds[0];
       __mod = 1;
       ++__news;
     }
   else if (__ctype.widen('0') == __olds[0]
     && __oldlen > 1
     && (__ctype.widen('x') == __olds[1]
         || __ctype.widen('X') == __olds[1]))
     {
       __news[0] = __olds[0];
       __news[1] = __olds[1];
       __mod = 2;
       __news += 2;
     }

 }
      _Traits::assign(__news, __plen, __fill);
      _Traits::copy(__news + __plen, __olds + __mod, __oldlen - __mod);
    }

  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
     const char* __gbeg, size_t __gsize,
     const _CharT* __first, const _CharT* __last)
    {
      size_t __idx = 0;
      size_t __ctr = 0;

      while (__last - __first > __gbeg[__idx]
      && static_cast<signed char>(__gbeg[__idx]) > 0
      && __gbeg[__idx] != __gnu_cxx::__numeric_traits<char>::__max)
 {
   __last -= __gbeg[__idx];
   __idx < __gsize - 1 ? ++__idx : ++__ctr;
 }

      while (__first != __last)
 *__s++ = *__first++;

      while (__ctr--)
 {
   *__s++ = __sep;
   for (char __i = __gbeg[__idx]; __i > 0; --__i)
     *__s++ = *__first++;
 }

      while (__idx--)
 {
   *__s++ = __sep;
   for (char __i = __gbeg[__idx]; __i > 0; --__i)
     *__s++ = *__first++;
 }

      return __s;
    }





  extern template class numpunct<char>;
  extern template class numpunct_byname<char>;
  extern template class num_get<char>;
  extern template class num_put<char>;
  extern template class ctype_byname<char>;

  extern template
    const ctype<char>&
    use_facet<ctype<char> >(const locale&);

  extern template
    const numpunct<char>&
    use_facet<numpunct<char> >(const locale&);

  extern template
    const num_put<char>&
    use_facet<num_put<char> >(const locale&);

  extern template
    const num_get<char>&
    use_facet<num_get<char> >(const locale&);

  extern template
    bool
    has_facet<ctype<char> >(const locale&);

  extern template
    bool
    has_facet<numpunct<char> >(const locale&);

  extern template
    bool
    has_facet<num_put<char> >(const locale&);

  extern template
    bool
    has_facet<num_get<char> >(const locale&);


  extern template class numpunct<wchar_t>;
  extern template class numpunct_byname<wchar_t>;
  extern template class num_get<wchar_t>;
  extern template class num_put<wchar_t>;
  extern template class ctype_byname<wchar_t>;

  extern template
    const ctype<wchar_t>&
    use_facet<ctype<wchar_t> >(const locale&);

  extern template
    const numpunct<wchar_t>&
    use_facet<numpunct<wchar_t> >(const locale&);

  extern template
    const num_put<wchar_t>&
    use_facet<num_put<wchar_t> >(const locale&);

  extern template
    const num_get<wchar_t>&
    use_facet<num_get<wchar_t> >(const locale&);

 extern template
    bool
    has_facet<ctype<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<numpunct<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<num_put<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<num_get<wchar_t> >(const locale&);



}
# 2601 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3
# 39 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 2 3


namespace std {

  template<typename _Facet>
    inline const _Facet&
    __check_facet(const _Facet* __f)
    {
      if (!__f)
 __throw_bad_cast();
      return *__f;
    }
# 60 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
 template<typename _CharT, typename _Traits>
    class basic_ios : public ios_base
    {
    public:






      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;






      typedef ctype<_CharT> __ctype_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
           __num_put_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
           __num_get_type;



    protected:
      basic_ostream<_CharT, _Traits>* _M_tie;
      mutable char_type _M_fill;
      mutable bool _M_fill_init;
      basic_streambuf<_CharT, _Traits>* _M_streambuf;


      const __ctype_type* _M_ctype;

      const __num_put_type* _M_num_put;

      const __num_get_type* _M_num_get;

    public:







      operator void*() const
      { return this->fail() ? 0 : const_cast<basic_ios*>(this); }

      bool
      operator!() const
      { return this->fail(); }
# 125 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
 iostate
      rdstate() const
      { return _M_streambuf_state; }
# 136 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
 void
      clear(iostate __state = goodbit);







      void
      setstate(iostate __state)
      { this->clear(this->rdstate() | __state); }




      void
      _M_setstate(iostate __state)
      {


 _M_streambuf_state |= __state;
 if (this->exceptions() & __state)
                          ;
      }







      bool
      good() const
      { return this->rdstate() == 0; }







      bool
      eof() const
      { return (this->rdstate() & eofbit) != 0; }
# 189 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
 bool
      fail() const
      { return (this->rdstate() & (badbit | failbit)) != 0; }







      bool
      bad() const
      { return (this->rdstate() & badbit) != 0; }
# 210 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
 iostate
      exceptions() const
      { return _M_exception; }
# 245 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
 void
      exceptions(iostate __except)
      {
        _M_exception = __except;
        this->clear(_M_streambuf_state);
      }







      explicit
      basic_ios(basic_streambuf<_CharT, _Traits>* __sb)
      : ios_base(), _M_tie(0), _M_fill(), _M_fill_init(false), _M_streambuf(0),
 _M_ctype(0), _M_num_put(0), _M_num_get(0)
      { this->init(__sb); }







      virtual
      ~basic_ios() { }
# 283 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
 basic_ostream<_CharT, _Traits>*
      tie() const
      { return _M_tie; }
# 295 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
 basic_ostream<_CharT, _Traits>*
      tie(basic_ostream<_CharT, _Traits>* __tiestr)
      {
        basic_ostream<_CharT, _Traits>* __old = _M_tie;
        _M_tie = __tiestr;
        return __old;
      }







      basic_streambuf<_CharT, _Traits>*
      rdbuf() const
      { return _M_streambuf; }
# 335 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
 basic_streambuf<_CharT, _Traits>*
      rdbuf(basic_streambuf<_CharT, _Traits>* __sb);
# 349 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
 basic_ios&
      copyfmt(const basic_ios& __rhs);







      char_type
      fill() const
      {
 if (!_M_fill_init)
   {
     _M_fill = this->widen(' ');
     _M_fill_init = true;
   }
 return _M_fill;
      }
# 378 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
 char_type
      fill(char_type __ch)
      {
 char_type __old = this->fill();
 _M_fill = __ch;
 return __old;
      }
# 398 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
 locale
      imbue(const locale& __loc);
# 418 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
 char
      narrow(char_type __c, char __dfault) const
      { return __check_facet(_M_ctype).narrow(__c, __dfault); }
# 437 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
 char_type
      widen(char __c) const
      { return __check_facet(_M_ctype).widen(__c); }

    protected:







      basic_ios()
      : ios_base(), _M_tie(0), _M_fill(char_type()), _M_fill_init(false),
 _M_streambuf(0), _M_ctype(0), _M_num_put(0), _M_num_get(0)
      { }







      void
      init(basic_streambuf<_CharT, _Traits>* __sb);

      void
      _M_cache_locale(const locale& __loc);
    };

}




# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.tcc" 1 3
# 34 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.tcc" 3
# 34 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.tcc" 3

namespace std {

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::clear(iostate __state)
    {
      if (this->rdbuf())
 _M_streambuf_state = __state;
      else
   _M_streambuf_state = __state | badbit;
      if (this->exceptions() & this->rdstate())
 __throw_ios_failure(("basic_ios::clear"));
    }

  template<typename _CharT, typename _Traits>
    basic_streambuf<_CharT, _Traits>*
    basic_ios<_CharT, _Traits>::rdbuf(basic_streambuf<_CharT, _Traits>* __sb)
    {
      basic_streambuf<_CharT, _Traits>* __old = _M_streambuf;
      _M_streambuf = __sb;
      this->clear();
      return __old;
    }

  template<typename _CharT, typename _Traits>
    basic_ios<_CharT, _Traits>&
    basic_ios<_CharT, _Traits>::copyfmt(const basic_ios& __rhs)
    {


      if (this != &__rhs)
 {




   _Words* __words = (__rhs._M_word_size <= _S_local_word_size) ?
                      _M_local_word : new _Words[__rhs._M_word_size];


   _Callback_list* __cb = __rhs._M_callbacks;
   if (__cb)
     __cb->_M_add_reference();
   _M_call_callbacks(erase_event);
   if (_M_word != _M_local_word)
     {
       delete [] _M_word;
       _M_word = 0;
     }
   _M_dispose_callbacks();


   _M_callbacks = __cb;
   for (int __i = 0; __i < __rhs._M_word_size; ++__i)
     __words[__i] = __rhs._M_word[__i];
   _M_word = __words;
   _M_word_size = __rhs._M_word_size;

   this->flags(__rhs.flags());
   this->width(__rhs.width());
   this->precision(__rhs.precision());
   this->tie(__rhs.tie());
   this->fill(__rhs.fill());
   _M_ios_locale = __rhs.getloc();
   _M_cache_locale(_M_ios_locale);

   _M_call_callbacks(copyfmt_event);


   this->exceptions(__rhs.exceptions());
 }
      return *this;
    }


  template<typename _CharT, typename _Traits>
    locale
    basic_ios<_CharT, _Traits>::imbue(const locale& __loc)
    {
      locale __old(this->getloc());
      ios_base::imbue(__loc);
      _M_cache_locale(__loc);
      if (this->rdbuf() != 0)
 this->rdbuf()->pubimbue(__loc);
      return __old;
    }

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::init(basic_streambuf<_CharT, _Traits>* __sb)
    {

      ios_base::_M_init();


      _M_cache_locale(_M_ios_locale);
# 144 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.tcc" 3
 _M_fill = _CharT();
      _M_fill_init = false;

      _M_tie = 0;
      _M_exception = goodbit;
      _M_streambuf = __sb;
      _M_streambuf_state = __sb ? goodbit : badbit;
    }

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::_M_cache_locale(const locale& __loc)
    {
      if (__builtin_expect(has_facet<__ctype_type>(__loc), true))
 _M_ctype = &use_facet<__ctype_type>(__loc);
      else
 _M_ctype = 0;

      if (__builtin_expect(has_facet<__num_put_type>(__loc), true))
 _M_num_put = &use_facet<__num_put_type>(__loc);
      else
 _M_num_put = 0;

      if (__builtin_expect(has_facet<__num_get_type>(__loc), true))
 _M_num_get = &use_facet<__num_get_type>(__loc);
      else
 _M_num_get = 0;
    }





  extern template class basic_ios<char>;


  extern template class basic_ios<wchar_t>;



}
# 471 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 2 3
# 45 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 40 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 2 3


namespace std {
# 53 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
 template<typename _CharT, typename _Traits>
    class basic_ostream : virtual public basic_ios<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_ios<_CharT, _Traits> __ios_type;
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
             __num_put_type;
      typedef ctype<_CharT> __ctype_type;
# 80 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
 explicit
      basic_ostream(__streambuf_type* __sb)
      { this->init(__sb); }






      virtual
      ~basic_ostream() { }


      class sentry;
      friend class sentry;
# 106 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
 __ostream_type&
      operator<<(__ostream_type& (*__pf)(__ostream_type&))
      {



 return __pf(*this);
      }

      __ostream_type&
      operator<<(__ios_type& (*__pf)(__ios_type&))
      {



 __pf(*this);
 return *this;
      }

      __ostream_type&
      operator<<(ios_base& (*__pf) (ios_base&))
      {



 __pf(*this);
 return *this;
      }
# 163 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
 __ostream_type&
      operator<<(long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(unsigned long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(bool __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(short __n);

      __ostream_type&
      operator<<(unsigned short __n)
      {


 return _M_insert(static_cast<unsigned long>(__n));
      }

      __ostream_type&
      operator<<(int __n);

      __ostream_type&
      operator<<(unsigned int __n)
      {


 return _M_insert(static_cast<unsigned long>(__n));
      }


      __ostream_type&
      operator<<(long long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(unsigned long long __n)
      { return _M_insert(__n); }


      __ostream_type&
      operator<<(double __f)
      { return _M_insert(__f); }

      __ostream_type&
      operator<<(float __f)
      {


 return _M_insert(static_cast<double>(__f));
      }

      __ostream_type&
      operator<<(long double __f)
      { return _M_insert(__f); }

      __ostream_type&
      operator<<(const void* __p)
      { return _M_insert(__p); }
# 248 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
 __ostream_type&
      operator<<(__streambuf_type* __sb);
# 281 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
 __ostream_type&
      put(char_type __c);


      void
      _M_write(const char_type* __s, streamsize __n)
      {
 const streamsize __put = this->rdbuf()->sputn(__s, __n);
 if (__put != __n)
   this->setstate(ios_base::badbit);
      }
# 309 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
 __ostream_type&
      write(const char_type* __s, streamsize __n);
# 322 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
 __ostream_type&
      flush();
# 333 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
 pos_type
      tellp();
# 344 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
 __ostream_type&
      seekp(pos_type);
# 356 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
 __ostream_type&
      seekp(off_type, ios_base::seekdir);

    protected:
      basic_ostream()
      { this->init(0); }

      template<typename _ValueT>
        __ostream_type&
        _M_insert(_ValueT __v);
    };
# 375 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
 template <typename _CharT, typename _Traits>
    class basic_ostream<_CharT, _Traits>::sentry
    {

      bool _M_ok;
      basic_ostream<_CharT, _Traits>& _M_os;

    public:
# 394 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
 explicit
      sentry(basic_ostream<_CharT, _Traits>& __os);
# 404 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
 ~sentry()
      {

 if (bool(_M_os.flags() & ios_base::unitbuf) && !uncaught_exception())
   {

     if (_M_os.rdbuf() && _M_os.rdbuf()->pubsync() == -1)
       _M_os.setstate(ios_base::badbit);
   }
      }
# 425 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
 operator bool() const
      { return _M_ok; }
    };
# 446 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
 template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, _CharT __c)
    { return __ostream_insert(__out, &__c, 1); }

  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, char __c)
    { return (__out << __out.widen(__c)); }


  template <class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, char __c)
    { return __ostream_insert(__out, &__c, 1); }


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, signed char __c)
    { return (__out << static_cast<char>(__c)); }

  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, unsigned char __c)
    { return (__out << static_cast<char>(__c)); }
# 488 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
 template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const _CharT* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 __ostream_insert(__out, __s,
    static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits> &
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s);


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const char* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 __ostream_insert(__out, __s,
    static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const signed char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }

  template<class _Traits>
    inline basic_ostream<char, _Traits> &
    operator<<(basic_ostream<char, _Traits>& __out, const unsigned char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }
# 538 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
 template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    endl(basic_ostream<_CharT, _Traits>& __os)
    { return flush(__os.put(__os.widen('\n'))); }







  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    ends(basic_ostream<_CharT, _Traits>& __os)
    { return __os.put(_CharT()); }






  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    flush(basic_ostream<_CharT, _Traits>& __os)
    { return __os.flush(); }
# 582 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
}




# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream.tcc" 1 3
# 39 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream.tcc" 3
# 39 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream.tcc" 3



namespace std {

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>::sentry::
    sentry(basic_ostream<_CharT, _Traits>& __os)
    : _M_ok(false), _M_os(__os)
    {

      if (__os.tie() && __os.good())
 __os.tie()->flush();

      if (__os.good())
 _M_ok = true;
      else
 __os.setstate(ios_base::failbit);
    }

  template<typename _CharT, typename _Traits>
    template<typename _ValueT>
      basic_ostream<_CharT, _Traits>&
      basic_ostream<_CharT, _Traits>::
      _M_insert(_ValueT __v)
      {
 sentry __cerb(*this);
 if (__cerb)
   {
     ios_base::iostate __err = ios_base::goodbit;
     if (true)
       {
  const __num_put_type& __np = __check_facet(this->_M_num_put);
  if (__np.put(*this, *this, this->fill(), __v).failed())
    __err |= ios_base::badbit;
       }
     if (false)
       {
  this->_M_setstate(ios_base::badbit);
                         ;
       }
     if (false)
       { this->_M_setstate(ios_base::badbit); }
     if (__err)
       this->setstate(__err);
   }
 return *this;
      }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(short __n)
    {


      const ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
      if (__fmt == ios_base::oct || __fmt == ios_base::hex)
 return _M_insert(static_cast<long>(static_cast<unsigned short>(__n)));
      else
 return _M_insert(static_cast<long>(__n));
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(int __n)
    {


      const ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
      if (__fmt == ios_base::oct || __fmt == ios_base::hex)
 return _M_insert(static_cast<long>(static_cast<unsigned int>(__n)));
      else
 return _M_insert(static_cast<long>(__n));
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(__streambuf_type* __sbin)
    {
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this);
      if (__cerb && __sbin)
 {
   if (true)
     {
       if (!__copy_streambufs(__sbin, this->rdbuf()))
  __err |= ios_base::failbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::failbit); }
 }
      else if (!__sbin)
 __err |= ios_base::badbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    put(char_type __c)
    {






      sentry __cerb(*this);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const int_type __put = this->rdbuf()->sputc(__c);
       if (traits_type::eq_int_type(__put, traits_type::eof()))
  __err |= ios_base::badbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    write(const _CharT* __s, streamsize __n)
    {







      sentry __cerb(*this);
      if (__cerb)
 {
   if (true)
     { _M_write(__s, __n); }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    flush()
    {



      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (this->rdbuf() && this->rdbuf()->pubsync() == -1)
     __err |= ios_base::badbit;
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_ostream<_CharT, _Traits>::pos_type
    basic_ostream<_CharT, _Traits>::
    tellp()
    {
      pos_type __ret = pos_type(-1);
      if (true)
 {
   if (!this->fail())
     __ret = this->rdbuf()->pubseekoff(0, ios_base::cur, ios_base::out);
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(pos_type __pos)
    {
      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (!this->fail())
     {


       const pos_type __p = this->rdbuf()->pubseekpos(__pos,
            ios_base::out);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(off_type __off, ios_base::seekdir __dir)
    {
      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (!this->fail())
     {


       const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
            ios_base::out);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 {


   const size_t __clen = char_traits<char>::length(__s);
   if (true)
     {
       struct __ptr_guard
       {
  _CharT *__p;
  __ptr_guard (_CharT *__ip): __p(__ip) { }
  ~__ptr_guard() { delete[] __p; }
  _CharT* __get() { return __p; }
       } __pg (new _CharT[__clen]);

       _CharT *__ws = __pg.__get();
       for (size_t __i = 0; __i < __clen; ++__i)
  __ws[__i] = __out.widen(__s[__i]);
       __ostream_insert(__out, __ws, __clen);
     }
   if (false)
     {
       __out._M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { __out._M_setstate(ios_base::badbit); }
 }
      return __out;
    }





  extern template class basic_ostream<char>;
  extern template ostream& endl(ostream&);
  extern template ostream& ends(ostream&);
  extern template ostream& flush(ostream&);
  extern template ostream& operator<<(ostream&, char);
  extern template ostream& operator<<(ostream&, unsigned char);
  extern template ostream& operator<<(ostream&, signed char);
  extern template ostream& operator<<(ostream&, const char*);
  extern template ostream& operator<<(ostream&, const unsigned char*);
  extern template ostream& operator<<(ostream&, const signed char*);

  extern template ostream& ostream::_M_insert(long);
  extern template ostream& ostream::_M_insert(unsigned long);
  extern template ostream& ostream::_M_insert(bool);

  extern template ostream& ostream::_M_insert(long long);
  extern template ostream& ostream::_M_insert(unsigned long long);

  extern template ostream& ostream::_M_insert(double);
  extern template ostream& ostream::_M_insert(long double);
  extern template ostream& ostream::_M_insert(const void*);


  extern template class basic_ostream<wchar_t>;
  extern template wostream& endl(wostream&);
  extern template wostream& ends(wostream&);
  extern template wostream& flush(wostream&);
  extern template wostream& operator<<(wostream&, wchar_t);
  extern template wostream& operator<<(wostream&, char);
  extern template wostream& operator<<(wostream&, const wchar_t*);
  extern template wostream& operator<<(wostream&, const char*);

  extern template wostream& wostream::_M_insert(long);
  extern template wostream& wostream::_M_insert(unsigned long);
  extern template wostream& wostream::_M_insert(bool);

  extern template wostream& wostream::_M_insert(long long);
  extern template wostream& wostream::_M_insert(unsigned long long);

  extern template wostream& wostream::_M_insert(double);
  extern template wostream& wostream::_M_insert(long double);
  extern template wostream& wostream::_M_insert(const void*);



}
# 586 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 2 3
# 40 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 2 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 1 3
# 38 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
# 38 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3




namespace std {
# 53 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 template<typename _CharT, typename _Traits>
    class basic_istream : virtual public basic_ios<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_ios<_CharT, _Traits> __ios_type;
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
        __num_get_type;
      typedef ctype<_CharT> __ctype_type;

    protected:





      streamsize _M_gcount;

    public:
# 89 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 explicit
      basic_istream(__streambuf_type* __sb)
      : _M_gcount(streamsize(0))
      { this->init(__sb); }






      virtual
      ~basic_istream()
      { _M_gcount = streamsize(0); }


      class sentry;
      friend class sentry;
# 118 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 __istream_type&
      operator>>(__istream_type& (*__pf)(__istream_type&))
      { return __pf(*this); }

      __istream_type&
      operator>>(__ios_type& (*__pf)(__ios_type&))
      {
 __pf(*this);
 return *this;
      }

      __istream_type&
      operator>>(ios_base& (*__pf)(ios_base&))
      {
 __pf(*this);
 return *this;
      }
# 165 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 __istream_type&
      operator>>(bool& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(short& __n);

      __istream_type&
      operator>>(unsigned short& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(int& __n);

      __istream_type&
      operator>>(unsigned int& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(long& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(unsigned long& __n)
      { return _M_extract(__n); }


      __istream_type&
      operator>>(long long& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(unsigned long long& __n)
      { return _M_extract(__n); }


      __istream_type&
      operator>>(float& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(double& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(long double& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(void*& __p)
      { return _M_extract(__p); }
# 237 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 __istream_type&
      operator>>(__streambuf_type* __sb);
# 247 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 streamsize
      gcount() const
      { return _M_gcount; }
# 279 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 int_type
      get();
# 293 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 __istream_type&
      get(char_type& __c);
# 320 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 __istream_type&
      get(char_type* __s, streamsize __n, char_type __delim);
# 331 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 __istream_type&
      get(char_type* __s, streamsize __n)
      { return this->get(__s, __n, this->widen('\n')); }
# 354 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 __istream_type&
      get(__streambuf_type& __sb, char_type __delim);
# 364 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 __istream_type&
      get(__streambuf_type& __sb)
      { return this->get(__sb, this->widen('\n')); }
# 393 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 __istream_type&
      getline(char_type* __s, streamsize __n, char_type __delim);
# 404 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 __istream_type&
      getline(char_type* __s, streamsize __n)
      { return this->getline(__s, __n, this->widen('\n')); }
# 428 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 __istream_type&
      ignore();

      __istream_type&
      ignore(streamsize __n);

      __istream_type&
      ignore(streamsize __n, int_type __delim);
# 445 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 int_type
      peek();
# 463 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 __istream_type&
      read(char_type* __s, streamsize __n);
# 482 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 streamsize
      readsome(char_type* __s, streamsize __n);
# 498 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 __istream_type&
      putback(char_type __c);
# 513 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 __istream_type&
      unget();
# 531 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 int
      sync();
# 545 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 pos_type
      tellg();
# 560 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 __istream_type&
      seekg(pos_type);
# 576 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 __istream_type&
      seekg(off_type, ios_base::seekdir);


    protected:
      basic_istream()
      : _M_gcount(streamsize(0))
      { this->init(0); }

      template<typename _ValueT>
        __istream_type&
        _M_extract(_ValueT& __v);
    };


  template<>
    basic_istream<char>&
    basic_istream<char>::
    getline(char_type* __s, streamsize __n, char_type __delim);

  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n);

  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n, int_type __delim);


  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    getline(char_type* __s, streamsize __n, char_type __delim);

  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n);

  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n, int_type __delim);
# 631 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 template<typename _CharT, typename _Traits>
    class basic_istream<_CharT, _Traits>::sentry
    {

      bool _M_ok;

    public:

      typedef _Traits traits_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::__ctype_type __ctype_type;
      typedef typename _Traits::int_type __int_type;
# 667 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 explicit
      sentry(basic_istream<_CharT, _Traits>& __is, bool __noskipws = false);
# 680 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 operator bool() const
      { return _M_ok; }
    };
# 697 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c);

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }
# 739 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s);


  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __in, char* __s);

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }
# 767 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 template<typename _CharT, typename _Traits>
    class basic_iostream
    : public basic_istream<_CharT, _Traits>,
      public basic_ostream<_CharT, _Traits>
    {
    public:



      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_ostream<_CharT, _Traits> __ostream_type;







      explicit
      basic_iostream(basic_streambuf<_CharT, _Traits>* __sb)
      : __istream_type(__sb), __ostream_type(__sb) { }




      virtual
      ~basic_iostream() { }

    protected:
      basic_iostream()
      : __istream_type(), __ostream_type() { }
    };
# 828 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
 template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    ws(basic_istream<_CharT, _Traits>& __is);
# 850 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
}




# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/istream.tcc" 1 3
# 39 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/istream.tcc" 3
# 39 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/istream.tcc" 3



namespace std {

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>::sentry::
    sentry(basic_istream<_CharT, _Traits>& __in, bool __noskip) : _M_ok(false)
    {
      ios_base::iostate __err = ios_base::goodbit;
      if (__in.good())
 {
   if (__in.tie())
     __in.tie()->flush();
   if (!__noskip && bool(__in.flags() & ios_base::skipws))
     {
       const __int_type __eof = traits_type::eof();
       __streambuf_type* __sb = __in.rdbuf();
       __int_type __c = __sb->sgetc();

       const __ctype_type& __ct = __check_facet(__in._M_ctype);
       while (!traits_type::eq_int_type(__c, __eof)
       && __ct.is(ctype_base::space,
    traits_type::to_char_type(__c)))
  __c = __sb->snextc();




       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
 }

      if (__in.good() && __err == ios_base::goodbit)
 _M_ok = true;
      else
 {
   __err |= ios_base::failbit;
   __in.setstate(__err);
 }
    }

  template<typename _CharT, typename _Traits>
    template<typename _ValueT>
      basic_istream<_CharT, _Traits>&
      basic_istream<_CharT, _Traits>::
      _M_extract(_ValueT& __v)
      {
 sentry __cerb(*this, false);
 if (__cerb)
   {
     ios_base::iostate __err = ios_base::goodbit;
     if (true)
       {
  const __num_get_type& __ng = __check_facet(this->_M_num_get);
  __ng.get(*this, 0, *this, __err, __v);
       }
     if (false)
       {
  this->_M_setstate(ios_base::badbit);
                         ;
       }
     if (false)
       { this->_M_setstate(ios_base::badbit); }
     if (__err)
       this->setstate(__err);
   }
 return *this;
      }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(short& __n)
    {


      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       long __l;
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __l);



       if (__l < __gnu_cxx::__numeric_traits<short>::__min)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<short>::__min;
  }
       else if (__l > __gnu_cxx::__numeric_traits<short>::__max)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<short>::__max;
  }
       else
  __n = short(__l);
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(int& __n)
    {


      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       long __l;
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __l);



       if (__l < __gnu_cxx::__numeric_traits<int>::__min)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<int>::__min;
  }
       else if (__l > __gnu_cxx::__numeric_traits<int>::__max)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<int>::__max;
  }
       else
  __n = int(__l);
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(__streambuf_type* __sbout)
    {
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, false);
      if (__cerb && __sbout)
 {
   if (true)
     {
       bool __ineof;
       if (!__copy_streambufs_eof(this->rdbuf(), __sbout, __ineof))
  __err |= ios_base::failbit;
       if (__ineof)
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::failbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::failbit); }
 }
      else if (!__sbout)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    get(void)
    {
      const int_type __eof = traits_type::eof();
      int_type __c = __eof;
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   if (true)
     {
       __c = this->rdbuf()->sbumpc();

       if (!traits_type::eq_int_type(__c, __eof))
  _M_gcount = 1;
       else
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return __c;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type& __c)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   if (true)
     {
       const int_type __cb = this->rdbuf()->sbumpc();

       if (!traits_type::eq_int_type(__cb, traits_type::eof()))
  {
    _M_gcount = 1;
    __c = traits_type::to_char_type(__cb);
  }
       else
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   if (true)
     {
       const int_type __idelim = traits_type::to_int_type(__delim);
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       int_type __c = __sb->sgetc();

       while (_M_gcount + 1 < __n
       && !traits_type::eq_int_type(__c, __eof)
       && !traits_type::eq_int_type(__c, __idelim))
  {
    *__s++ = traits_type::to_char_type(__c);
    ++_M_gcount;
    __c = __sb->snextc();
  }
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }


      if (__n > 0)
 *__s = char_type();
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(__streambuf_type& __sb, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   if (true)
     {
       const int_type __idelim = traits_type::to_int_type(__delim);
       const int_type __eof = traits_type::eof();
       __streambuf_type* __this_sb = this->rdbuf();
       int_type __c = __this_sb->sgetc();
       char_type __c2 = traits_type::to_char_type(__c);

       while (!traits_type::eq_int_type(__c, __eof)
       && !traits_type::eq_int_type(__c, __idelim)
       && !traits_type::eq_int_type(__sb.sputc(__c2), __eof))
  {
    ++_M_gcount;
    __c = __this_sb->snextc();
    __c2 = traits_type::to_char_type(__c);
  }
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    getline(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
        {
          if (true)
            {
              const int_type __idelim = traits_type::to_int_type(__delim);
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();

              while (_M_gcount + 1 < __n
                     && !traits_type::eq_int_type(__c, __eof)
                     && !traits_type::eq_int_type(__c, __idelim))
                {
                  *__s++ = traits_type::to_char_type(__c);
                  __c = __sb->snextc();
                  ++_M_gcount;
                }
              if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
              else
                {
                  if (traits_type::eq_int_type(__c, __idelim))
                    {
                      __sb->sbumpc();
                      ++_M_gcount;
                    }
                  else
                    __err |= ios_base::failbit;
                }
            }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
          if (false)
            { this->_M_setstate(ios_base::badbit); }
        }


      if (__n > 0)
 *__s = char_type();
      if (!_M_gcount)
        __err |= ios_base::failbit;
      if (__err)
        this->setstate(__err);
      return *this;
    }




  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(void)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();

       if (traits_type::eq_int_type(__sb->sbumpc(), __eof))
  __err |= ios_base::eofbit;
       else
  _M_gcount = 1;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb && __n > 0)
        {
          ios_base::iostate __err = ios_base::goodbit;
          if (true)
            {
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();
# 512 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/istream.tcc" 3
 bool __large_ignore = false;
       while (true)
  {
    while (_M_gcount < __n
    && !traits_type::eq_int_type(__c, __eof))
      {
        ++_M_gcount;
        __c = __sb->snextc();
      }
    if (__n == __gnu_cxx::__numeric_traits<streamsize>::__max
        && !traits_type::eq_int_type(__c, __eof))
      {
        _M_gcount =
   __gnu_cxx::__numeric_traits<streamsize>::__min;
        __large_ignore = true;
      }
    else
      break;
  }

       if (__large_ignore)
  _M_gcount = __gnu_cxx::__numeric_traits<streamsize>::__max;

       if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
            }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
          if (false)
            { this->_M_setstate(ios_base::badbit); }
          if (__err)
            this->setstate(__err);
        }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(streamsize __n, int_type __delim)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb && __n > 0)
        {
          ios_base::iostate __err = ios_base::goodbit;
          if (true)
            {
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();


       bool __large_ignore = false;
       while (true)
  {
    while (_M_gcount < __n
    && !traits_type::eq_int_type(__c, __eof)
    && !traits_type::eq_int_type(__c, __delim))
      {
        ++_M_gcount;
        __c = __sb->snextc();
      }
    if (__n == __gnu_cxx::__numeric_traits<streamsize>::__max
        && !traits_type::eq_int_type(__c, __eof)
        && !traits_type::eq_int_type(__c, __delim))
      {
        _M_gcount =
   __gnu_cxx::__numeric_traits<streamsize>::__min;
        __large_ignore = true;
      }
    else
      break;
  }

       if (__large_ignore)
  _M_gcount = __gnu_cxx::__numeric_traits<streamsize>::__max;

              if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
       else if (traits_type::eq_int_type(__c, __delim))
  {
    if (_M_gcount
        < __gnu_cxx::__numeric_traits<streamsize>::__max)
      ++_M_gcount;
    __sb->sbumpc();
  }
            }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
          if (false)
            { this->_M_setstate(ios_base::badbit); }
          if (__err)
            this->setstate(__err);
        }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    peek(void)
    {
      int_type __c = traits_type::eof();
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       __c = this->rdbuf()->sgetc();
       if (traits_type::eq_int_type(__c, traits_type::eof()))
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return __c;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    read(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       _M_gcount = this->rdbuf()->sgetn(__s, __n);
       if (_M_gcount != __n)
  __err |= (ios_base::eofbit | ios_base::failbit);
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    streamsize
    basic_istream<_CharT, _Traits>::
    readsome(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {

       const streamsize __num = this->rdbuf()->in_avail();
       if (__num > 0)
  _M_gcount = this->rdbuf()->sgetn(__s, std::min(__num, __n));
       else if (__num == -1)
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return _M_gcount;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    putback(char_type __c)
    {


      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       if (!__sb
    || traits_type::eq_int_type(__sb->sputbackc(__c), __eof))
  __err |= ios_base::badbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    unget(void)
    {


      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       if (!__sb
    || traits_type::eq_int_type(__sb->sungetc(), __eof))
  __err |= ios_base::badbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    int
    basic_istream<_CharT, _Traits>::
    sync(void)
    {


      int __ret = -1;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       __streambuf_type* __sb = this->rdbuf();
       if (__sb)
  {
    if (__sb->pubsync() == -1)
      __err |= ios_base::badbit;
    else
      __ret = 0;
  }
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::pos_type
    basic_istream<_CharT, _Traits>::
    tellg(void)
    {


      pos_type __ret = pos_type(-1);
      if (true)
 {
   if (!this->fail())
     __ret = this->rdbuf()->pubseekoff(0, ios_base::cur,
           ios_base::in);
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(pos_type __pos)
    {


      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (!this->fail())
     {

       const pos_type __p = this->rdbuf()->pubseekpos(__pos,
            ios_base::in);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(off_type __off, ios_base::seekdir __dir)
    {


      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (!this->fail())
     {

       const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
            ios_base::in);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }


  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::int_type __int_type;

      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const __int_type __cb = __in.rdbuf()->sbumpc();
       if (!_Traits::eq_int_type(__cb, _Traits::eof()))
  __c = _Traits::to_char_type(__cb);
       else
  __err |= (ios_base::eofbit | ios_base::failbit);
     }
   if (false)
     {
       __in._M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { __in._M_setstate(ios_base::badbit); }
   if (__err)
     __in.setstate(__err);
 }
      return __in;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef typename _Traits::int_type int_type;
      typedef _CharT char_type;
      typedef ctype<_CharT> __ctype_type;

      streamsize __extracted = 0;
      ios_base::iostate __err = ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   if (true)
     {

       streamsize __num = __in.width();
       if (__num <= 0)
  __num = __gnu_cxx::__numeric_traits<streamsize>::__max;

       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());

       const int_type __eof = _Traits::eof();
       __streambuf_type* __sb = __in.rdbuf();
       int_type __c = __sb->sgetc();

       while (__extracted < __num - 1
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    *__s++ = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __sb->snextc();
  }
       if (_Traits::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;



       *__s = char_type();
       __in.width(0);
     }
   if (false)
     {
       __in._M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { __in._M_setstate(ios_base::badbit); }
 }
      if (!__extracted)
 __err |= ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }


  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    ws(basic_istream<_CharT, _Traits>& __in)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef typename __istream_type::int_type __int_type;
      typedef ctype<_CharT> __ctype_type;

      const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
      const __int_type __eof = _Traits::eof();
      __streambuf_type* __sb = __in.rdbuf();
      __int_type __c = __sb->sgetc();

      while (!_Traits::eq_int_type(__c, __eof)
      && __ct.is(ctype_base::space, _Traits::to_char_type(__c)))
 __c = __sb->snextc();

       if (_Traits::eq_int_type(__c, __eof))
  __in.setstate(ios_base::eofbit);
      return __in;
    }





  extern template class basic_istream<char>;
  extern template istream& ws(istream&);
  extern template istream& operator>>(istream&, char&);
  extern template istream& operator>>(istream&, char*);
  extern template istream& operator>>(istream&, unsigned char&);
  extern template istream& operator>>(istream&, signed char&);
  extern template istream& operator>>(istream&, unsigned char*);
  extern template istream& operator>>(istream&, signed char*);

  extern template istream& istream::_M_extract(unsigned short&);
  extern template istream& istream::_M_extract(unsigned int&);
  extern template istream& istream::_M_extract(long&);
  extern template istream& istream::_M_extract(unsigned long&);
  extern template istream& istream::_M_extract(bool&);

  extern template istream& istream::_M_extract(long long&);
  extern template istream& istream::_M_extract(unsigned long long&);

  extern template istream& istream::_M_extract(float&);
  extern template istream& istream::_M_extract(double&);
  extern template istream& istream::_M_extract(long double&);
  extern template istream& istream::_M_extract(void*&);

  extern template class basic_iostream<char>;


  extern template class basic_istream<wchar_t>;
  extern template wistream& ws(wistream&);
  extern template wistream& operator>>(wistream&, wchar_t&);
  extern template wistream& operator>>(wistream&, wchar_t*);

  extern template wistream& wistream::_M_extract(unsigned short&);
  extern template wistream& wistream::_M_extract(unsigned int&);
  extern template wistream& wistream::_M_extract(long&);
  extern template wistream& wistream::_M_extract(unsigned long&);
  extern template wistream& wistream::_M_extract(bool&);

  extern template wistream& wistream::_M_extract(long long&);
  extern template wistream& wistream::_M_extract(unsigned long long&);

  extern template wistream& wistream::_M_extract(float&);
  extern template wistream& wistream::_M_extract(double&);
  extern template wistream& wistream::_M_extract(long double&);
  extern template wistream& wistream::_M_extract(void*&);

  extern template class basic_iostream<wchar_t>;



}
# 854 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 2 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 2 3

namespace std {
# 58 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 3
 extern istream cin;
  extern ostream cout;
  extern ostream cerr;
  extern ostream clog;


  extern wistream wcin;
  extern wostream wcout;
  extern wostream wcerr;
  extern wostream wclog;




  static ios_base::Init __ioinit;

}
# 4 "source/AESfunctions.h" 2
using namespace std;


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstdio" 1 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstdio" 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstdio" 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 44 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstdio" 2 3
# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 1 3








# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw_print_push.h" 1 3
# 11 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {
# 101 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
 __attribute__ ((__dllimport__)) FILE * __iob_func(void);
# 120 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
 __extension__ typedef long long fpos_t;
# 157 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
 __attribute__ ((__dllimport__)) int _filbuf(FILE *_File);
  __attribute__ ((__dllimport__)) int _flsbuf(int _Ch,FILE *_File);



  __attribute__ ((__dllimport__)) FILE * _fsopen(const char *_Filename,const char *_Mode,int _ShFlag);

  void clearerr(FILE *_File);
  int fclose(FILE *_File);
  __attribute__ ((__dllimport__)) int _fcloseall(void);



  __attribute__ ((__dllimport__)) FILE * _fdopen(int _FileHandle,const char *_Mode);

  int feof(FILE *_File);
  int ferror(FILE *_File);
  int fflush(FILE *_File);
  int fgetc(FILE *_File);
  __attribute__ ((__dllimport__)) int _fgetchar(void);
  int fgetpos(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos);
  char * fgets(char * __restrict__ _Buf,int _MaxCount,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _fileno(FILE *_File);



  __attribute__ ((__dllimport__)) char * _tempnam(const char *_DirName,const char *_FilePrefix);
  __attribute__ ((__dllimport__)) int _flushall(void);
  FILE * fopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode) ;
  FILE *fopen64(const char * __restrict__ filename,const char * __restrict__ mode);
  int fprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
  int fputc(int _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) int _fputchar(int _Ch);
  int fputs(const char * __restrict__ _Str,FILE * __restrict__ _File);
  size_t fread(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  FILE * freopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode,FILE * __restrict__ _File) ;
  int fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...) ;
  int _fscanf_l(FILE * __restrict__ _File,const char * __restrict__ _Format,_locale_t locale,...) ;
  int fsetpos(FILE *_File,const fpos_t *_Pos);
  int fseek(FILE *_File,long _Offset,int _Origin);
  int fseeko64(FILE* stream, _off64_t offset, int whence);
  long ftell(FILE *_File);
  _off64_t ftello64(FILE * stream);
  __extension__ int _fseeki64(FILE *_File,long long _Offset,int _Origin);
  __extension__ long long _ftelli64(FILE *_File);
  size_t fwrite(const void * __restrict__ _Str,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  int getc(FILE *_File);
  int getchar(void);
  __attribute__ ((__dllimport__)) int _getmaxstdio(void);
  char * gets(char *_Buffer) ;
  int _getw(FILE *_File);


  void perror(const char *_ErrMsg);

  __attribute__ ((__dllimport__)) int _pclose(FILE *_File);
  __attribute__ ((__dllimport__)) FILE * _popen(const char *_Command,const char *_Mode);




  int printf(const char * __restrict__ _Format,...);
  int putc(int _Ch,FILE *_File);
  int putchar(int _Ch);
  int puts(const char *_Str);
  __attribute__ ((__dllimport__)) int _putw(int _Word,FILE *_File);


  int remove(const char *_Filename);
  int rename(const char *_OldFilename,const char *_NewFilename);
  __attribute__ ((__dllimport__)) int _unlink(const char *_Filename);

  int unlink(const char *_Filename) ;


  void rewind(FILE *_File);
  __attribute__ ((__dllimport__)) int _rmtmp(void);
  int scanf(const char * __restrict__ _Format,...) ;
  int _scanf_l(const char * __restrict__ format,_locale_t locale,... ) ;
  void setbuf(FILE * __restrict__ _File,char * __restrict__ _Buffer) ;
  __attribute__ ((__dllimport__)) int _setmaxstdio(int _Max);
  __attribute__ ((__dllimport__)) unsigned int _set_output_format(unsigned int _Format);
  __attribute__ ((__dllimport__)) unsigned int _get_output_format(void);
  unsigned int __mingw_set_output_format(unsigned int _Format);
  unsigned int __mingw_get_output_format(void);




  int setvbuf(FILE * __restrict__ _File,char * __restrict__ _Buf,int _Mode,size_t _Size);
  __attribute__ ((__dllimport__)) int _scprintf(const char * __restrict__ _Format,...);
  int sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...) ;
  int _sscanf_l(const char * __restrict__ buffer,const char * __restrict__ format,_locale_t locale,...) ;
  __attribute__ ((__dllimport__)) int _snscanf(const char * __restrict__ _Src,size_t _MaxCount,const char * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _snscanf_l(const char * __restrict__ input,size_t length,const char * __restrict__ format,_locale_t locale,...) ;
  FILE * tmpfile(void) ;
  char * tmpnam(char *_Buffer);
  int ungetc(int _Ch,FILE *_File);
  int vfprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,va_list _ArgList);
  int vprintf(const char * __restrict__ _Format,va_list _ArgList);


  extern
    __attribute__((__format__ (gnu_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
    int __mingw_vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,
      va_list _ArgList);
  extern
    __attribute__((__format__ (gnu_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
    int __mingw_snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
  extern
    __attribute__((__format__ (gnu_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
    int __mingw_printf(const char * __restrict__ , ... ) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
    int __mingw_vprintf (const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
    int __mingw_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
    int __mingw_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
    int __mingw_sprintf (char * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
    int __mingw_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));

  __attribute__ ((__dllimport__)) int _snprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _snprintf_l(char * __restrict__ buffer,size_t count,const char * __restrict__ format,_locale_t locale,...) ;
  __attribute__ ((__dllimport__)) int _vsnprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,va_list _Args) ;
  __attribute__ ((__dllimport__)) int _vsnprintf_l(char * __restrict__ buffer,size_t count,const char * __restrict__ format,_locale_t locale,va_list argptr) ;
  int sprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,...) ;
  int _sprintf_l(char * __restrict__ buffer,const char * __restrict__ format,_locale_t locale,...) ;
  int vsprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,va_list _Args) ;







  int vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,va_list _ArgList) ;

  int snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
# 312 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
 int vscanf(const char * __restrict__ Format, va_list argp);
  int vfscanf (FILE * __restrict__ fp, const char * __restrict__ Format,va_list argp);
  int vsscanf (const char * __restrict__ _Str,const char * __restrict__ Format,va_list argp);

  __attribute__ ((__dllimport__)) int _vscprintf(const char * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _set_printf_count_output(int _Value);
  __attribute__ ((__dllimport__)) int _get_printf_count_output(void);
# 475 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
 __attribute__ ((__dllimport__)) void _lock_file(FILE *_File);
  __attribute__ ((__dllimport__)) void _unlock_file(FILE *_File);
  __attribute__ ((__dllimport__)) int _fclose_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) int _fflush_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t _fread_nolock(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _fseek_nolock(FILE *_File,long _Offset,int _Origin);
  __attribute__ ((__dllimport__)) long _ftell_nolock(FILE *_File);
  __extension__ __attribute__ ((__dllimport__)) int _fseeki64_nolock(FILE *_File,long long _Offset,int _Origin);
  __extension__ __attribute__ ((__dllimport__)) long long _ftelli64_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t _fwrite_nolock(const void * __restrict__ _DstBuf,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _ungetc_nolock(int _Ch,FILE *_File);





  char * tempnam(const char *_Directory,const char *_FilePrefix) ;
  int fcloseall(void) ;
  FILE * fdopen(int _FileHandle,const char *_Format) ;
  int fgetchar(void) ;
  int fileno(FILE *_File) ;
  int flushall(void) ;
  int fputchar(int _Ch) ;
  int getw(FILE *_File) ;
  int putw(int _Ch,FILE *_File) ;
  int rmtmp(void) ;



}


#pragma pack(pop)



# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdio_s.h" 1 3








# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 1 3
# 9 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdio_s.h" 2 3
# 509 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


# 1 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw_print_pop.h" 1 3
# 511 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3
# 45 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstdio" 2 3
# 92 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstdio" 3
namespace std {

  using ::FILE;
  using ::fpos_t;

  using ::clearerr;
  using ::fclose;
  using ::feof;
  using ::ferror;
  using ::fflush;
  using ::fgetc;
  using ::fgetpos;
  using ::fgets;
  using ::fopen;
  using ::fprintf;
  using ::fputc;
  using ::fputs;
  using ::fread;
  using ::freopen;
  using ::fscanf;
  using ::fseek;
  using ::fsetpos;
  using ::ftell;
  using ::fwrite;
  using ::getc;
  using ::getchar;
  using ::gets;
  using ::perror;
  using ::printf;
  using ::putc;
  using ::putchar;
  using ::puts;
  using ::remove;
  using ::rename;
  using ::rewind;
  using ::scanf;
  using ::setbuf;
  using ::setvbuf;
  using ::sprintf;
  using ::sscanf;
  using ::tmpfile;
  using ::tmpnam;
  using ::ungetc;
  using ::vfprintf;
  using ::vprintf;
  using ::vsprintf;

}
# 149 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstdio" 3
namespace __gnu_cxx {
# 166 "C:/Dev/Xilinx/Vivado/2017.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstdio" 3
 using ::snprintf;
  using ::vfscanf;
  using ::vscanf;
  using ::vsnprintf;
  using ::vsscanf;


}

namespace std {

  using ::__gnu_cxx::snprintf;
  using ::__gnu_cxx::vfscanf;
  using ::__gnu_cxx::vscanf;
  using ::__gnu_cxx::vsnprintf;
  using ::__gnu_cxx::vsscanf;

}
# 6 "source/AESfunctions.h" 2


const unsigned short Nb = 4;
const unsigned short rows = 4;
const unsigned short stt_lng = Nb * rows;



const unsigned short Nk_max = 8;
const unsigned short CipherKeyLenghth_max = Nk_max * rows;
const unsigned short Nr_max = (Nk_max > Nb) ? Nk_max + 6 : Nb + 6;
const unsigned short ExtdCipherKeyLenghth_max = (Nr_max + 1) * stt_lng;
# 2 "source/AESfunctions.cpp" 2
# 1 "source/AEStables.h" 1



const unsigned char s_box[256] = { 0x63, 0x7C, 0x77, 0x7B, 0xF2, 0x6B, 0x6F,
  0xC5, 0x30, 0x01, 0x67, 0x2B, 0xFE, 0xD7, 0xAB, 0x76, 0xCA, 0x82, 0xC9,
  0x7D, 0xFA, 0x59, 0x47, 0xF0, 0xAD, 0xD4, 0xA2, 0xAF, 0x9C, 0xA4, 0x72,
  0xC0, 0xB7, 0xFD, 0x93, 0x26, 0x36, 0x3F, 0xF7, 0xCC, 0x34, 0xA5, 0xE5,
  0xF1, 0x71, 0xD8, 0x31, 0x15, 0x04, 0xC7, 0x23, 0xC3, 0x18, 0x96, 0x05,
  0x9A, 0x07, 0x12, 0x80, 0xE2, 0xEB, 0x27, 0xB2, 0x75, 0x09, 0x83, 0x2C,
  0x1A, 0x1B, 0x6E, 0x5A, 0xA0, 0x52, 0x3B, 0xD6, 0xB3, 0x29, 0xE3, 0x2F,
  0x84, 0x53, 0xD1, 0x00, 0xED, 0x20, 0xFC, 0xB1, 0x5B, 0x6A, 0xCB, 0xBE,
  0x39, 0x4A, 0x4C, 0x58, 0xCF, 0xD0, 0xEF, 0xAA, 0xFB, 0x43, 0x4D, 0x33,
  0x85, 0x45, 0xF9, 0x02, 0x7F, 0x50, 0x3C, 0x9F, 0xA8, 0x51, 0xA3, 0x40,
  0x8F, 0x92, 0x9D, 0x38, 0xF5, 0xBC, 0xB6, 0xDA, 0x21, 0x10, 0xFF, 0xF3,
  0xD2, 0xCD, 0x0C, 0x13, 0xEC, 0x5F, 0x97, 0x44, 0x17, 0xC4, 0xA7, 0x7E,
  0x3D, 0x64, 0x5D, 0x19, 0x73, 0x60, 0x81, 0x4F, 0xDC, 0x22, 0x2A, 0x90,
  0x88, 0x46, 0xEE, 0xB8, 0x14, 0xDE, 0x5E, 0x0B, 0xDB, 0xE0, 0x32, 0x3A,
  0x0A, 0x49, 0x06, 0x24, 0x5C, 0xC2, 0xD3, 0xAC, 0x62, 0x91, 0x95, 0xE4,
  0x79, 0xE7, 0xC8, 0x37, 0x6D, 0x8D, 0xD5, 0x4E, 0xA9, 0x6C, 0x56, 0xF4,
  0xEA, 0x65, 0x7A, 0xAE, 0x08, 0xBA, 0x78, 0x25, 0x2E, 0x1C, 0xA6, 0xB4,
  0xC6, 0xE8, 0xDD, 0x74, 0x1F, 0x4B, 0xBD, 0x8B, 0x8A, 0x70, 0x3E, 0xB5,
  0x66, 0x48, 0x03, 0xF6, 0x0E, 0x61, 0x35, 0x57, 0xB9, 0x86, 0xC1, 0x1D,
  0x9E, 0xE1, 0xF8, 0x98, 0x11, 0x69, 0xD9, 0x8E, 0x94, 0x9B, 0x1E, 0x87,
  0xE9, 0xCE, 0x55, 0x28, 0xDF, 0x8C, 0xA1, 0x89, 0x0D, 0xBF, 0xE6, 0x42,
  0x68, 0x41, 0x99, 0x2D, 0x0F, 0xB0, 0x54, 0xBB, 0x16 };


const unsigned char inverted_s_box[256] = { 0x52, 0x09, 0x6A, 0xD5, 0x30, 0x36,
  0xA5, 0x38, 0xBF, 0x40, 0xA3, 0x9E, 0x81, 0xF3, 0xD7, 0xFB, 0x7C, 0xE3,
  0x39, 0x82, 0x9B, 0x2F, 0xFF, 0x87, 0x34, 0x8E, 0x43, 0x44, 0xC4, 0xDE,
  0xE9, 0xCB, 0x54, 0x7B, 0x94, 0x32, 0xA6, 0xC2, 0x23, 0x3D, 0xEE, 0x4C,
  0x95, 0x0B, 0x42, 0xFA, 0xC3, 0x4E, 0x08, 0x2E, 0xA1, 0x66, 0x28, 0xD9,
  0x24, 0xB2, 0x76, 0x5B, 0xA2, 0x49, 0x6D, 0x8B, 0xD1, 0x25, 0x72, 0xF8,
  0xF6, 0x64, 0x86, 0x68, 0x98, 0x16, 0xD4, 0xA4, 0x5C, 0xCC, 0x5D, 0x65,
  0xB6, 0x92, 0x6C, 0x70, 0x48, 0x50, 0xFD, 0xED, 0xB9, 0xDA, 0x5E, 0x15,
  0x46, 0x57, 0xA7, 0x8D, 0x9D, 0x84, 0x90, 0xD8, 0xAB, 0x00, 0x8C, 0xBC,
  0xD3, 0x0A, 0xF7, 0xE4, 0x58, 0x05, 0xB8, 0xB3, 0x45, 0x06, 0xD0, 0x2C,
  0x1E, 0x8F, 0xCA, 0x3F, 0x0F, 0x02, 0xC1, 0xAF, 0xBD, 0x03, 0x01, 0x13,
  0x8A, 0x6B, 0x3A, 0x91, 0x11, 0x41, 0x4F, 0x67, 0xDC, 0xEA, 0x97, 0xF2,
  0xCF, 0xCE, 0xF0, 0xB4, 0xE6, 0x73, 0x96, 0xAC, 0x74, 0x22, 0xE7, 0xAD,
  0x35, 0x85, 0xE2, 0xF9, 0x37, 0xE8, 0x1C, 0x75, 0xDF, 0x6E, 0x47, 0xF1,
  0x1A, 0x71, 0x1D, 0x29, 0xC5, 0x89, 0x6F, 0xB7, 0x62, 0x0E, 0xAA, 0x18,
  0xBE, 0x1B, 0xFC, 0x56, 0x3E, 0x4B, 0xC6, 0xD2, 0x79, 0x20, 0x9A, 0xDB,
  0xC0, 0xFE, 0x78, 0xCD, 0x5A, 0xF4, 0x1F, 0xDD, 0xA8, 0x33, 0x88, 0x07,
  0xC7, 0x31, 0xB1, 0x12, 0x10, 0x59, 0x27, 0x80, 0xEC, 0x5F, 0x60, 0x51,
  0x7F, 0xA9, 0x19, 0xB5, 0x4A, 0x0D, 0x2D, 0xE5, 0x7A, 0x9F, 0x93, 0xC9,
  0x9C, 0xEF, 0xA0, 0xE0, 0x3B, 0x4D, 0xAE, 0x2A, 0xF5, 0xB0, 0xC8, 0xEB,
  0xBB, 0x3C, 0x83, 0x53, 0x99, 0x61, 0x17, 0x2B, 0x04, 0x7E, 0xBA, 0x77,
  0xD6, 0x26, 0xE1, 0x69, 0x14, 0x63, 0x55, 0x21, 0x0C, 0x7D };



const unsigned char mul02[256] = { 0x00, 0x02, 0x04, 0x06, 0x08, 0x0a, 0x0c,
  0x0e, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24,
  0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c,
  0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54,
  0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c,
  0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84,
  0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c,
  0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4,
  0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc,
  0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 0xda, 0xdc, 0xde, 0xe0, 0xe2, 0xe4,
  0xe6, 0xe8, 0xea, 0xec, 0xee, 0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 0xfc,
  0xfe, 0x1b, 0x19, 0x1f, 0x1d, 0x13, 0x11, 0x17, 0x15, 0x0b, 0x09, 0x0f,
  0x0d, 0x03, 0x01, 0x07, 0x05, 0x3b, 0x39, 0x3f, 0x3d, 0x33, 0x31, 0x37,
  0x35, 0x2b, 0x29, 0x2f, 0x2d, 0x23, 0x21, 0x27, 0x25, 0x5b, 0x59, 0x5f,
  0x5d, 0x53, 0x51, 0x57, 0x55, 0x4b, 0x49, 0x4f, 0x4d, 0x43, 0x41, 0x47,
  0x45, 0x7b, 0x79, 0x7f, 0x7d, 0x73, 0x71, 0x77, 0x75, 0x6b, 0x69, 0x6f,
  0x6d, 0x63, 0x61, 0x67, 0x65, 0x9b, 0x99, 0x9f, 0x9d, 0x93, 0x91, 0x97,
  0x95, 0x8b, 0x89, 0x8f, 0x8d, 0x83, 0x81, 0x87, 0x85, 0xbb, 0xb9, 0xbf,
  0xbd, 0xb3, 0xb1, 0xb7, 0xb5, 0xab, 0xa9, 0xaf, 0xad, 0xa3, 0xa1, 0xa7,
  0xa5, 0xdb, 0xd9, 0xdf, 0xdd, 0xd3, 0xd1, 0xd7, 0xd5, 0xcb, 0xc9, 0xcf,
  0xcd, 0xc3, 0xc1, 0xc7, 0xc5, 0xfb, 0xf9, 0xff, 0xfd, 0xf3, 0xf1, 0xf7,
  0xf5, 0xeb, 0xe9, 0xef, 0xed, 0xe3, 0xe1, 0xe7, 0xe5 };

const unsigned char mul03[256] = { 0x00, 0x03, 0x06, 0x05, 0x0c, 0x0f, 0x0a,
  0x09, 0x18, 0x1b, 0x1e, 0x1d, 0x14, 0x17, 0x12, 0x11, 0x30, 0x33, 0x36,
  0x35, 0x3c, 0x3f, 0x3a, 0x39, 0x28, 0x2b, 0x2e, 0x2d, 0x24, 0x27, 0x22,
  0x21, 0x60, 0x63, 0x66, 0x65, 0x6c, 0x6f, 0x6a, 0x69, 0x78, 0x7b, 0x7e,
  0x7d, 0x74, 0x77, 0x72, 0x71, 0x50, 0x53, 0x56, 0x55, 0x5c, 0x5f, 0x5a,
  0x59, 0x48, 0x4b, 0x4e, 0x4d, 0x44, 0x47, 0x42, 0x41, 0xc0, 0xc3, 0xc6,
  0xc5, 0xcc, 0xcf, 0xca, 0xc9, 0xd8, 0xdb, 0xde, 0xdd, 0xd4, 0xd7, 0xd2,
  0xd1, 0xf0, 0xf3, 0xf6, 0xf5, 0xfc, 0xff, 0xfa, 0xf9, 0xe8, 0xeb, 0xee,
  0xed, 0xe4, 0xe7, 0xe2, 0xe1, 0xa0, 0xa3, 0xa6, 0xa5, 0xac, 0xaf, 0xaa,
  0xa9, 0xb8, 0xbb, 0xbe, 0xbd, 0xb4, 0xb7, 0xb2, 0xb1, 0x90, 0x93, 0x96,
  0x95, 0x9c, 0x9f, 0x9a, 0x99, 0x88, 0x8b, 0x8e, 0x8d, 0x84, 0x87, 0x82,
  0x81, 0x9b, 0x98, 0x9d, 0x9e, 0x97, 0x94, 0x91, 0x92, 0x83, 0x80, 0x85,
  0x86, 0x8f, 0x8c, 0x89, 0x8a, 0xab, 0xa8, 0xad, 0xae, 0xa7, 0xa4, 0xa1,
  0xa2, 0xb3, 0xb0, 0xb5, 0xb6, 0xbf, 0xbc, 0xb9, 0xba, 0xfb, 0xf8, 0xfd,
  0xfe, 0xf7, 0xf4, 0xf1, 0xf2, 0xe3, 0xe0, 0xe5, 0xe6, 0xef, 0xec, 0xe9,
  0xea, 0xcb, 0xc8, 0xcd, 0xce, 0xc7, 0xc4, 0xc1, 0xc2, 0xd3, 0xd0, 0xd5,
  0xd6, 0xdf, 0xdc, 0xd9, 0xda, 0x5b, 0x58, 0x5d, 0x5e, 0x57, 0x54, 0x51,
  0x52, 0x43, 0x40, 0x45, 0x46, 0x4f, 0x4c, 0x49, 0x4a, 0x6b, 0x68, 0x6d,
  0x6e, 0x67, 0x64, 0x61, 0x62, 0x73, 0x70, 0x75, 0x76, 0x7f, 0x7c, 0x79,
  0x7a, 0x3b, 0x38, 0x3d, 0x3e, 0x37, 0x34, 0x31, 0x32, 0x23, 0x20, 0x25,
  0x26, 0x2f, 0x2c, 0x29, 0x2a, 0x0b, 0x08, 0x0d, 0x0e, 0x07, 0x04, 0x01,
  0x02, 0x13, 0x10, 0x15, 0x16, 0x1f, 0x1c, 0x19, 0x1a };

const unsigned char mul09[256] = { 0x00, 0x09, 0x12, 0x1b, 0x24, 0x2d, 0x36,
  0x3f, 0x48, 0x41, 0x5a, 0x53, 0x6c, 0x65, 0x7e, 0x77, 0x90, 0x99, 0x82,
  0x8b, 0xb4, 0xbd, 0xa6, 0xaf, 0xd8, 0xd1, 0xca, 0xc3, 0xfc, 0xf5, 0xee,
  0xe7, 0x3b, 0x32, 0x29, 0x20, 0x1f, 0x16, 0x0d, 0x04, 0x73, 0x7a, 0x61,
  0x68, 0x57, 0x5e, 0x45, 0x4c, 0xab, 0xa2, 0xb9, 0xb0, 0x8f, 0x86, 0x9d,
  0x94, 0xe3, 0xea, 0xf1, 0xf8, 0xc7, 0xce, 0xd5, 0xdc, 0x76, 0x7f, 0x64,
  0x6d, 0x52, 0x5b, 0x40, 0x49, 0x3e, 0x37, 0x2c, 0x25, 0x1a, 0x13, 0x08,
  0x01, 0xe6, 0xef, 0xf4, 0xfd, 0xc2, 0xcb, 0xd0, 0xd9, 0xae, 0xa7, 0xbc,
  0xb5, 0x8a, 0x83, 0x98, 0x91, 0x4d, 0x44, 0x5f, 0x56, 0x69, 0x60, 0x7b,
  0x72, 0x05, 0x0c, 0x17, 0x1e, 0x21, 0x28, 0x33, 0x3a, 0xdd, 0xd4, 0xcf,
  0xc6, 0xf9, 0xf0, 0xeb, 0xe2, 0x95, 0x9c, 0x87, 0x8e, 0xb1, 0xb8, 0xa3,
  0xaa, 0xec, 0xe5, 0xfe, 0xf7, 0xc8, 0xc1, 0xda, 0xd3, 0xa4, 0xad, 0xb6,
  0xbf, 0x80, 0x89, 0x92, 0x9b, 0x7c, 0x75, 0x6e, 0x67, 0x58, 0x51, 0x4a,
  0x43, 0x34, 0x3d, 0x26, 0x2f, 0x10, 0x19, 0x02, 0x0b, 0xd7, 0xde, 0xc5,
  0xcc, 0xf3, 0xfa, 0xe1, 0xe8, 0x9f, 0x96, 0x8d, 0x84, 0xbb, 0xb2, 0xa9,
  0xa0, 0x47, 0x4e, 0x55, 0x5c, 0x63, 0x6a, 0x71, 0x78, 0x0f, 0x06, 0x1d,
  0x14, 0x2b, 0x22, 0x39, 0x30, 0x9a, 0x93, 0x88, 0x81, 0xbe, 0xb7, 0xac,
  0xa5, 0xd2, 0xdb, 0xc0, 0xc9, 0xf6, 0xff, 0xe4, 0xed, 0x0a, 0x03, 0x18,
  0x11, 0x2e, 0x27, 0x3c, 0x35, 0x42, 0x4b, 0x50, 0x59, 0x66, 0x6f, 0x74,
  0x7d, 0xa1, 0xa8, 0xb3, 0xba, 0x85, 0x8c, 0x97, 0x9e, 0xe9, 0xe0, 0xfb,
  0xf2, 0xcd, 0xc4, 0xdf, 0xd6, 0x31, 0x38, 0x23, 0x2a, 0x15, 0x1c, 0x07,
  0x0e, 0x79, 0x70, 0x6b, 0x62, 0x5d, 0x54, 0x4f, 0x46 };

const unsigned char mul11[256] = { 0x00, 0x0b, 0x16, 0x1d, 0x2c, 0x27, 0x3a,
  0x31, 0x58, 0x53, 0x4e, 0x45, 0x74, 0x7f, 0x62, 0x69, 0xb0, 0xbb, 0xa6,
  0xad, 0x9c, 0x97, 0x8a, 0x81, 0xe8, 0xe3, 0xfe, 0xf5, 0xc4, 0xcf, 0xd2,
  0xd9, 0x7b, 0x70, 0x6d, 0x66, 0x57, 0x5c, 0x41, 0x4a, 0x23, 0x28, 0x35,
  0x3e, 0x0f, 0x04, 0x19, 0x12, 0xcb, 0xc0, 0xdd, 0xd6, 0xe7, 0xec, 0xf1,
  0xfa, 0x93, 0x98, 0x85, 0x8e, 0xbf, 0xb4, 0xa9, 0xa2, 0xf6, 0xfd, 0xe0,
  0xeb, 0xda, 0xd1, 0xcc, 0xc7, 0xae, 0xa5, 0xb8, 0xb3, 0x82, 0x89, 0x94,
  0x9f, 0x46, 0x4d, 0x50, 0x5b, 0x6a, 0x61, 0x7c, 0x77, 0x1e, 0x15, 0x08,
  0x03, 0x32, 0x39, 0x24, 0x2f, 0x8d, 0x86, 0x9b, 0x90, 0xa1, 0xaa, 0xb7,
  0xbc, 0xd5, 0xde, 0xc3, 0xc8, 0xf9, 0xf2, 0xef, 0xe4, 0x3d, 0x36, 0x2b,
  0x20, 0x11, 0x1a, 0x07, 0x0c, 0x65, 0x6e, 0x73, 0x78, 0x49, 0x42, 0x5f,
  0x54, 0xf7, 0xfc, 0xe1, 0xea, 0xdb, 0xd0, 0xcd, 0xc6, 0xaf, 0xa4, 0xb9,
  0xb2, 0x83, 0x88, 0x95, 0x9e, 0x47, 0x4c, 0x51, 0x5a, 0x6b, 0x60, 0x7d,
  0x76, 0x1f, 0x14, 0x09, 0x02, 0x33, 0x38, 0x25, 0x2e, 0x8c, 0x87, 0x9a,
  0x91, 0xa0, 0xab, 0xb6, 0xbd, 0xd4, 0xdf, 0xc2, 0xc9, 0xf8, 0xf3, 0xee,
  0xe5, 0x3c, 0x37, 0x2a, 0x21, 0x10, 0x1b, 0x06, 0x0d, 0x64, 0x6f, 0x72,
  0x79, 0x48, 0x43, 0x5e, 0x55, 0x01, 0x0a, 0x17, 0x1c, 0x2d, 0x26, 0x3b,
  0x30, 0x59, 0x52, 0x4f, 0x44, 0x75, 0x7e, 0x63, 0x68, 0xb1, 0xba, 0xa7,
  0xac, 0x9d, 0x96, 0x8b, 0x80, 0xe9, 0xe2, 0xff, 0xf4, 0xc5, 0xce, 0xd3,
  0xd8, 0x7a, 0x71, 0x6c, 0x67, 0x56, 0x5d, 0x40, 0x4b, 0x22, 0x29, 0x34,
  0x3f, 0x0e, 0x05, 0x18, 0x13, 0xca, 0xc1, 0xdc, 0xd7, 0xe6, 0xed, 0xf0,
  0xfb, 0x92, 0x99, 0x84, 0x8f, 0xbe, 0xb5, 0xa8, 0xa3 };

const unsigned char mul13[256] = { 0x00, 0x0d, 0x1a, 0x17, 0x34, 0x39, 0x2e,
  0x23, 0x68, 0x65, 0x72, 0x7f, 0x5c, 0x51, 0x46, 0x4b, 0xd0, 0xdd, 0xca,
  0xc7, 0xe4, 0xe9, 0xfe, 0xf3, 0xb8, 0xb5, 0xa2, 0xaf, 0x8c, 0x81, 0x96,
  0x9b, 0xbb, 0xb6, 0xa1, 0xac, 0x8f, 0x82, 0x95, 0x98, 0xd3, 0xde, 0xc9,
  0xc4, 0xe7, 0xea, 0xfd, 0xf0, 0x6b, 0x66, 0x71, 0x7c, 0x5f, 0x52, 0x45,
  0x48, 0x03, 0x0e, 0x19, 0x14, 0x37, 0x3a, 0x2d, 0x20, 0x6d, 0x60, 0x77,
  0x7a, 0x59, 0x54, 0x43, 0x4e, 0x05, 0x08, 0x1f, 0x12, 0x31, 0x3c, 0x2b,
  0x26, 0xbd, 0xb0, 0xa7, 0xaa, 0x89, 0x84, 0x93, 0x9e, 0xd5, 0xd8, 0xcf,
  0xc2, 0xe1, 0xec, 0xfb, 0xf6, 0xd6, 0xdb, 0xcc, 0xc1, 0xe2, 0xef, 0xf8,
  0xf5, 0xbe, 0xb3, 0xa4, 0xa9, 0x8a, 0x87, 0x90, 0x9d, 0x06, 0x0b, 0x1c,
  0x11, 0x32, 0x3f, 0x28, 0x25, 0x6e, 0x63, 0x74, 0x79, 0x5a, 0x57, 0x40,
  0x4d, 0xda, 0xd7, 0xc0, 0xcd, 0xee, 0xe3, 0xf4, 0xf9, 0xb2, 0xbf, 0xa8,
  0xa5, 0x86, 0x8b, 0x9c, 0x91, 0x0a, 0x07, 0x10, 0x1d, 0x3e, 0x33, 0x24,
  0x29, 0x62, 0x6f, 0x78, 0x75, 0x56, 0x5b, 0x4c, 0x41, 0x61, 0x6c, 0x7b,
  0x76, 0x55, 0x58, 0x4f, 0x42, 0x09, 0x04, 0x13, 0x1e, 0x3d, 0x30, 0x27,
  0x2a, 0xb1, 0xbc, 0xab, 0xa6, 0x85, 0x88, 0x9f, 0x92, 0xd9, 0xd4, 0xc3,
  0xce, 0xed, 0xe0, 0xf7, 0xfa, 0xb7, 0xba, 0xad, 0xa0, 0x83, 0x8e, 0x99,
  0x94, 0xdf, 0xd2, 0xc5, 0xc8, 0xeb, 0xe6, 0xf1, 0xfc, 0x67, 0x6a, 0x7d,
  0x70, 0x53, 0x5e, 0x49, 0x44, 0x0f, 0x02, 0x15, 0x18, 0x3b, 0x36, 0x21,
  0x2c, 0x0c, 0x01, 0x16, 0x1b, 0x38, 0x35, 0x22, 0x2f, 0x64, 0x69, 0x7e,
  0x73, 0x50, 0x5d, 0x4a, 0x47, 0xdc, 0xd1, 0xc6, 0xcb, 0xe8, 0xe5, 0xf2,
  0xff, 0xb4, 0xb9, 0xae, 0xa3, 0x80, 0x8d, 0x9a, 0x97 };

const unsigned char mul14[256] = { 0x00, 0x0e, 0x1c, 0x12, 0x38, 0x36, 0x24,
  0x2a, 0x70, 0x7e, 0x6c, 0x62, 0x48, 0x46, 0x54, 0x5a, 0xe0, 0xee, 0xfc,
  0xf2, 0xd8, 0xd6, 0xc4, 0xca, 0x90, 0x9e, 0x8c, 0x82, 0xa8, 0xa6, 0xb4,
  0xba, 0xdb, 0xd5, 0xc7, 0xc9, 0xe3, 0xed, 0xff, 0xf1, 0xab, 0xa5, 0xb7,
  0xb9, 0x93, 0x9d, 0x8f, 0x81, 0x3b, 0x35, 0x27, 0x29, 0x03, 0x0d, 0x1f,
  0x11, 0x4b, 0x45, 0x57, 0x59, 0x73, 0x7d, 0x6f, 0x61, 0xad, 0xa3, 0xb1,
  0xbf, 0x95, 0x9b, 0x89, 0x87, 0xdd, 0xd3, 0xc1, 0xcf, 0xe5, 0xeb, 0xf9,
  0xf7, 0x4d, 0x43, 0x51, 0x5f, 0x75, 0x7b, 0x69, 0x67, 0x3d, 0x33, 0x21,
  0x2f, 0x05, 0x0b, 0x19, 0x17, 0x76, 0x78, 0x6a, 0x64, 0x4e, 0x40, 0x52,
  0x5c, 0x06, 0x08, 0x1a, 0x14, 0x3e, 0x30, 0x22, 0x2c, 0x96, 0x98, 0x8a,
  0x84, 0xae, 0xa0, 0xb2, 0xbc, 0xe6, 0xe8, 0xfa, 0xf4, 0xde, 0xd0, 0xc2,
  0xcc, 0x41, 0x4f, 0x5d, 0x53, 0x79, 0x77, 0x65, 0x6b, 0x31, 0x3f, 0x2d,
  0x23, 0x09, 0x07, 0x15, 0x1b, 0xa1, 0xaf, 0xbd, 0xb3, 0x99, 0x97, 0x85,
  0x8b, 0xd1, 0xdf, 0xcd, 0xc3, 0xe9, 0xe7, 0xf5, 0xfb, 0x9a, 0x94, 0x86,
  0x88, 0xa2, 0xac, 0xbe, 0xb0, 0xea, 0xe4, 0xf6, 0xf8, 0xd2, 0xdc, 0xce,
  0xc0, 0x7a, 0x74, 0x66, 0x68, 0x42, 0x4c, 0x5e, 0x50, 0x0a, 0x04, 0x16,
  0x18, 0x32, 0x3c, 0x2e, 0x20, 0xec, 0xe2, 0xf0, 0xfe, 0xd4, 0xda, 0xc8,
  0xc6, 0x9c, 0x92, 0x80, 0x8e, 0xa4, 0xaa, 0xb8, 0xb6, 0x0c, 0x02, 0x10,
  0x1e, 0x34, 0x3a, 0x28, 0x26, 0x7c, 0x72, 0x60, 0x6e, 0x44, 0x4a, 0x58,
  0x56, 0x37, 0x39, 0x2b, 0x25, 0x0f, 0x01, 0x13, 0x1d, 0x47, 0x49, 0x5b,
  0x55, 0x7f, 0x71, 0x63, 0x6d, 0xd7, 0xd9, 0xcb, 0xc5, 0xef, 0xe1, 0xf3,
  0xfd, 0xa7, 0xa9, 0xbb, 0xb5, 0x9f, 0x91, 0x83, 0x8d };
# 3 "source/AESfunctions.cpp" 2

void SubBytes(unsigned char* state) {
_ssdm_InlineSelf(2, "");
 for (unsigned short i = 0; i < stt_lng; i++) {
_ssdm_Unroll(0,0,0, "");
 state[i] = s_box[state[i]];
 }
}

void InvSubBytes(unsigned char* state) {
_ssdm_InlineSelf(2, "");
 for (unsigned short i = 0; i < stt_lng; i++) {
_ssdm_Unroll(0,0,0, "");
 state[i] = inverted_s_box[state[i]];
 }
}

void ShiftRows(unsigned char* state) {
_ssdm_InlineSelf(2, "");
 unsigned char tmp_state[stt_lng];
 tmp_state[0] = state[0];
 tmp_state[1] = state[5];
 tmp_state[2] = state[10];
 tmp_state[3] = state[15];

 tmp_state[4] = state[4];
 tmp_state[5] = state[9];
 tmp_state[6] = state[14];
 tmp_state[7] = state[3];

 tmp_state[8] = state[8];
 tmp_state[9] = state[13];
 tmp_state[10] = state[2];
 tmp_state[11] = state[7];

 tmp_state[12] = state[12];
 tmp_state[13] = state[1];
 tmp_state[14] = state[6];
 tmp_state[15] = state[11];
 for (unsigned short i = 0; i < stt_lng; i++) {
  state[i] = tmp_state[i];
 }
}

void InvShiftRows(unsigned char* state) {
_ssdm_InlineSelf(2, "");
 unsigned char tmp_state[stt_lng];
 tmp_state[0] = state[0];
 tmp_state[1] = state[13];
 tmp_state[2] = state[10];
 tmp_state[3] = state[7];

 tmp_state[4] = state[4];
 tmp_state[5] = state[1];
 tmp_state[6] = state[14];
 tmp_state[7] = state[11];

 tmp_state[8] = state[8];
 tmp_state[9] = state[5];
 tmp_state[10] = state[2];
 tmp_state[11] = state[15];

 tmp_state[12] = state[12];
 tmp_state[13] = state[9];
 tmp_state[14] = state[6];
 tmp_state[15] = state[3];
 for (unsigned short i = 0; i < stt_lng; i++) {
  state[i] = tmp_state[i];
 }
}

void MixColumns(unsigned char* state) {
_ssdm_InlineSelf(2, "");
 unsigned char tmp_state[stt_lng];
 tmp_state[0] = mul02[state[0]] ^ mul03[state[1]] ^ state[2] ^ state[3];
 tmp_state[1] = state[0] ^ mul02[state[1]] ^ mul03[state[2]] ^ state[3];
 tmp_state[2] = state[0] ^ state[1] ^ mul02[state[2]] ^ mul03[state[3]];
 tmp_state[3] = mul03[state[0]] ^ state[1] ^ state[2] ^ mul02[state[3]];

 tmp_state[4] = mul02[state[4]] ^ mul03[state[5]] ^ state[6] ^ state[7];
 tmp_state[5] = state[4] ^ mul02[state[5]] ^ mul03[state[6]] ^ state[7];
 tmp_state[6] = state[4] ^ state[5] ^ mul02[state[6]] ^ mul03[state[7]];
 tmp_state[7] = mul03[state[4]] ^ state[5] ^ state[6] ^ mul02[state[7]];

 tmp_state[8] = mul02[state[8]] ^ mul03[state[9]] ^ state[10] ^ state[11];
 tmp_state[9] = state[8] ^ mul02[state[9]] ^ mul03[state[10]] ^ state[11];
 tmp_state[10] = state[8] ^ state[9] ^ mul02[state[10]] ^ mul03[state[11]];
 tmp_state[11] = mul03[state[8]] ^ state[9] ^ state[10] ^ mul02[state[11]];

 tmp_state[12] = mul02[state[12]] ^ mul03[state[13]] ^ state[14] ^ state[15];
 tmp_state[13] = state[12] ^ mul02[state[13]] ^ mul03[state[14]] ^ state[15];
 tmp_state[14] = state[12] ^ state[13] ^ mul02[state[14]] ^ mul03[state[15]];
 tmp_state[15] = mul03[state[12]] ^ state[13] ^ state[14] ^ mul02[state[15]];
 for (unsigned short i = 0; i < stt_lng; i++) {
  state[i] = tmp_state[i];
 }
}

void InvMixColumns(unsigned char* state) {
_ssdm_InlineSelf(2, "");
 unsigned char tmp_state[stt_lng];
 tmp_state[0] = mul14[state[0]] ^ mul11[state[1]] ^ mul13[state[2]]
   ^ mul09[state[3]];
 tmp_state[1] = mul09[state[0]] ^ mul14[state[1]] ^ mul11[state[2]]
   ^ mul13[state[3]];
 tmp_state[2] = mul13[state[0]] ^ mul09[state[1]] ^ mul14[state[2]]
   ^ mul11[state[3]];
 tmp_state[3] = mul11[state[0]] ^ mul13[state[1]] ^ mul09[state[2]]
   ^ mul14[state[3]];

 tmp_state[4] = mul14[state[4]] ^ mul11[state[5]] ^ mul13[state[6]]
   ^ mul09[state[7]];
 tmp_state[5] = mul09[state[4]] ^ mul14[state[5]] ^ mul11[state[6]]
   ^ mul13[state[7]];
 tmp_state[6] = mul13[state[4]] ^ mul09[state[5]] ^ mul14[state[6]]
   ^ mul11[state[7]];
 tmp_state[7] = mul11[state[4]] ^ mul13[state[5]] ^ mul09[state[6]]
   ^ mul14[state[7]];

 tmp_state[8] = mul14[state[8]] ^ mul11[state[9]] ^ mul13[state[10]]
   ^ mul09[state[11]];
 tmp_state[9] = mul09[state[8]] ^ mul14[state[9]] ^ mul11[state[10]]
   ^ mul13[state[11]];
 tmp_state[10] = mul13[state[8]] ^ mul09[state[9]] ^ mul14[state[10]]
   ^ mul11[state[11]];
 tmp_state[11] = mul11[state[8]] ^ mul13[state[9]] ^ mul09[state[10]]
   ^ mul14[state[11]];

 tmp_state[12] = mul14[state[12]] ^ mul11[state[13]] ^ mul13[state[14]]
   ^ mul09[state[15]];
 tmp_state[13] = mul09[state[12]] ^ mul14[state[13]] ^ mul11[state[14]]
   ^ mul13[state[15]];
 tmp_state[14] = mul13[state[12]] ^ mul09[state[13]] ^ mul14[state[14]]
   ^ mul11[state[15]];
 tmp_state[15] = mul11[state[12]] ^ mul13[state[13]] ^ mul09[state[14]]
   ^ mul14[state[15]];
 for (unsigned short i = 0; i < stt_lng; i++) {
  state[i] = tmp_state[i];
 }
}

void AddRoundKey(unsigned char* state, unsigned char* roundKey) {
_ssdm_InlineSelf(2, "");
 for (unsigned short i = 0; i < stt_lng; i++) {
_ssdm_Unroll(0,0,0, "");
 state[i] ^= roundKey[i];
 }
}


void AES_Encrypt(unsigned char plaintext[stt_lng],
  unsigned char expandedKey[ExtdCipherKeyLenghth_max], unsigned short Nr,
  unsigned char ciphertext[stt_lng]) {_ssdm_SpecArrayDimSize(ciphertext,stt_lng);_ssdm_SpecArrayDimSize(plaintext,stt_lng);_ssdm_SpecArrayDimSize(expandedKey,ExtdCipherKeyLenghth_max);
_ssdm_op_SpecInterface(plaintext, "axis", 1, 1, "both", 0, 0, "", "", "", 0, 0, 0, 0, "", "");
_ssdm_op_SpecInterface(expandedKey, "axis", 1, 1, "both", 0, 0, "", "", "", 0, 0, 0, 0, "", "");
_ssdm_op_SpecInterface(ciphertext, "axis", 1, 1, "both", 0, 0, "", "", "", 0, 0, 0, 0, "", "");

_ssdm_InlineRegion(0, "");
_ssdm_op_SpecResourceLimit(1, "", "", "AddRoundKey", "");
_ssdm_SpecArrayMap( s_box, "cipher", -1, "HORIZONTAL", "");
_ssdm_SpecArrayMap( mul02, "cipher", -1, "HORIZONTAL", "");
_ssdm_SpecArrayMap( mul03, "cipher", -1, "HORIZONTAL", "");


 unsigned char state[stt_lng];
 L_copy: for (unsigned short i = 0; i < stt_lng; i++) {
_ssdm_op_SpecPipeline(-1, 1, 1, 0, "");
 state[i] = plaintext[i];
 }


 AddRoundKey(state, expandedKey + (stt_lng * 0));

 L_rounds: for (unsigned short i = 0; i < Nr; i++) {

  SubBytes(state);
  ShiftRows(state);
  if (i != (Nr - 1)) {
   MixColumns(state);
  }
  AddRoundKey(state, expandedKey + (stt_lng * (i + 1)));
 }


 for (unsigned short i = 0; i < stt_lng; i++) {
_ssdm_Unroll(0,0,0, "");
 ciphertext[i] = state[i];
 }
}


void AES_Decrypt(unsigned char ciphertext[stt_lng],
  unsigned char expandedKey[ExtdCipherKeyLenghth_max], unsigned short Nr,
  unsigned char plaintext[stt_lng]) {_ssdm_SpecArrayDimSize(ciphertext,stt_lng);_ssdm_SpecArrayDimSize(plaintext,stt_lng);_ssdm_SpecArrayDimSize(expandedKey,ExtdCipherKeyLenghth_max);
_ssdm_op_SpecInterface(ciphertext, "axis", 1, 1, "both", 0, 0, "", "", "", 0, 0, 0, 0, "", "");
_ssdm_op_SpecInterface(expandedKey, "axis", 1, 1, "both", 0, 0, "", "", "", 0, 0, 0, 0, "", "");
_ssdm_op_SpecInterface(plaintext, "axis", 1, 1, "both", 0, 0, "", "", "", 0, 0, 0, 0, "", "");

_ssdm_InlineRegion(0, "");
_ssdm_op_SpecResourceLimit(1, "", "", "AddRoundKey", "");
_ssdm_SpecArrayMap( inverted_s_box, "inverse_cipher", -1, "HORIZONTAL", "");
_ssdm_SpecArrayMap( mul09, "inverse_cipher", -1, "HORIZONTAL", "");
_ssdm_SpecArrayMap( mul11, "inverse_cipher", -1, "HORIZONTAL", "");
_ssdm_SpecArrayMap( mul13, "inverse_cipher", -1, "HORIZONTAL", "");
_ssdm_SpecArrayMap( mul14, "inverse_cipher", -1, "HORIZONTAL", "");


 unsigned char state[stt_lng];
 L_copy: for (unsigned short i = 0; i < stt_lng; i++) {
_ssdm_op_SpecPipeline(-1, 1, 1, 0, "");
 state[i] = ciphertext[i];
 }

 AddRoundKey(state, expandedKey + (stt_lng * Nr));

 L_rounds: for (unsigned short i = 0; i < Nr; i++) {

  InvShiftRows(state);
  InvSubBytes(state);
  AddRoundKey(state, expandedKey + (stt_lng * (Nr - i - 1)));
  if (i != (Nr - 1)) {
   InvMixColumns(state);
  }
 }


 for (unsigned short i = 0; i < stt_lng; i++) {
_ssdm_Unroll(0,0,0, "");
 plaintext[i] = state[i];
 }
}

class ssdm_global_array_AESfunctionspp0cppaplinecpp {
 public:
   inline __attribute__((always_inline)) ssdm_global_array_AESfunctionspp0cppaplinecpp() {
   _ssdm_SpecConstant(&Nb);
   _ssdm_SpecConstant(&rows);
   _ssdm_SpecConstant(&stt_lng);
   _ssdm_SpecConstant(&Nk_max);
   _ssdm_SpecConstant(&CipherKeyLenghth_max);
   _ssdm_SpecConstant(&Nr_max);
   _ssdm_SpecConstant(&ExtdCipherKeyLenghth_max);
   _ssdm_SpecConstant(s_box);
   _ssdm_SpecConstant(inverted_s_box);
   _ssdm_SpecConstant(mul02);
   _ssdm_SpecConstant(mul03);
   _ssdm_SpecConstant(mul09);
   _ssdm_SpecConstant(mul11);
   _ssdm_SpecConstant(mul13);
   _ssdm_SpecConstant(mul14);
  }
};
static ssdm_global_array_AESfunctionspp0cppaplinecpp ssdm_global_array_ins;
