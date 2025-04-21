
call C:/Dev/Xilinx/Vivado/2017.4/bin/xelab xil_defaultlib.apatb_AES_Decrypt_top glbl -prj AES_Decrypt.prj -L smartconnect_v1_0 -L axi_protocol_checker_v1_1_12 -L axi_protocol_checker_v1_1_13 -L axis_protocol_checker_v1_1_11 -L axis_protocol_checker_v1_1_12 -L xil_defaultlib -L unisims_ver --initfile "C:/Dev/Xilinx/Vivado/2017.4/data/xsim/ip/xsim_ip.ini" --lib "ieee_proposed=./ieee_proposed" -s AES_Decrypt 
call C:/Dev/Xilinx/Vivado/2017.4/bin/xsim --noieeewarnings AES_Decrypt -tclbatch AES_Decrypt.tcl

