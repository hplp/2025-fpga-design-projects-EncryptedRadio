############################################################
## This file is generated automatically by Vitis HLS.
## Please DO NOT edit it.
## Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
############################################################
open_project aes_full
set_top AES_Full
add_files source/AEStables.h
add_files source/AESfunctions.h
add_files source/AESfunctions.cpp
add_files -tb source/test_AES_full.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "full" -flow_target vivado
set_part {xc7z020-clg400-1}
create_clock -period 10 -name default
config_export -format ip_catalog -output C:/Users/kuh4bd/Documents/FPGALab/Project_UART -rtl verilog
source "./aes_full/full/directives.tcl"
csim_design -clean
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog -output C:/Users/kuh4bd/Documents/FPGALab/Project_UART
