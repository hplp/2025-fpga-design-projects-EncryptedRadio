# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 23
set hasByteEnable 0
set MemName AES_Full_InvMixColumns_mul14_ROM_AUTO_1R
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 8
set AddrRange 256
set AddrWd 8
set impl_style auto
set TrueReset 0
set IsROM 1
set ROMData { "00000000" "00001110" "00011100" "00010010" "00111000" "00110110" "00100100" "00101010" "01110000" "01111110" "01101100" "01100010" "01001000" "01000110" "01010100" "01011010" "11100000" "11101110" "11111100" "11110010" "11011000" "11010110" "11000100" "11001010" "10010000" "10011110" "10001100" "10000010" "10101000" "10100110" "10110100" "10111010" "11011011" "11010101" "11000111" "11001001" "11100011" "11101101" "11111111" "11110001" "10101011" "10100101" "10110111" "10111001" "10010011" "10011101" "10001111" "10000001" "00111011" "00110101" "00100111" "00101001" "00000011" "00001101" "00011111" "00010001" "01001011" "01000101" "01010111" "01011001" "01110011" "01111101" "01101111" "01100001" "10101101" "10100011" "10110001" "10111111" "10010101" "10011011" "10001001" "10000111" "11011101" "11010011" "11000001" "11001111" "11100101" "11101011" "11111001" "11110111" "01001101" "01000011" "01010001" "01011111" "01110101" "01111011" "01101001" "01100111" "00111101" "00110011" "00100001" "00101111" "00000101" "00001011" "00011001" "00010111" "01110110" "01111000" "01101010" "01100100" "01001110" "01000000" "01010010" "01011100" "00000110" "00001000" "00011010" "00010100" "00111110" "00110000" "00100010" "00101100" "10010110" "10011000" "10001010" "10000100" "10101110" "10100000" "10110010" "10111100" "11100110" "11101000" "11111010" "11110100" "11011110" "11010000" "11000010" "11001100" "01000001" "01001111" "01011101" "01010011" "01111001" "01110111" "01100101" "01101011" "00110001" "00111111" "00101101" "00100011" "00001001" "00000111" "00010101" "00011011" "10100001" "10101111" "10111101" "10110011" "10011001" "10010111" "10000101" "10001011" "11010001" "11011111" "11001101" "11000011" "11101001" "11100111" "11110101" "11111011" "10011010" "10010100" "10000110" "10001000" "10100010" "10101100" "10111110" "10110000" "11101010" "11100100" "11110110" "11111000" "11010010" "11011100" "11001110" "11000000" "01111010" "01110100" "01100110" "01101000" "01000010" "01001100" "01011110" "01010000" "00001010" "00000100" "00010110" "00011000" "00110010" "00111100" "00101110" "00100000" "11101100" "11100010" "11110000" "11111110" "11010100" "11011010" "11001000" "11000110" "10011100" "10010010" "10000000" "10001110" "10100100" "10101010" "10111000" "10110110" "00001100" "00000010" "00010000" "00011110" "00110100" "00111010" "00101000" "00100110" "01111100" "01110010" "01100000" "01101110" "01000100" "01001010" "01011000" "01010110" "00110111" "00111001" "00101011" "00100101" "00001111" "00000001" "00010011" "00011101" "01000111" "01001001" "01011011" "01010101" "01111111" "01110001" "01100011" "01101101" "11010111" "11011001" "11001011" "11000101" "11101111" "11100001" "11110011" "11111101" "10100111" "10101001" "10111011" "10110101" "10011111" "10010001" "10000011" "10001101" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set DelayBudget 3.254
set ClkPeriod 10
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem  \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $MemName BINDTYPE {storage} TYPE {rom} IMPL {auto} LATENCY 2 ALLOW_PRAGMA 1
}


set CoreName ROM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem  \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 24
set hasByteEnable 0
set MemName AES_Full_InvMixColumns_mul11_ROM_AUTO_1R
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 8
set AddrRange 256
set AddrWd 8
set impl_style auto
set TrueReset 0
set IsROM 1
set ROMData { "00000000" "00001011" "00010110" "00011101" "00101100" "00100111" "00111010" "00110001" "01011000" "01010011" "01001110" "01000101" "01110100" "01111111" "01100010" "01101001" "10110000" "10111011" "10100110" "10101101" "10011100" "10010111" "10001010" "10000001" "11101000" "11100011" "11111110" "11110101" "11000100" "11001111" "11010010" "11011001" "01111011" "01110000" "01101101" "01100110" "01010111" "01011100" "01000001" "01001010" "00100011" "00101000" "00110101" "00111110" "00001111" "00000100" "00011001" "00010010" "11001011" "11000000" "11011101" "11010110" "11100111" "11101100" "11110001" "11111010" "10010011" "10011000" "10000101" "10001110" "10111111" "10110100" "10101001" "10100010" "11110110" "11111101" "11100000" "11101011" "11011010" "11010001" "11001100" "11000111" "10101110" "10100101" "10111000" "10110011" "10000010" "10001001" "10010100" "10011111" "01000110" "01001101" "01010000" "01011011" "01101010" "01100001" "01111100" "01110111" "00011110" "00010101" "00001000" "00000011" "00110010" "00111001" "00100100" "00101111" "10001101" "10000110" "10011011" "10010000" "10100001" "10101010" "10110111" "10111100" "11010101" "11011110" "11000011" "11001000" "11111001" "11110010" "11101111" "11100100" "00111101" "00110110" "00101011" "00100000" "00010001" "00011010" "00000111" "00001100" "01100101" "01101110" "01110011" "01111000" "01001001" "01000010" "01011111" "01010100" "11110111" "11111100" "11100001" "11101010" "11011011" "11010000" "11001101" "11000110" "10101111" "10100100" "10111001" "10110010" "10000011" "10001000" "10010101" "10011110" "01000111" "01001100" "01010001" "01011010" "01101011" "01100000" "01111101" "01110110" "00011111" "00010100" "00001001" "00000010" "00110011" "00111000" "00100101" "00101110" "10001100" "10000111" "10011010" "10010001" "10100000" "10101011" "10110110" "10111101" "11010100" "11011111" "11000010" "11001001" "11111000" "11110011" "11101110" "11100101" "00111100" "00110111" "00101010" "00100001" "00010000" "00011011" "00000110" "00001101" "01100100" "01101111" "01110010" "01111001" "01001000" "01000011" "01011110" "01010101" "00000001" "00001010" "00010111" "00011100" "00101101" "00100110" "00111011" "00110000" "01011001" "01010010" "01001111" "01000100" "01110101" "01111110" "01100011" "01101000" "10110001" "10111010" "10100111" "10101100" "10011101" "10010110" "10001011" "10000000" "11101001" "11100010" "11111111" "11110100" "11000101" "11001110" "11010011" "11011000" "01111010" "01110001" "01101100" "01100111" "01010110" "01011101" "01000000" "01001011" "00100010" "00101001" "00110100" "00111111" "00001110" "00000101" "00011000" "00010011" "11001010" "11000001" "11011100" "11010111" "11100110" "11101101" "11110000" "11111011" "10010010" "10011001" "10000100" "10001111" "10111110" "10110101" "10101000" "10100011" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set DelayBudget 3.254
set ClkPeriod 10
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem  \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $MemName BINDTYPE {storage} TYPE {rom} IMPL {auto} LATENCY 2 ALLOW_PRAGMA 1
}


set CoreName ROM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem  \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 25
set hasByteEnable 0
set MemName AES_Full_InvMixColumns_mul13_ROM_AUTO_1R
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 8
set AddrRange 256
set AddrWd 8
set impl_style auto
set TrueReset 0
set IsROM 1
set ROMData { "00000000" "00001101" "00011010" "00010111" "00110100" "00111001" "00101110" "00100011" "01101000" "01100101" "01110010" "01111111" "01011100" "01010001" "01000110" "01001011" "11010000" "11011101" "11001010" "11000111" "11100100" "11101001" "11111110" "11110011" "10111000" "10110101" "10100010" "10101111" "10001100" "10000001" "10010110" "10011011" "10111011" "10110110" "10100001" "10101100" "10001111" "10000010" "10010101" "10011000" "11010011" "11011110" "11001001" "11000100" "11100111" "11101010" "11111101" "11110000" "01101011" "01100110" "01110001" "01111100" "01011111" "01010010" "01000101" "01001000" "00000011" "00001110" "00011001" "00010100" "00110111" "00111010" "00101101" "00100000" "01101101" "01100000" "01110111" "01111010" "01011001" "01010100" "01000011" "01001110" "00000101" "00001000" "00011111" "00010010" "00110001" "00111100" "00101011" "00100110" "10111101" "10110000" "10100111" "10101010" "10001001" "10000100" "10010011" "10011110" "11010101" "11011000" "11001111" "11000010" "11100001" "11101100" "11111011" "11110110" "11010110" "11011011" "11001100" "11000001" "11100010" "11101111" "11111000" "11110101" "10111110" "10110011" "10100100" "10101001" "10001010" "10000111" "10010000" "10011101" "00000110" "00001011" "00011100" "00010001" "00110010" "00111111" "00101000" "00100101" "01101110" "01100011" "01110100" "01111001" "01011010" "01010111" "01000000" "01001101" "11011010" "11010111" "11000000" "11001101" "11101110" "11100011" "11110100" "11111001" "10110010" "10111111" "10101000" "10100101" "10000110" "10001011" "10011100" "10010001" "00001010" "00000111" "00010000" "00011101" "00111110" "00110011" "00100100" "00101001" "01100010" "01101111" "01111000" "01110101" "01010110" "01011011" "01001100" "01000001" "01100001" "01101100" "01111011" "01110110" "01010101" "01011000" "01001111" "01000010" "00001001" "00000100" "00010011" "00011110" "00111101" "00110000" "00100111" "00101010" "10110001" "10111100" "10101011" "10100110" "10000101" "10001000" "10011111" "10010010" "11011001" "11010100" "11000011" "11001110" "11101101" "11100000" "11110111" "11111010" "10110111" "10111010" "10101101" "10100000" "10000011" "10001110" "10011001" "10010100" "11011111" "11010010" "11000101" "11001000" "11101011" "11100110" "11110001" "11111100" "01100111" "01101010" "01111101" "01110000" "01010011" "01011110" "01001001" "01000100" "00001111" "00000010" "00010101" "00011000" "00111011" "00110110" "00100001" "00101100" "00001100" "00000001" "00010110" "00011011" "00111000" "00110101" "00100010" "00101111" "01100100" "01101001" "01111110" "01110011" "01010000" "01011101" "01001010" "01000111" "11011100" "11010001" "11000110" "11001011" "11101000" "11100101" "11110010" "11111111" "10110100" "10111001" "10101110" "10100011" "10000000" "10001101" "10011010" "10010111" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set DelayBudget 3.254
set ClkPeriod 10
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem  \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $MemName BINDTYPE {storage} TYPE {rom} IMPL {auto} LATENCY 2 ALLOW_PRAGMA 1
}


set CoreName ROM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem  \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 26
set hasByteEnable 0
set MemName AES_Full_InvMixColumns_mul09_ROM_AUTO_1R
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 8
set AddrRange 256
set AddrWd 8
set impl_style auto
set TrueReset 0
set IsROM 1
set ROMData { "00000000" "00001001" "00010010" "00011011" "00100100" "00101101" "00110110" "00111111" "01001000" "01000001" "01011010" "01010011" "01101100" "01100101" "01111110" "01110111" "10010000" "10011001" "10000010" "10001011" "10110100" "10111101" "10100110" "10101111" "11011000" "11010001" "11001010" "11000011" "11111100" "11110101" "11101110" "11100111" "00111011" "00110010" "00101001" "00100000" "00011111" "00010110" "00001101" "00000100" "01110011" "01111010" "01100001" "01101000" "01010111" "01011110" "01000101" "01001100" "10101011" "10100010" "10111001" "10110000" "10001111" "10000110" "10011101" "10010100" "11100011" "11101010" "11110001" "11111000" "11000111" "11001110" "11010101" "11011100" "01110110" "01111111" "01100100" "01101101" "01010010" "01011011" "01000000" "01001001" "00111110" "00110111" "00101100" "00100101" "00011010" "00010011" "00001000" "00000001" "11100110" "11101111" "11110100" "11111101" "11000010" "11001011" "11010000" "11011001" "10101110" "10100111" "10111100" "10110101" "10001010" "10000011" "10011000" "10010001" "01001101" "01000100" "01011111" "01010110" "01101001" "01100000" "01111011" "01110010" "00000101" "00001100" "00010111" "00011110" "00100001" "00101000" "00110011" "00111010" "11011101" "11010100" "11001111" "11000110" "11111001" "11110000" "11101011" "11100010" "10010101" "10011100" "10000111" "10001110" "10110001" "10111000" "10100011" "10101010" "11101100" "11100101" "11111110" "11110111" "11001000" "11000001" "11011010" "11010011" "10100100" "10101101" "10110110" "10111111" "10000000" "10001001" "10010010" "10011011" "01111100" "01110101" "01101110" "01100111" "01011000" "01010001" "01001010" "01000011" "00110100" "00111101" "00100110" "00101111" "00010000" "00011001" "00000010" "00001011" "11010111" "11011110" "11000101" "11001100" "11110011" "11111010" "11100001" "11101000" "10011111" "10010110" "10001101" "10000100" "10111011" "10110010" "10101001" "10100000" "01000111" "01001110" "01010101" "01011100" "01100011" "01101010" "01110001" "01111000" "00001111" "00000110" "00011101" "00010100" "00101011" "00100010" "00111001" "00110000" "10011010" "10010011" "10001000" "10000001" "10111110" "10110111" "10101100" "10100101" "11010010" "11011011" "11000000" "11001001" "11110110" "11111111" "11100100" "11101101" "00001010" "00000011" "00011000" "00010001" "00101110" "00100111" "00111100" "00110101" "01000010" "01001011" "01010000" "01011001" "01100110" "01101111" "01110100" "01111101" "10100001" "10101000" "10110011" "10111010" "10000101" "10001100" "10010111" "10011110" "11101001" "11100000" "11111011" "11110010" "11001101" "11000100" "11011111" "11010110" "00110001" "00111000" "00100011" "00101010" "00010101" "00011100" "00000111" "00001110" "01111001" "01110000" "01101011" "01100010" "01011101" "01010100" "01001111" "01000110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set DelayBudget 3.254
set ClkPeriod 10
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem  \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $MemName BINDTYPE {storage} TYPE {rom} IMPL {auto} LATENCY 2 ALLOW_PRAGMA 1
}


set CoreName ROM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem  \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 27 \
    name state \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename state \
    op interface \
    ports { state_address0 { O 4 vector } state_ce0 { O 1 bit } state_we0 { O 1 bit } state_d0 { O 8 vector } state_q0 { I 8 vector } state_address1 { O 4 vector } state_ce1 { O 1 bit } state_we1 { O 1 bit } state_d1 { O 8 vector } state_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'state'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


