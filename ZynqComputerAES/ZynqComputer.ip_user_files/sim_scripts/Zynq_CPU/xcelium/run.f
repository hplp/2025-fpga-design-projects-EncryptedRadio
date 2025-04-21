-makelib xcelium_lib/xilinx_vip -sv \
  "C:/Xilinx/Vivado/2021.2/data/xilinx_vip/hdl/axi4stream_vip_axi4streampc.sv" \
  "C:/Xilinx/Vivado/2021.2/data/xilinx_vip/hdl/axi_vip_axi4pc.sv" \
  "C:/Xilinx/Vivado/2021.2/data/xilinx_vip/hdl/xil_common_vip_pkg.sv" \
  "C:/Xilinx/Vivado/2021.2/data/xilinx_vip/hdl/axi4stream_vip_pkg.sv" \
  "C:/Xilinx/Vivado/2021.2/data/xilinx_vip/hdl/axi_vip_pkg.sv" \
  "C:/Xilinx/Vivado/2021.2/data/xilinx_vip/hdl/axi4stream_vip_if.sv" \
  "C:/Xilinx/Vivado/2021.2/data/xilinx_vip/hdl/axi_vip_if.sv" \
  "C:/Xilinx/Vivado/2021.2/data/xilinx_vip/hdl/clk_vip_if.sv" \
  "C:/Xilinx/Vivado/2021.2/data/xilinx_vip/hdl/rst_vip_if.sv" \
-endlib
-makelib xcelium_lib/xpm -sv \
  "C:/Xilinx/Vivado/2021.2/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
  "C:/Xilinx/Vivado/2021.2/data/ip/xpm/xpm_fifo/hdl/xpm_fifo.sv" \
  "C:/Xilinx/Vivado/2021.2/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \
-endlib
-makelib xcelium_lib/xpm \
  "C:/Xilinx/Vivado/2021.2/data/ip/xpm/xpm_VCOMP.vhd" \
-endlib
-makelib xcelium_lib/axi_infrastructure_v1_1_0 \
  "../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/ec67/hdl/axi_infrastructure_v1_1_vl_rfs.v" \
-endlib
-makelib xcelium_lib/axi_vip_v1_1_11 -sv \
  "../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/63b7/hdl/axi_vip_v1_1_vl_rfs.sv" \
-endlib
-makelib xcelium_lib/processing_system7_vip_v1_0_13 -sv \
  "../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/3007/hdl/processing_system7_vip_v1_0_vl_rfs.sv" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/Zynq_CPU/ip/Zynq_CPU_processing_system7_0_0/sim/Zynq_CPU_processing_system7_0_0.v" \
-endlib
-makelib xcelium_lib/lib_cdc_v1_0_2 \
  "../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/ef1e/hdl/lib_cdc_v1_0_rfs.vhd" \
-endlib
-makelib xcelium_lib/proc_sys_reset_v5_0_13 \
  "../../../../ZynqComputer.srcs/sources_1/bd/Zynq_CPU/ipshared/8842/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/Zynq_CPU/ip/Zynq_CPU_rst_ps7_0_100M_0/sim/Zynq_CPU_rst_ps7_0_100M_0.vhd" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
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
-endlib
-makelib xcelium_lib/axi_lite_ipif_v3_0_4 \
  "../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/66ea/hdl/axi_lite_ipif_v3_0_vh_rfs.vhd" \
-endlib
-makelib xcelium_lib/lib_pkg_v1_0_2 \
  "../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/0513/hdl/lib_pkg_v1_0_rfs.vhd" \
-endlib
-makelib xcelium_lib/lib_srl_fifo_v1_0_2 \
  "../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/51ce/hdl/lib_srl_fifo_v1_0_rfs.vhd" \
-endlib
-makelib xcelium_lib/axi_uartlite_v2_0_29 \
  "../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/f22f/hdl/axi_uartlite_v2_0_vh_rfs.vhd" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/Zynq_CPU/ip/Zynq_CPU_axi_uartlite_0_0/sim/Zynq_CPU_axi_uartlite_0_0.vhd" \
-endlib
-makelib xcelium_lib/generic_baseblocks_v2_1_0 \
  "../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/b752/hdl/generic_baseblocks_v2_1_vl_rfs.v" \
-endlib
-makelib xcelium_lib/axi_register_slice_v2_1_25 \
  "../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/e1e6/hdl/axi_register_slice_v2_1_vl_rfs.v" \
-endlib
-makelib xcelium_lib/fifo_generator_v13_2_6 \
  "../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/8ae1/simulation/fifo_generator_vlog_beh.v" \
-endlib
-makelib xcelium_lib/fifo_generator_v13_2_6 \
  "../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/8ae1/hdl/fifo_generator_v13_2_rfs.vhd" \
-endlib
-makelib xcelium_lib/fifo_generator_v13_2_6 \
  "../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/8ae1/hdl/fifo_generator_v13_2_rfs.v" \
-endlib
-makelib xcelium_lib/axi_data_fifo_v2_1_24 \
  "../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/fa53/hdl/axi_data_fifo_v2_1_vl_rfs.v" \
-endlib
-makelib xcelium_lib/axi_crossbar_v2_1_26 \
  "../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/ac57/hdl/axi_crossbar_v2_1_vl_rfs.v" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/Zynq_CPU/ip/Zynq_CPU_xbar_0/sim/Zynq_CPU_xbar_0.v" \
-endlib
-makelib xcelium_lib/axi_protocol_converter_v2_1_25 \
  "../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/8fe4/hdl/axi_protocol_converter_v2_1_vl_rfs.v" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/Zynq_CPU/ip/Zynq_CPU_auto_pc_2/sim/Zynq_CPU_auto_pc_2.v" \
  "../../../bd/Zynq_CPU/ip/Zynq_CPU_auto_pc_0/sim/Zynq_CPU_auto_pc_0.v" \
  "../../../bd/Zynq_CPU/ip/Zynq_CPU_auto_pc_1/sim/Zynq_CPU_auto_pc_1.v" \
-endlib
-makelib xcelium_lib/axi_mmu_v2_1_23 \
  "../../../../ZynqComputer.gen/sources_1/bd/Zynq_CPU/ipshared/53bb/hdl/axi_mmu_v2_1_vl_rfs.v" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../bd/Zynq_CPU/ip/Zynq_CPU_s00_mmu_0/sim/Zynq_CPU_s00_mmu_0.v" \
  "../../../bd/Zynq_CPU/sim/Zynq_CPU.v" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  glbl.v
-endlib

