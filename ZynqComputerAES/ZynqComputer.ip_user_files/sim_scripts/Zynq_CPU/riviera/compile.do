vlib work
vlib riviera

vlib riviera/xilinx_vip
vlib riviera/xpm
vlib riviera/axi_infrastructure_v1_1_0
vlib riviera/axi_vip_v1_1_11
vlib riviera/processing_system7_vip_v1_0_13
vlib riviera/xil_defaultlib
vlib riviera/lib_cdc_v1_0_2
vlib riviera/proc_sys_reset_v5_0_13
vlib riviera/axi_lite_ipif_v3_0_4
vlib riviera/lib_pkg_v1_0_2
vlib riviera/lib_srl_fifo_v1_0_2
vlib riviera/axi_uartlite_v2_0_29
vlib riviera/generic_baseblocks_v2_1_0
vlib riviera/axi_register_slice_v2_1_25
vlib riviera/fifo_generator_v13_2_6
vlib riviera/axi_data_fifo_v2_1_24
vlib riviera/axi_crossbar_v2_1_26
vlib riviera/axi_protocol_converter_v2_1_25
vlib riviera/axi_mmu_v2_1_23

vmap xilinx_vip riviera/xilinx_vip
vmap xpm riviera/xpm
vmap axi_infrastructure_v1_1_0 riviera/axi_infrastructure_v1_1_0
vmap axi_vip_v1_1_11 riviera/axi_vip_v1_1_11
vmap processing_system7_vip_v1_0_13 riviera/processing_system7_vip_v1_0_13
vmap xil_defaultlib riviera/xil_defaultlib
vmap lib_cdc_v1_0_2 riviera/lib_cdc_v1_0_2
vmap proc_sys_reset_v5_0_13 riviera/proc_sys_reset_v5_0_13
vmap axi_lite_ipif_v3_0_4 riviera/axi_lite_ipif_v3_0_4
vmap lib_pkg_v1_0_2 riviera/lib_pkg_v1_0_2
vmap lib_srl_fifo_v1_0_2 riviera/lib_srl_fifo_v1_0_2
vmap axi_uartlite_v2_0_29 riviera/axi_uartlite_v2_0_29
vmap generic_baseblocks_v2_1_0 riviera/generic_baseblocks_v2_1_0
vmap axi_register_slice_v2_1_25 riviera/axi_register_slice_v2_1_25
vmap fifo_generator_v13_2_6 riviera/fifo_generator_v13_2_6
vmap axi_data_fifo_v2_1_24 riviera/axi_data_fifo_v2_1_24
vmap axi_crossbar_v2_1_26 riviera/axi_crossbar_v2_1_26
vmap axi_protocol_converter_v2_1_25 riviera/axi_protocol_converter_v2_1_25
vmap axi_mmu_v2_1_23 riviera/axi_mmu_v2_1_23

vlog -work xilinx_vip  -sv2k12 "+incdir+C:/Xilinx/Vivado/2021.2/data/xilinx_vip/include" \
"C:/Xilinx/Vivado/2021.2/data/xilinx_vip/hdl/axi4stream_vip_axi4streampc.sv" \
"C:/Xilinx/Vivado/2021.2/data/xilinx_vip/hdl/axi_vip_axi4pc.sv" \
"C:/Xilinx/Vivado/2021.2/data/xilinx_vip/hdl/xil_common_vip_pkg.sv" \
"C:/Xilinx/Vivado/2021.2/data/xilinx_vip/hdl/axi4stream_vip_pkg.sv" \
"C:/Xilinx/Vivado/2021.2/data/xilinx_vip/hdl/axi_vip_pkg.sv" \
"C:/Xilinx/Vivado/2021.2/data/xilinx_vip/hdl/axi4stream_vip_if.sv" \
"C:/Xilinx/Vivado/2021.2/data/xilinx_vip/hdl/axi_vip_if.sv" \
"C:/Xilinx/Vivado/2021.2/data/xilinx_vip/hdl/clk_vip_if.sv" \
"C:/Xilinx/Vivado/2021.2/data/xilinx_vip/hdl/rst_vip_if.sv" \

vlog -work xpm  -sv2k12 "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/3007/hdl" "+incdir+../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+C:/Xilinx/Vivado/2021.2/data/xilinx_vip/include" \
"C:/Xilinx/Vivado/2021.2/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"C:/Xilinx/Vivado/2021.2/data/ip/xpm/xpm_fifo/hdl/xpm_fifo.sv" \
"C:/Xilinx/Vivado/2021.2/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm -93 \
"C:/Xilinx/Vivado/2021.2/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work axi_infrastructure_v1_1_0  -v2k5 "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/3007/hdl" "+incdir+../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+C:/Xilinx/Vivado/2021.2/data/xilinx_vip/include" \
"../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl/axi_infrastructure_v1_1_vl_rfs.v" \

vlog -work axi_vip_v1_1_11  -sv2k12 "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/3007/hdl" "+incdir+../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+C:/Xilinx/Vivado/2021.2/data/xilinx_vip/include" \
"../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/63b7/hdl/axi_vip_v1_1_vl_rfs.sv" \

vlog -work processing_system7_vip_v1_0_13  -sv2k12 "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/3007/hdl" "+incdir+../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+C:/Xilinx/Vivado/2021.2/data/xilinx_vip/include" \
"../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/3007/hdl/processing_system7_vip_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/3007/hdl" "+incdir+../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+C:/Xilinx/Vivado/2021.2/data/xilinx_vip/include" \
"../../../bd/Zynq_CPU/ip/Zynq_CPU_processing_system7_0_0/sim/Zynq_CPU_processing_system7_0_0.v" \

vcom -work lib_cdc_v1_0_2 -93 \
"../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/ef1e/hdl/lib_cdc_v1_0_rfs.vhd" \

vcom -work proc_sys_reset_v5_0_13 -93 \
"../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/8842/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/Zynq_CPU/ip/Zynq_CPU_rst_ps7_0_100M_0/sim/Zynq_CPU_rst_ps7_0_100M_0.vhd" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/3007/hdl" "+incdir+../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+C:/Xilinx/Vivado/2021.2/data/xilinx_vip/include" \
"c:/Users/kuh4bd/Documents/FPGALab/Project_UART/ZynqComputerAES/ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/1ea7/hdl/verilog/AddRoundKey.v" \
"c:/Users/kuh4bd/Documents/FPGALab/Project_UART/ZynqComputerAES/ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/1ea7/hdl/verilog/AES_Full.v" \
"c:/Users/kuh4bd/Documents/FPGALab/Project_UART/ZynqComputerAES/ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/1ea7/hdl/verilog/AES_Full_CRTLS_s_axi.v" \
"c:/Users/kuh4bd/Documents/FPGALab/Project_UART/ZynqComputerAES/ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/1ea7/hdl/verilog/AES_Full_state_1.v" \
"c:/Users/kuh4bd/Documents/FPGALab/Project_UART/ZynqComputerAES/ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/1ea7/hdl/verilog/InvMixColumns.v" \
"c:/Users/kuh4bd/Documents/FPGALab/Project_UART/ZynqComputerAES/ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/1ea7/hdl/verilog/InvMixColumns_inveOg.v" \
"c:/Users/kuh4bd/Documents/FPGALab/Project_UART/ZynqComputerAES/ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/1ea7/hdl/verilog/InvShiftRows.v" \
"c:/Users/kuh4bd/Documents/FPGALab/Project_UART/ZynqComputerAES/ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/1ea7/hdl/verilog/InvSubBytes.v" \
"c:/Users/kuh4bd/Documents/FPGALab/Project_UART/ZynqComputerAES/ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/1ea7/hdl/verilog/InvSubBytes_inverdEe.v" \
"c:/Users/kuh4bd/Documents/FPGALab/Project_UART/ZynqComputerAES/ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/1ea7/hdl/verilog/MixColumns.v" \
"c:/Users/kuh4bd/Documents/FPGALab/Project_UART/ZynqComputerAES/ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/1ea7/hdl/verilog/MixColumns_cipher.v" \
"c:/Users/kuh4bd/Documents/FPGALab/Project_UART/ZynqComputerAES/ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/1ea7/hdl/verilog/ShiftRows.v" \
"c:/Users/kuh4bd/Documents/FPGALab/Project_UART/ZynqComputerAES/ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/1ea7/hdl/verilog/ShiftRows_tmp_state.v" \
"c:/Users/kuh4bd/Documents/FPGALab/Project_UART/ZynqComputerAES/ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/1ea7/hdl/verilog/SubBytes.v" \
"c:/Users/kuh4bd/Documents/FPGALab/Project_UART/ZynqComputerAES/ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/1ea7/hdl/verilog/SubBytes_cipher.v" \
"../../../bd/Zynq_CPU/ip/Zynq_CPU_AES_Full_0_0/sim/Zynq_CPU_AES_Full_0_0.v" \

vcom -work axi_lite_ipif_v3_0_4 -93 \
"../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/66ea/hdl/axi_lite_ipif_v3_0_vh_rfs.vhd" \

vcom -work lib_pkg_v1_0_2 -93 \
"../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/0513/hdl/lib_pkg_v1_0_rfs.vhd" \

vcom -work lib_srl_fifo_v1_0_2 -93 \
"../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/51ce/hdl/lib_srl_fifo_v1_0_rfs.vhd" \

vcom -work axi_uartlite_v2_0_29 -93 \
"../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/f22f/hdl/axi_uartlite_v2_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/Zynq_CPU/ip/Zynq_CPU_axi_uartlite_0_0/sim/Zynq_CPU_axi_uartlite_0_0.vhd" \

vlog -work generic_baseblocks_v2_1_0  -v2k5 "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/3007/hdl" "+incdir+../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+C:/Xilinx/Vivado/2021.2/data/xilinx_vip/include" \
"../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/b752/hdl/generic_baseblocks_v2_1_vl_rfs.v" \

vlog -work axi_register_slice_v2_1_25  -v2k5 "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/3007/hdl" "+incdir+../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+C:/Xilinx/Vivado/2021.2/data/xilinx_vip/include" \
"../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/e1e6/hdl/axi_register_slice_v2_1_vl_rfs.v" \

vlog -work fifo_generator_v13_2_6  -v2k5 "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/3007/hdl" "+incdir+../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+C:/Xilinx/Vivado/2021.2/data/xilinx_vip/include" \
"../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/8ae1/simulation/fifo_generator_vlog_beh.v" \

vcom -work fifo_generator_v13_2_6 -93 \
"../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/8ae1/hdl/fifo_generator_v13_2_rfs.vhd" \

vlog -work fifo_generator_v13_2_6  -v2k5 "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/3007/hdl" "+incdir+../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+C:/Xilinx/Vivado/2021.2/data/xilinx_vip/include" \
"../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/8ae1/hdl/fifo_generator_v13_2_rfs.v" \

vlog -work axi_data_fifo_v2_1_24  -v2k5 "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/3007/hdl" "+incdir+../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+C:/Xilinx/Vivado/2021.2/data/xilinx_vip/include" \
"../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/fa53/hdl/axi_data_fifo_v2_1_vl_rfs.v" \

vlog -work axi_crossbar_v2_1_26  -v2k5 "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/3007/hdl" "+incdir+../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+C:/Xilinx/Vivado/2021.2/data/xilinx_vip/include" \
"../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/ac57/hdl/axi_crossbar_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/3007/hdl" "+incdir+../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+C:/Xilinx/Vivado/2021.2/data/xilinx_vip/include" \
"../../../bd/Zynq_CPU/ip/Zynq_CPU_xbar_0/sim/Zynq_CPU_xbar_0.v" \

vlog -work axi_protocol_converter_v2_1_25  -v2k5 "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/3007/hdl" "+incdir+../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+C:/Xilinx/Vivado/2021.2/data/xilinx_vip/include" \
"../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/8fe4/hdl/axi_protocol_converter_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/3007/hdl" "+incdir+../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+C:/Xilinx/Vivado/2021.2/data/xilinx_vip/include" \
"../../../bd/Zynq_CPU/ip/Zynq_CPU_auto_pc_2/sim/Zynq_CPU_auto_pc_2.v" \
"../../../bd/Zynq_CPU/ip/Zynq_CPU_auto_pc_0/sim/Zynq_CPU_auto_pc_0.v" \
"../../../bd/Zynq_CPU/ip/Zynq_CPU_auto_pc_1/sim/Zynq_CPU_auto_pc_1.v" \

vlog -work axi_mmu_v2_1_23  -v2k5 "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/3007/hdl" "+incdir+../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+C:/Xilinx/Vivado/2021.2/data/xilinx_vip/include" \
"../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/53bb/hdl/axi_mmu_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/3007/hdl" "+incdir+../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl" "+incdir+C:/Xilinx/Vivado/2021.2/data/xilinx_vip/include" \
"../../../bd/Zynq_CPU/ip/Zynq_CPU_s00_mmu_0/sim/Zynq_CPU_s00_mmu_0.v" \
"../../../bd/Zynq_CPU/sim/Zynq_CPU.v" \

vlog -work xil_defaultlib \
"glbl.v"

