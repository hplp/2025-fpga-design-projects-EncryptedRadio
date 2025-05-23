// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module AddRoundKey (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        state_address0,
        state_ce0,
        state_we0,
        state_d0,
        state_q0,
        state_address1,
        state_ce1,
        state_we1,
        state_d1,
        state_q1,
        roundKey_TDATA,
        roundKey_TVALID,
        roundKey_TREADY
);

parameter    ap_ST_fsm_state1 = 16'd1;
parameter    ap_ST_fsm_state2 = 16'd2;
parameter    ap_ST_fsm_state3 = 16'd4;
parameter    ap_ST_fsm_state4 = 16'd8;
parameter    ap_ST_fsm_state5 = 16'd16;
parameter    ap_ST_fsm_state6 = 16'd32;
parameter    ap_ST_fsm_state7 = 16'd64;
parameter    ap_ST_fsm_state8 = 16'd128;
parameter    ap_ST_fsm_state9 = 16'd256;
parameter    ap_ST_fsm_state10 = 16'd512;
parameter    ap_ST_fsm_state11 = 16'd1024;
parameter    ap_ST_fsm_state12 = 16'd2048;
parameter    ap_ST_fsm_state13 = 16'd4096;
parameter    ap_ST_fsm_state14 = 16'd8192;
parameter    ap_ST_fsm_state15 = 16'd16384;
parameter    ap_ST_fsm_state16 = 16'd32768;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [3:0] state_address0;
output   state_ce0;
output   state_we0;
output  [7:0] state_d0;
input  [7:0] state_q0;
output  [3:0] state_address1;
output   state_ce1;
output   state_we1;
output  [7:0] state_d1;
input  [7:0] state_q1;
input  [7:0] roundKey_TDATA;
input   roundKey_TVALID;
output   roundKey_TREADY;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[3:0] state_address0;
reg state_ce0;
reg state_we0;
reg[7:0] state_d0;
reg[3:0] state_address1;
reg state_ce1;
reg state_we1;
reg[7:0] state_d1;
reg roundKey_TREADY;

(* fsm_encoding = "none" *) reg   [15:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    roundKey_TDATA_blk_n;
wire    ap_CS_fsm_state2;
wire    ap_CS_fsm_state3;
wire    ap_CS_fsm_state4;
wire    ap_CS_fsm_state5;
wire    ap_CS_fsm_state6;
wire    ap_CS_fsm_state7;
wire    ap_CS_fsm_state8;
wire    ap_CS_fsm_state9;
wire    ap_CS_fsm_state10;
wire    ap_CS_fsm_state11;
wire    ap_CS_fsm_state12;
wire    ap_CS_fsm_state13;
wire    ap_CS_fsm_state14;
wire    ap_CS_fsm_state15;
wire    ap_CS_fsm_state16;
reg   [7:0] reg_205;
reg   [7:0] reg_210;
reg   [7:0] reg_215;
wire   [7:0] grp_fu_220_p2;
reg   [7:0] reg_238;
wire   [7:0] grp_fu_226_p2;
reg   [7:0] reg_244;
wire   [7:0] grp_fu_232_p2;
reg   [7:0] reg_250;
reg   [7:0] roundKey_read_reg_294;
reg    ap_block_state1;
wire   [3:0] state_addr_reg_299;
wire   [3:0] state_addr_48_reg_304;
wire   [7:0] tmp_s_fu_256_p2;
reg   [7:0] tmp_s_reg_309;
wire   [7:0] tmp_65_1_fu_261_p2;
reg   [7:0] tmp_65_1_reg_314;
wire   [3:0] state_addr_49_reg_319;
wire   [3:0] state_addr_50_reg_324;
wire   [7:0] tmp_65_2_fu_267_p2;
reg   [7:0] tmp_65_2_reg_329;
wire   [3:0] state_addr_51_reg_334;
wire   [3:0] state_addr_52_reg_339;
wire   [3:0] state_addr_53_reg_344;
wire   [3:0] state_addr_54_reg_349;
reg   [7:0] tmp_65_4_reg_354;
wire   [3:0] state_addr_55_reg_359;
wire   [3:0] state_addr_56_reg_364;
reg   [7:0] state_load_9_reg_369;
wire   [3:0] state_addr_57_reg_374;
wire   [3:0] state_addr_58_reg_379;
reg   [7:0] tmp_65_6_reg_384;
reg   [7:0] state_load_11_reg_389;
wire   [3:0] state_addr_59_reg_394;
wire   [3:0] state_addr_60_reg_399;
reg   [7:0] state_load_13_reg_404;
wire   [3:0] state_addr_61_reg_409;
wire   [3:0] state_addr_62_reg_414;
reg   [7:0] tmp_65_8_reg_419;
reg   [7:0] state_load_15_reg_424;
wire   [7:0] tmp_65_9_fu_273_p2;
reg   [7:0] tmp_65_9_reg_429;
wire   [7:0] tmp_65_10_fu_278_p2;
reg   [7:0] tmp_65_10_reg_434;
wire   [7:0] tmp_65_12_fu_283_p2;
reg   [7:0] tmp_65_12_reg_439;
wire   [7:0] tmp_65_14_fu_288_p2;
reg   [15:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 16'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state7)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state5)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state4)))) begin
        reg_205 <= state_q0;
    end else if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state3))) begin
        reg_205 <= state_q1;
    end
end

always @ (posedge ap_clk) begin
    if ((((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state6)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state9)))) begin
        reg_210 <= state_q0;
    end else if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state4))) begin
        reg_210 <= state_q1;
    end
end

always @ (posedge ap_clk) begin
    if ((roundKey_TVALID == 1'b1)) begin
        if ((1'b1 == ap_CS_fsm_state8)) begin
            reg_215 <= state_q0;
        end else if ((1'b1 == ap_CS_fsm_state5)) begin
            reg_215 <= state_q1;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state4)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state11)))) begin
        reg_238 <= grp_fu_220_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state6)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state15)))) begin
        reg_244 <= grp_fu_226_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state8)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state13)))) begin
        reg_250 <= grp_fu_232_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((~((roundKey_TVALID == 1'b0) | (ap_start == 1'b0)) & (1'b1 == ap_CS_fsm_state1))) begin
        roundKey_read_reg_294 <= roundKey_TDATA;
    end
end

always @ (posedge ap_clk) begin
    if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state7))) begin
        state_load_11_reg_389 <= state_q1;
        tmp_65_6_reg_384 <= grp_fu_220_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state8))) begin
        state_load_13_reg_404 <= state_q1;
    end
end

always @ (posedge ap_clk) begin
    if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state9))) begin
        state_load_15_reg_424 <= state_q1;
        tmp_65_8_reg_419 <= grp_fu_226_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state6))) begin
        state_load_9_reg_369 <= state_q1;
    end
end

always @ (posedge ap_clk) begin
    if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state12))) begin
        tmp_65_10_reg_434 <= tmp_65_10_fu_278_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state14))) begin
        tmp_65_12_reg_439 <= tmp_65_12_fu_283_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        tmp_65_1_reg_314 <= tmp_65_1_fu_261_p2;
        tmp_s_reg_309 <= tmp_s_fu_256_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state3))) begin
        tmp_65_2_reg_329 <= tmp_65_2_fu_267_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state5))) begin
        tmp_65_4_reg_354 <= grp_fu_220_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state10))) begin
        tmp_65_9_reg_429 <= tmp_65_9_fu_273_p2;
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state16)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state16))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9) | ((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)))) begin
        roundKey_TDATA_blk_n = roundKey_TVALID;
    end else begin
        roundKey_TDATA_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state8)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state7)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state6)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state5)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state4)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state3)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state2)) | (~((roundKey_TVALID == 1'b0) | (ap_start == 1'b0)) & (1'b1 == ap_CS_fsm_state1)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state16)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state15)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state14)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state13)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state12)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state11)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state10)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state9)))) begin
        roundKey_TREADY = 1'b1;
    end else begin
        roundKey_TREADY = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        state_address0 = state_addr_61_reg_409;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        state_address0 = state_addr_59_reg_394;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        state_address0 = state_addr_57_reg_374;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        state_address0 = state_addr_55_reg_359;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        state_address0 = state_addr_53_reg_344;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        state_address0 = state_addr_51_reg_334;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        state_address0 = state_addr_49_reg_319;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        state_address0 = state_addr_reg_299;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        state_address0 = 64'd14;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        state_address0 = 64'd12;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        state_address0 = 64'd10;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        state_address0 = 64'd8;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        state_address0 = 64'd6;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        state_address0 = 64'd4;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        state_address0 = 64'd2;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        state_address0 = 64'd0;
    end else begin
        state_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        state_address1 = state_addr_62_reg_414;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        state_address1 = state_addr_60_reg_399;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        state_address1 = state_addr_58_reg_379;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        state_address1 = state_addr_56_reg_364;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        state_address1 = state_addr_54_reg_349;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        state_address1 = state_addr_52_reg_339;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        state_address1 = state_addr_50_reg_324;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        state_address1 = state_addr_48_reg_304;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        state_address1 = 64'd15;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        state_address1 = 64'd13;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        state_address1 = 64'd11;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        state_address1 = 64'd9;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        state_address1 = 64'd7;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        state_address1 = 64'd5;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        state_address1 = 64'd3;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        state_address1 = 64'd1;
    end else begin
        state_address1 = 'bx;
    end
end

always @ (*) begin
    if ((((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state8)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state7)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state6)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state5)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state4)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state3)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state2)) | (~((roundKey_TVALID == 1'b0) | (ap_start == 1'b0)) & (1'b1 == ap_CS_fsm_state1)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state16)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state15)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state14)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state13)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state12)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state11)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state10)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state9)))) begin
        state_ce0 = 1'b1;
    end else begin
        state_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state8)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state7)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state6)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state5)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state4)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state3)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state2)) | (~((roundKey_TVALID == 1'b0) | (ap_start == 1'b0)) & (1'b1 == ap_CS_fsm_state1)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state16)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state15)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state14)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state13)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state12)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state11)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state10)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state9)))) begin
        state_ce1 = 1'b1;
    end else begin
        state_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        state_d0 = reg_244;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        state_d0 = reg_250;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        state_d0 = reg_238;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        state_d0 = tmp_65_8_reg_419;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        state_d0 = tmp_65_6_reg_384;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        state_d0 = tmp_65_4_reg_354;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        state_d0 = tmp_65_2_reg_329;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        state_d0 = tmp_s_reg_309;
    end else begin
        state_d0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        state_d1 = tmp_65_14_fu_288_p2;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        state_d1 = tmp_65_12_reg_439;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        state_d1 = tmp_65_10_reg_434;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        state_d1 = tmp_65_9_reg_429;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        state_d1 = reg_250;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        state_d1 = reg_244;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        state_d1 = reg_238;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        state_d1 = tmp_65_1_reg_314;
    end else begin
        state_d1 = 'bx;
    end
end

always @ (*) begin
    if ((((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state16)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state15)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state14)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state13)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state12)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state11)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state10)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state9)))) begin
        state_we0 = 1'b1;
    end else begin
        state_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state16)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state15)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state14)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state13)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state12)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state11)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state10)) | ((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state9)))) begin
        state_we1 = 1'b1;
    end else begin
        state_we1 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((roundKey_TVALID == 1'b0) | (ap_start == 1'b0)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state4))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state5 : begin
            if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state5))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state6 : begin
            if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state6))) begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state7 : begin
            if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state7))) begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
        end
        ap_ST_fsm_state8 : begin
            if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state8))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end
        end
        ap_ST_fsm_state9 : begin
            if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state9))) begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end
        end
        ap_ST_fsm_state10 : begin
            if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state10))) begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end
        end
        ap_ST_fsm_state11 : begin
            if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state11))) begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end
        end
        ap_ST_fsm_state12 : begin
            if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state12))) begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end
        end
        ap_ST_fsm_state13 : begin
            if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state13))) begin
                ap_NS_fsm = ap_ST_fsm_state14;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end
        end
        ap_ST_fsm_state14 : begin
            if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state14))) begin
                ap_NS_fsm = ap_ST_fsm_state15;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state14;
            end
        end
        ap_ST_fsm_state15 : begin
            if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state15))) begin
                ap_NS_fsm = ap_ST_fsm_state16;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state15;
            end
        end
        ap_ST_fsm_state16 : begin
            if (((roundKey_TVALID == 1'b1) & (1'b1 == ap_CS_fsm_state16))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state16;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];

assign ap_CS_fsm_state15 = ap_CS_fsm[32'd14];

assign ap_CS_fsm_state16 = ap_CS_fsm[32'd15];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

always @ (*) begin
    ap_block_state1 = ((roundKey_TVALID == 1'b0) | (ap_start == 1'b0));
end

assign grp_fu_220_p2 = (roundKey_TDATA ^ reg_205);

assign grp_fu_226_p2 = (roundKey_TDATA ^ reg_210);

assign grp_fu_232_p2 = (roundKey_TDATA ^ reg_215);

assign state_addr_48_reg_304 = 64'd1;

assign state_addr_49_reg_319 = 64'd2;

assign state_addr_50_reg_324 = 64'd3;

assign state_addr_51_reg_334 = 64'd4;

assign state_addr_52_reg_339 = 64'd5;

assign state_addr_53_reg_344 = 64'd6;

assign state_addr_54_reg_349 = 64'd7;

assign state_addr_55_reg_359 = 64'd8;

assign state_addr_56_reg_364 = 64'd9;

assign state_addr_57_reg_374 = 64'd10;

assign state_addr_58_reg_379 = 64'd11;

assign state_addr_59_reg_394 = 64'd12;

assign state_addr_60_reg_399 = 64'd13;

assign state_addr_61_reg_409 = 64'd14;

assign state_addr_62_reg_414 = 64'd15;

assign state_addr_reg_299 = 64'd0;

assign tmp_65_10_fu_278_p2 = (state_load_11_reg_389 ^ roundKey_TDATA);

assign tmp_65_12_fu_283_p2 = (state_load_13_reg_404 ^ roundKey_TDATA);

assign tmp_65_14_fu_288_p2 = (state_load_15_reg_424 ^ roundKey_TDATA);

assign tmp_65_1_fu_261_p2 = (state_q1 ^ roundKey_TDATA);

assign tmp_65_2_fu_267_p2 = (state_q0 ^ roundKey_TDATA);

assign tmp_65_9_fu_273_p2 = (state_load_9_reg_369 ^ roundKey_TDATA);

assign tmp_s_fu_256_p2 = (state_q0 ^ roundKey_read_reg_294);

endmodule //AddRoundKey
