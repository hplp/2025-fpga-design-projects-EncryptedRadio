
`include "dump_file_agent.svh"
`include "csv_file_dump.svh"
`include "sample_agent.svh"
`include "loop_sample_agent.svh"
`include "sample_manager.svh"
`include "nodf_module_interface.svh"
`include "nodf_module_monitor.svh"
`include "upc_loop_interface.svh"
`include "upc_loop_monitor.svh"
`timescale 1ns/1ps

// top module for dataflow related monitors
module dataflow_monitor(
input logic clock,
input logic reset,
input logic finish
);



    nodf_module_intf module_intf_1(clock,reset);
    assign module_intf_1.ap_start = AESL_inst_AES_Full.ap_start;
    assign module_intf_1.ap_ready = AESL_inst_AES_Full.ap_ready;
    assign module_intf_1.ap_done = AESL_inst_AES_Full.ap_done;
    assign module_intf_1.ap_continue = 1'b1;
    assign module_intf_1.finish = finish;
    csv_file_dump mstatus_csv_dumper_1;
    nodf_module_monitor module_monitor_1;
    nodf_module_intf module_intf_2(clock,reset);
    assign module_intf_2.ap_start = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_fu_122.ap_start;
    assign module_intf_2.ap_ready = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_fu_122.ap_ready;
    assign module_intf_2.ap_done = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_fu_122.ap_done;
    assign module_intf_2.ap_continue = 1'b1;
    assign module_intf_2.finish = finish;
    csv_file_dump mstatus_csv_dumper_2;
    nodf_module_monitor module_monitor_2;
    nodf_module_intf module_intf_3(clock,reset);
    assign module_intf_3.ap_start = AESL_inst_AES_Full.grp_AddRoundKey_fu_130.ap_start;
    assign module_intf_3.ap_ready = AESL_inst_AES_Full.grp_AddRoundKey_fu_130.ap_ready;
    assign module_intf_3.ap_done = AESL_inst_AES_Full.grp_AddRoundKey_fu_130.ap_done;
    assign module_intf_3.ap_continue = 1'b1;
    assign module_intf_3.finish = finish;
    csv_file_dump mstatus_csv_dumper_3;
    nodf_module_monitor module_monitor_3;
    nodf_module_intf module_intf_4(clock,reset);
    assign module_intf_4.ap_start = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.ap_start;
    assign module_intf_4.ap_ready = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.ap_ready;
    assign module_intf_4.ap_done = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.ap_done;
    assign module_intf_4.ap_continue = 1'b1;
    assign module_intf_4.finish = finish;
    csv_file_dump mstatus_csv_dumper_4;
    nodf_module_monitor module_monitor_4;
    nodf_module_intf module_intf_5(clock,reset);
    assign module_intf_5.ap_start = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.grp_SubBytes_fu_80.ap_start;
    assign module_intf_5.ap_ready = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.grp_SubBytes_fu_80.ap_ready;
    assign module_intf_5.ap_done = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.grp_SubBytes_fu_80.ap_done;
    assign module_intf_5.ap_continue = 1'b1;
    assign module_intf_5.finish = finish;
    csv_file_dump mstatus_csv_dumper_5;
    nodf_module_monitor module_monitor_5;
    nodf_module_intf module_intf_6(clock,reset);
    assign module_intf_6.ap_start = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.grp_ShiftRows_fu_88.ap_start;
    assign module_intf_6.ap_ready = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.grp_ShiftRows_fu_88.ap_ready;
    assign module_intf_6.ap_done = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.grp_ShiftRows_fu_88.ap_done;
    assign module_intf_6.ap_continue = 1'b1;
    assign module_intf_6.finish = finish;
    csv_file_dump mstatus_csv_dumper_6;
    nodf_module_monitor module_monitor_6;
    nodf_module_intf module_intf_7(clock,reset);
    assign module_intf_7.ap_start = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.grp_MixColumns_fu_94.ap_start;
    assign module_intf_7.ap_ready = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.grp_MixColumns_fu_94.ap_ready;
    assign module_intf_7.ap_done = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.grp_MixColumns_fu_94.ap_done;
    assign module_intf_7.ap_continue = 1'b1;
    assign module_intf_7.finish = finish;
    csv_file_dump mstatus_csv_dumper_7;
    nodf_module_monitor module_monitor_7;
    nodf_module_intf module_intf_8(clock,reset);
    assign module_intf_8.ap_start = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.grp_AddRoundKey_fu_104.ap_start;
    assign module_intf_8.ap_ready = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.grp_AddRoundKey_fu_104.ap_ready;
    assign module_intf_8.ap_done = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.grp_AddRoundKey_fu_104.ap_done;
    assign module_intf_8.ap_continue = 1'b1;
    assign module_intf_8.finish = finish;
    csv_file_dump mstatus_csv_dumper_8;
    nodf_module_monitor module_monitor_8;
    nodf_module_intf module_intf_9(clock,reset);
    assign module_intf_9.ap_start = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o_fu_154.ap_start;
    assign module_intf_9.ap_ready = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o_fu_154.ap_ready;
    assign module_intf_9.ap_done = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o_fu_154.ap_done;
    assign module_intf_9.ap_continue = 1'b1;
    assign module_intf_9.finish = finish;
    csv_file_dump mstatus_csv_dumper_9;
    nodf_module_monitor module_monitor_9;
    nodf_module_intf module_intf_10(clock,reset);
    assign module_intf_10.ap_start = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy1_fu_161.ap_start;
    assign module_intf_10.ap_ready = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy1_fu_161.ap_ready;
    assign module_intf_10.ap_done = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy1_fu_161.ap_done;
    assign module_intf_10.ap_continue = 1'b1;
    assign module_intf_10.finish = finish;
    csv_file_dump mstatus_csv_dumper_10;
    nodf_module_monitor module_monitor_10;
    nodf_module_intf module_intf_11(clock,reset);
    assign module_intf_11.ap_start = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.ap_start;
    assign module_intf_11.ap_ready = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.ap_ready;
    assign module_intf_11.ap_done = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.ap_done;
    assign module_intf_11.ap_continue = 1'b1;
    assign module_intf_11.finish = finish;
    csv_file_dump mstatus_csv_dumper_11;
    nodf_module_monitor module_monitor_11;
    nodf_module_intf module_intf_12(clock,reset);
    assign module_intf_12.ap_start = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.grp_InvShiftRows_fu_94.ap_start;
    assign module_intf_12.ap_ready = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.grp_InvShiftRows_fu_94.ap_ready;
    assign module_intf_12.ap_done = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.grp_InvShiftRows_fu_94.ap_done;
    assign module_intf_12.ap_continue = 1'b1;
    assign module_intf_12.finish = finish;
    csv_file_dump mstatus_csv_dumper_12;
    nodf_module_monitor module_monitor_12;
    nodf_module_intf module_intf_13(clock,reset);
    assign module_intf_13.ap_start = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.grp_InvSubBytes_fu_100.ap_start;
    assign module_intf_13.ap_ready = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.grp_InvSubBytes_fu_100.ap_ready;
    assign module_intf_13.ap_done = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.grp_InvSubBytes_fu_100.ap_done;
    assign module_intf_13.ap_continue = 1'b1;
    assign module_intf_13.finish = finish;
    csv_file_dump mstatus_csv_dumper_13;
    nodf_module_monitor module_monitor_13;
    nodf_module_intf module_intf_14(clock,reset);
    assign module_intf_14.ap_start = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.grp_AddRoundKey_fu_108.ap_start;
    assign module_intf_14.ap_ready = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.grp_AddRoundKey_fu_108.ap_ready;
    assign module_intf_14.ap_done = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.grp_AddRoundKey_fu_108.ap_done;
    assign module_intf_14.ap_continue = 1'b1;
    assign module_intf_14.finish = finish;
    csv_file_dump mstatus_csv_dumper_14;
    nodf_module_monitor module_monitor_14;
    nodf_module_intf module_intf_15(clock,reset);
    assign module_intf_15.ap_start = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.grp_InvMixColumns_fu_117.ap_start;
    assign module_intf_15.ap_ready = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.grp_InvMixColumns_fu_117.ap_ready;
    assign module_intf_15.ap_done = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.grp_InvMixColumns_fu_117.ap_done;
    assign module_intf_15.ap_continue = 1'b1;
    assign module_intf_15.finish = finish;
    csv_file_dump mstatus_csv_dumper_15;
    nodf_module_monitor module_monitor_15;
    nodf_module_intf module_intf_16(clock,reset);
    assign module_intf_16.ap_start = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o3_fu_188.ap_start;
    assign module_intf_16.ap_ready = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o3_fu_188.ap_ready;
    assign module_intf_16.ap_done = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o3_fu_188.ap_done;
    assign module_intf_16.ap_continue = 1'b1;
    assign module_intf_16.finish = finish;
    csv_file_dump mstatus_csv_dumper_16;
    nodf_module_monitor module_monitor_16;

    upc_loop_intf#(1) upc_loop_intf_1(clock,reset);
    assign upc_loop_intf_1.cur_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_fu_122.ap_CS_fsm;
    assign upc_loop_intf_1.iter_start_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_fu_122.ap_ST_fsm_pp0_stage0;
    assign upc_loop_intf_1.iter_end_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_fu_122.ap_ST_fsm_pp0_stage0;
    assign upc_loop_intf_1.quit_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_fu_122.ap_ST_fsm_pp0_stage0;
    assign upc_loop_intf_1.iter_start_block = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_fu_122.ap_block_pp0_stage0_subdone;
    assign upc_loop_intf_1.iter_end_block = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_fu_122.ap_block_pp0_stage0_subdone;
    assign upc_loop_intf_1.quit_block = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_fu_122.ap_block_pp0_stage0_subdone;
    assign upc_loop_intf_1.iter_start_enable = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_fu_122.ap_enable_reg_pp0_iter0;
    assign upc_loop_intf_1.iter_end_enable = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_fu_122.ap_enable_reg_pp0_iter1;
    assign upc_loop_intf_1.quit_enable = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_fu_122.ap_enable_reg_pp0_iter0;
    assign upc_loop_intf_1.loop_start = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_fu_122.ap_start;
    assign upc_loop_intf_1.loop_ready = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_fu_122.ap_ready;
    assign upc_loop_intf_1.loop_done = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_fu_122.ap_done_int;
    assign upc_loop_intf_1.loop_continue = 1'b1;
    assign upc_loop_intf_1.quit_at_end = 1'b0;
    assign upc_loop_intf_1.finish = finish;
    csv_file_dump upc_loop_csv_dumper_1;
    upc_loop_monitor #(1) upc_loop_monitor_1;
    upc_loop_intf#(62) upc_loop_intf_2(clock,reset);
    assign upc_loop_intf_2.cur_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.ap_CS_fsm;
    assign upc_loop_intf_2.iter_start_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.ap_ST_fsm_pp0_stage0;
    assign upc_loop_intf_2.iter_end_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.ap_ST_fsm_pp0_stage0;
    assign upc_loop_intf_2.quit_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.ap_ST_fsm_pp0_stage0;
    assign upc_loop_intf_2.iter_start_block = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.ap_block_pp0_stage0_subdone;
    assign upc_loop_intf_2.iter_end_block = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.ap_block_pp0_stage0_subdone;
    assign upc_loop_intf_2.quit_block = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.ap_block_pp0_stage0_subdone;
    assign upc_loop_intf_2.iter_start_enable = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.ap_enable_reg_pp0_iter0;
    assign upc_loop_intf_2.iter_end_enable = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.ap_enable_reg_pp0_iter1;
    assign upc_loop_intf_2.quit_enable = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.ap_enable_reg_pp0_iter0;
    assign upc_loop_intf_2.loop_start = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.ap_start;
    assign upc_loop_intf_2.loop_ready = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.ap_ready;
    assign upc_loop_intf_2.loop_done = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds_fu_139.ap_done_int;
    assign upc_loop_intf_2.loop_continue = 1'b1;
    assign upc_loop_intf_2.quit_at_end = 1'b0;
    assign upc_loop_intf_2.finish = finish;
    csv_file_dump upc_loop_csv_dumper_2;
    upc_loop_monitor #(62) upc_loop_monitor_2;
    upc_loop_intf#(1) upc_loop_intf_3(clock,reset);
    assign upc_loop_intf_3.cur_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o_fu_154.ap_CS_fsm;
    assign upc_loop_intf_3.iter_start_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o_fu_154.ap_ST_fsm_pp0_stage0;
    assign upc_loop_intf_3.iter_end_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o_fu_154.ap_ST_fsm_pp0_stage0;
    assign upc_loop_intf_3.quit_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o_fu_154.ap_ST_fsm_pp0_stage0;
    assign upc_loop_intf_3.iter_start_block = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o_fu_154.ap_block_pp0_stage0_subdone;
    assign upc_loop_intf_3.iter_end_block = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o_fu_154.ap_block_pp0_stage0_subdone;
    assign upc_loop_intf_3.quit_block = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o_fu_154.ap_block_pp0_stage0_subdone;
    assign upc_loop_intf_3.iter_start_enable = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o_fu_154.ap_enable_reg_pp0_iter0;
    assign upc_loop_intf_3.iter_end_enable = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o_fu_154.ap_enable_reg_pp0_iter1;
    assign upc_loop_intf_3.quit_enable = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o_fu_154.ap_enable_reg_pp0_iter0;
    assign upc_loop_intf_3.loop_start = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o_fu_154.ap_start;
    assign upc_loop_intf_3.loop_ready = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o_fu_154.ap_ready;
    assign upc_loop_intf_3.loop_done = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o_fu_154.ap_done_int;
    assign upc_loop_intf_3.loop_continue = 1'b1;
    assign upc_loop_intf_3.quit_at_end = 1'b0;
    assign upc_loop_intf_3.finish = finish;
    csv_file_dump upc_loop_csv_dumper_3;
    upc_loop_monitor #(1) upc_loop_monitor_3;
    upc_loop_intf#(1) upc_loop_intf_4(clock,reset);
    assign upc_loop_intf_4.cur_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy1_fu_161.ap_CS_fsm;
    assign upc_loop_intf_4.iter_start_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy1_fu_161.ap_ST_fsm_pp0_stage0;
    assign upc_loop_intf_4.iter_end_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy1_fu_161.ap_ST_fsm_pp0_stage0;
    assign upc_loop_intf_4.quit_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy1_fu_161.ap_ST_fsm_pp0_stage0;
    assign upc_loop_intf_4.iter_start_block = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy1_fu_161.ap_block_pp0_stage0_subdone;
    assign upc_loop_intf_4.iter_end_block = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy1_fu_161.ap_block_pp0_stage0_subdone;
    assign upc_loop_intf_4.quit_block = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy1_fu_161.ap_block_pp0_stage0_subdone;
    assign upc_loop_intf_4.iter_start_enable = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy1_fu_161.ap_enable_reg_pp0_iter0;
    assign upc_loop_intf_4.iter_end_enable = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy1_fu_161.ap_enable_reg_pp0_iter1;
    assign upc_loop_intf_4.quit_enable = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy1_fu_161.ap_enable_reg_pp0_iter0;
    assign upc_loop_intf_4.loop_start = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy1_fu_161.ap_start;
    assign upc_loop_intf_4.loop_ready = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy1_fu_161.ap_ready;
    assign upc_loop_intf_4.loop_done = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy1_fu_161.ap_done_int;
    assign upc_loop_intf_4.loop_continue = 1'b1;
    assign upc_loop_intf_4.quit_at_end = 1'b0;
    assign upc_loop_intf_4.finish = finish;
    csv_file_dump upc_loop_csv_dumper_4;
    upc_loop_monitor #(1) upc_loop_monitor_4;
    upc_loop_intf#(62) upc_loop_intf_5(clock,reset);
    assign upc_loop_intf_5.cur_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.ap_CS_fsm;
    assign upc_loop_intf_5.iter_start_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.ap_ST_fsm_pp0_stage0;
    assign upc_loop_intf_5.iter_end_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.ap_ST_fsm_pp0_stage0;
    assign upc_loop_intf_5.quit_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.ap_ST_fsm_pp0_stage0;
    assign upc_loop_intf_5.iter_start_block = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.ap_block_pp0_stage0_subdone;
    assign upc_loop_intf_5.iter_end_block = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.ap_block_pp0_stage0_subdone;
    assign upc_loop_intf_5.quit_block = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.ap_block_pp0_stage0_subdone;
    assign upc_loop_intf_5.iter_start_enable = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.ap_enable_reg_pp0_iter0;
    assign upc_loop_intf_5.iter_end_enable = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.ap_enable_reg_pp0_iter1;
    assign upc_loop_intf_5.quit_enable = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.ap_enable_reg_pp0_iter0;
    assign upc_loop_intf_5.loop_start = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.ap_start;
    assign upc_loop_intf_5.loop_ready = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.ap_ready;
    assign upc_loop_intf_5.loop_done = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_rounds2_fu_168.ap_done_int;
    assign upc_loop_intf_5.loop_continue = 1'b1;
    assign upc_loop_intf_5.quit_at_end = 1'b0;
    assign upc_loop_intf_5.finish = finish;
    csv_file_dump upc_loop_csv_dumper_5;
    upc_loop_monitor #(62) upc_loop_monitor_5;
    upc_loop_intf#(1) upc_loop_intf_6(clock,reset);
    assign upc_loop_intf_6.cur_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o3_fu_188.ap_CS_fsm;
    assign upc_loop_intf_6.iter_start_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o3_fu_188.ap_ST_fsm_pp0_stage0;
    assign upc_loop_intf_6.iter_end_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o3_fu_188.ap_ST_fsm_pp0_stage0;
    assign upc_loop_intf_6.quit_state = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o3_fu_188.ap_ST_fsm_pp0_stage0;
    assign upc_loop_intf_6.iter_start_block = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o3_fu_188.ap_block_pp0_stage0_subdone;
    assign upc_loop_intf_6.iter_end_block = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o3_fu_188.ap_block_pp0_stage0_subdone;
    assign upc_loop_intf_6.quit_block = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o3_fu_188.ap_block_pp0_stage0_subdone;
    assign upc_loop_intf_6.iter_start_enable = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o3_fu_188.ap_enable_reg_pp0_iter0;
    assign upc_loop_intf_6.iter_end_enable = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o3_fu_188.ap_enable_reg_pp0_iter1;
    assign upc_loop_intf_6.quit_enable = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o3_fu_188.ap_enable_reg_pp0_iter0;
    assign upc_loop_intf_6.loop_start = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o3_fu_188.ap_start;
    assign upc_loop_intf_6.loop_ready = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o3_fu_188.ap_ready;
    assign upc_loop_intf_6.loop_done = AESL_inst_AES_Full.grp_AES_Full_Pipeline_L_copy_o3_fu_188.ap_done_int;
    assign upc_loop_intf_6.loop_continue = 1'b1;
    assign upc_loop_intf_6.quit_at_end = 1'b0;
    assign upc_loop_intf_6.finish = finish;
    csv_file_dump upc_loop_csv_dumper_6;
    upc_loop_monitor #(1) upc_loop_monitor_6;

    sample_manager sample_manager_inst;

initial begin
    sample_manager_inst = new;



    mstatus_csv_dumper_1 = new("./module_status1.csv");
    module_monitor_1 = new(module_intf_1,mstatus_csv_dumper_1);
    mstatus_csv_dumper_2 = new("./module_status2.csv");
    module_monitor_2 = new(module_intf_2,mstatus_csv_dumper_2);
    mstatus_csv_dumper_3 = new("./module_status3.csv");
    module_monitor_3 = new(module_intf_3,mstatus_csv_dumper_3);
    mstatus_csv_dumper_4 = new("./module_status4.csv");
    module_monitor_4 = new(module_intf_4,mstatus_csv_dumper_4);
    mstatus_csv_dumper_5 = new("./module_status5.csv");
    module_monitor_5 = new(module_intf_5,mstatus_csv_dumper_5);
    mstatus_csv_dumper_6 = new("./module_status6.csv");
    module_monitor_6 = new(module_intf_6,mstatus_csv_dumper_6);
    mstatus_csv_dumper_7 = new("./module_status7.csv");
    module_monitor_7 = new(module_intf_7,mstatus_csv_dumper_7);
    mstatus_csv_dumper_8 = new("./module_status8.csv");
    module_monitor_8 = new(module_intf_8,mstatus_csv_dumper_8);
    mstatus_csv_dumper_9 = new("./module_status9.csv");
    module_monitor_9 = new(module_intf_9,mstatus_csv_dumper_9);
    mstatus_csv_dumper_10 = new("./module_status10.csv");
    module_monitor_10 = new(module_intf_10,mstatus_csv_dumper_10);
    mstatus_csv_dumper_11 = new("./module_status11.csv");
    module_monitor_11 = new(module_intf_11,mstatus_csv_dumper_11);
    mstatus_csv_dumper_12 = new("./module_status12.csv");
    module_monitor_12 = new(module_intf_12,mstatus_csv_dumper_12);
    mstatus_csv_dumper_13 = new("./module_status13.csv");
    module_monitor_13 = new(module_intf_13,mstatus_csv_dumper_13);
    mstatus_csv_dumper_14 = new("./module_status14.csv");
    module_monitor_14 = new(module_intf_14,mstatus_csv_dumper_14);
    mstatus_csv_dumper_15 = new("./module_status15.csv");
    module_monitor_15 = new(module_intf_15,mstatus_csv_dumper_15);
    mstatus_csv_dumper_16 = new("./module_status16.csv");
    module_monitor_16 = new(module_intf_16,mstatus_csv_dumper_16);




    upc_loop_csv_dumper_1 = new("./upc_loop_status1.csv");
    upc_loop_monitor_1 = new(upc_loop_intf_1,upc_loop_csv_dumper_1);
    upc_loop_csv_dumper_2 = new("./upc_loop_status2.csv");
    upc_loop_monitor_2 = new(upc_loop_intf_2,upc_loop_csv_dumper_2);
    upc_loop_csv_dumper_3 = new("./upc_loop_status3.csv");
    upc_loop_monitor_3 = new(upc_loop_intf_3,upc_loop_csv_dumper_3);
    upc_loop_csv_dumper_4 = new("./upc_loop_status4.csv");
    upc_loop_monitor_4 = new(upc_loop_intf_4,upc_loop_csv_dumper_4);
    upc_loop_csv_dumper_5 = new("./upc_loop_status5.csv");
    upc_loop_monitor_5 = new(upc_loop_intf_5,upc_loop_csv_dumper_5);
    upc_loop_csv_dumper_6 = new("./upc_loop_status6.csv");
    upc_loop_monitor_6 = new(upc_loop_intf_6,upc_loop_csv_dumper_6);

    sample_manager_inst.add_one_monitor(module_monitor_1);
    sample_manager_inst.add_one_monitor(module_monitor_2);
    sample_manager_inst.add_one_monitor(module_monitor_3);
    sample_manager_inst.add_one_monitor(module_monitor_4);
    sample_manager_inst.add_one_monitor(module_monitor_5);
    sample_manager_inst.add_one_monitor(module_monitor_6);
    sample_manager_inst.add_one_monitor(module_monitor_7);
    sample_manager_inst.add_one_monitor(module_monitor_8);
    sample_manager_inst.add_one_monitor(module_monitor_9);
    sample_manager_inst.add_one_monitor(module_monitor_10);
    sample_manager_inst.add_one_monitor(module_monitor_11);
    sample_manager_inst.add_one_monitor(module_monitor_12);
    sample_manager_inst.add_one_monitor(module_monitor_13);
    sample_manager_inst.add_one_monitor(module_monitor_14);
    sample_manager_inst.add_one_monitor(module_monitor_15);
    sample_manager_inst.add_one_monitor(module_monitor_16);
    sample_manager_inst.add_one_monitor(upc_loop_monitor_1);
    sample_manager_inst.add_one_monitor(upc_loop_monitor_2);
    sample_manager_inst.add_one_monitor(upc_loop_monitor_3);
    sample_manager_inst.add_one_monitor(upc_loop_monitor_4);
    sample_manager_inst.add_one_monitor(upc_loop_monitor_5);
    sample_manager_inst.add_one_monitor(upc_loop_monitor_6);
    
    fork
        sample_manager_inst.start_monitor();
        last_transaction_done;
    join
    disable fork;

    sample_manager_inst.start_dump();
end

    task last_transaction_done();
        wait(reset == 0);
        while(1) begin
            if (finish == 1'b1)
                break;
            else
                @(posedge clock);
        end
    endtask


endmodule
