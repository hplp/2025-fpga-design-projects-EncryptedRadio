// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _AES_Decrypt_HH_
#define _AES_Decrypt_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "AddRoundKey.h"
#include "InvMixColumns.h"
#include "InvSubBytes.h"
#include "InvShiftRows.h"
#include "AES_Decrypt_state.h"

namespace ap_rtl {

struct AES_Decrypt : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<8> > ciphertext_TDATA;
    sc_in< sc_logic > ciphertext_TVALID;
    sc_out< sc_logic > ciphertext_TREADY;
    sc_in< sc_lv<8> > expandedKey_TDATA;
    sc_in< sc_logic > expandedKey_TVALID;
    sc_out< sc_logic > expandedKey_TREADY;
    sc_in< sc_lv<16> > Nr;
    sc_out< sc_lv<8> > plaintext_TDATA;
    sc_out< sc_logic > plaintext_TVALID;
    sc_in< sc_logic > plaintext_TREADY;


    // Module declarations
    AES_Decrypt(sc_module_name name);
    SC_HAS_PROCESS(AES_Decrypt);

    ~AES_Decrypt();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    AES_Decrypt_state* state_U;
    AddRoundKey* grp_AddRoundKey_fu_295;
    InvMixColumns* grp_InvMixColumns_fu_315;
    InvSubBytes* grp_InvSubBytes_fu_322;
    InvShiftRows* grp_InvShiftRows_fu_329;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_lv<29> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<8> > ciphertext_0_data_out;
    sc_signal< sc_logic > ciphertext_0_vld_in;
    sc_signal< sc_logic > ciphertext_0_vld_out;
    sc_signal< sc_logic > ciphertext_0_ack_in;
    sc_signal< sc_logic > ciphertext_0_ack_out;
    sc_signal< sc_lv<8> > ciphertext_0_payload_A;
    sc_signal< sc_lv<8> > ciphertext_0_payload_B;
    sc_signal< sc_logic > ciphertext_0_sel_rd;
    sc_signal< sc_logic > ciphertext_0_sel_wr;
    sc_signal< sc_logic > ciphertext_0_sel;
    sc_signal< sc_logic > ciphertext_0_load_A;
    sc_signal< sc_logic > ciphertext_0_load_B;
    sc_signal< sc_lv<2> > ciphertext_0_state;
    sc_signal< sc_logic > ciphertext_0_state_cmp_full;
    sc_signal< sc_lv<8> > expandedKey_0_data_out;
    sc_signal< sc_logic > expandedKey_0_vld_in;
    sc_signal< sc_logic > expandedKey_0_vld_out;
    sc_signal< sc_logic > expandedKey_0_ack_in;
    sc_signal< sc_logic > expandedKey_0_ack_out;
    sc_signal< sc_lv<8> > expandedKey_0_payload_A;
    sc_signal< sc_lv<8> > expandedKey_0_payload_B;
    sc_signal< sc_logic > expandedKey_0_sel_rd;
    sc_signal< sc_logic > expandedKey_0_sel_wr;
    sc_signal< sc_logic > expandedKey_0_sel;
    sc_signal< sc_logic > expandedKey_0_load_A;
    sc_signal< sc_logic > expandedKey_0_load_B;
    sc_signal< sc_lv<2> > expandedKey_0_state;
    sc_signal< sc_logic > expandedKey_0_state_cmp_full;
    sc_signal< sc_lv<8> > plaintext_1_data_out;
    sc_signal< sc_logic > plaintext_1_vld_in;
    sc_signal< sc_logic > plaintext_1_vld_out;
    sc_signal< sc_logic > plaintext_1_ack_in;
    sc_signal< sc_logic > plaintext_1_ack_out;
    sc_signal< sc_lv<8> > plaintext_1_payload_A;
    sc_signal< sc_lv<8> > plaintext_1_payload_B;
    sc_signal< sc_logic > plaintext_1_sel_rd;
    sc_signal< sc_logic > plaintext_1_sel_wr;
    sc_signal< sc_logic > plaintext_1_sel;
    sc_signal< sc_logic > plaintext_1_load_A;
    sc_signal< sc_logic > plaintext_1_load_B;
    sc_signal< sc_lv<2> > plaintext_1_state;
    sc_signal< sc_logic > plaintext_1_state_cmp_full;
    sc_signal< sc_logic > ciphertext_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > tmp_reg_391;
    sc_signal< sc_logic > plaintext_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_logic > ap_CS_fsm_state29;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< sc_lv<5> > i_reg_272;
    sc_signal< sc_lv<8> > state_q0;
    sc_signal< sc_lv<1> > tmp_fu_339_p2;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<5> > i_3_fu_345_p2;
    sc_signal< sc_lv<5> > i_3_reg_395;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<17> > tmp_s_fu_359_p2;
    sc_signal< sc_lv<17> > tmp_s_reg_400;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > grp_AddRoundKey_fu_295_ap_done;
    sc_signal< sc_lv<16> > i_4_fu_370_p2;
    sc_signal< sc_lv<16> > i_4_reg_408;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > tmp_19_fu_380_p2;
    sc_signal< sc_lv<1> > tmp_19_reg_413;
    sc_signal< sc_lv<1> > exitcond_fu_365_p2;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_lv<4> > state_address0;
    sc_signal< sc_logic > state_ce0;
    sc_signal< sc_logic > state_we0;
    sc_signal< sc_lv<8> > state_d0;
    sc_signal< sc_lv<4> > state_address1;
    sc_signal< sc_logic > state_ce1;
    sc_signal< sc_logic > state_we1;
    sc_signal< sc_lv<8> > state_d1;
    sc_signal< sc_lv<8> > state_q1;
    sc_signal< sc_logic > grp_AddRoundKey_fu_295_ap_start;
    sc_signal< sc_logic > grp_AddRoundKey_fu_295_ap_idle;
    sc_signal< sc_logic > grp_AddRoundKey_fu_295_ap_ready;
    sc_signal< sc_lv<4> > grp_AddRoundKey_fu_295_state_address0;
    sc_signal< sc_logic > grp_AddRoundKey_fu_295_state_ce0;
    sc_signal< sc_logic > grp_AddRoundKey_fu_295_state_we0;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_295_state_d0;
    sc_signal< sc_lv<4> > grp_AddRoundKey_fu_295_state_address1;
    sc_signal< sc_logic > grp_AddRoundKey_fu_295_state_ce1;
    sc_signal< sc_logic > grp_AddRoundKey_fu_295_state_we1;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_295_state_d1;
    sc_signal< sc_logic > grp_AddRoundKey_fu_295_roundKey_TVALID;
    sc_signal< sc_logic > grp_AddRoundKey_fu_295_roundKey_TREADY;
    sc_signal< sc_logic > grp_InvMixColumns_fu_315_ap_start;
    sc_signal< sc_logic > grp_InvMixColumns_fu_315_ap_done;
    sc_signal< sc_logic > grp_InvMixColumns_fu_315_ap_idle;
    sc_signal< sc_logic > grp_InvMixColumns_fu_315_ap_ready;
    sc_signal< sc_lv<4> > grp_InvMixColumns_fu_315_state_address0;
    sc_signal< sc_logic > grp_InvMixColumns_fu_315_state_ce0;
    sc_signal< sc_logic > grp_InvMixColumns_fu_315_state_we0;
    sc_signal< sc_lv<8> > grp_InvMixColumns_fu_315_state_d0;
    sc_signal< sc_lv<4> > grp_InvMixColumns_fu_315_state_address1;
    sc_signal< sc_logic > grp_InvMixColumns_fu_315_state_ce1;
    sc_signal< sc_logic > grp_InvSubBytes_fu_322_ap_start;
    sc_signal< sc_logic > grp_InvSubBytes_fu_322_ap_done;
    sc_signal< sc_logic > grp_InvSubBytes_fu_322_ap_idle;
    sc_signal< sc_logic > grp_InvSubBytes_fu_322_ap_ready;
    sc_signal< sc_lv<4> > grp_InvSubBytes_fu_322_state_address0;
    sc_signal< sc_logic > grp_InvSubBytes_fu_322_state_ce0;
    sc_signal< sc_logic > grp_InvSubBytes_fu_322_state_we0;
    sc_signal< sc_lv<8> > grp_InvSubBytes_fu_322_state_d0;
    sc_signal< sc_lv<4> > grp_InvSubBytes_fu_322_state_address1;
    sc_signal< sc_logic > grp_InvSubBytes_fu_322_state_ce1;
    sc_signal< sc_logic > grp_InvSubBytes_fu_322_state_we1;
    sc_signal< sc_lv<8> > grp_InvSubBytes_fu_322_state_d1;
    sc_signal< sc_logic > grp_InvShiftRows_fu_329_ap_start;
    sc_signal< sc_logic > grp_InvShiftRows_fu_329_ap_done;
    sc_signal< sc_logic > grp_InvShiftRows_fu_329_ap_idle;
    sc_signal< sc_logic > grp_InvShiftRows_fu_329_ap_ready;
    sc_signal< sc_lv<4> > grp_InvShiftRows_fu_329_state_address0;
    sc_signal< sc_logic > grp_InvShiftRows_fu_329_state_ce0;
    sc_signal< sc_logic > grp_InvShiftRows_fu_329_state_we0;
    sc_signal< sc_lv<8> > grp_InvShiftRows_fu_329_state_d0;
    sc_signal< sc_lv<4> > grp_InvShiftRows_fu_329_state_address1;
    sc_signal< sc_logic > grp_InvShiftRows_fu_329_state_ce1;
    sc_signal< sc_lv<5> > ap_phi_mux_i_phi_fu_276_p4;
    sc_signal< sc_lv<16> > i1_reg_284;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< bool > ap_block_state13_on_subcall_done;
    sc_signal< sc_logic > ap_reg_grp_AddRoundKey_fu_295_ap_start;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_logic > ap_reg_grp_InvMixColumns_fu_315_ap_start;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_logic > ap_reg_grp_InvSubBytes_fu_322_ap_start;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > ap_reg_grp_InvShiftRows_fu_329_ap_start;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<64> > tmp_18_fu_351_p1;
    sc_signal< sc_lv<17> > tmp_cast_fu_356_p1;
    sc_signal< sc_lv<17> > tmp_67_cast_fu_376_p1;
    sc_signal< sc_lv<29> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<29> ap_ST_fsm_state1;
    static const sc_lv<29> ap_ST_fsm_pp0_stage0;
    static const sc_lv<29> ap_ST_fsm_state4;
    static const sc_lv<29> ap_ST_fsm_state5;
    static const sc_lv<29> ap_ST_fsm_state6;
    static const sc_lv<29> ap_ST_fsm_state7;
    static const sc_lv<29> ap_ST_fsm_state8;
    static const sc_lv<29> ap_ST_fsm_state9;
    static const sc_lv<29> ap_ST_fsm_state10;
    static const sc_lv<29> ap_ST_fsm_state11;
    static const sc_lv<29> ap_ST_fsm_state12;
    static const sc_lv<29> ap_ST_fsm_state13;
    static const sc_lv<29> ap_ST_fsm_state14;
    static const sc_lv<29> ap_ST_fsm_state15;
    static const sc_lv<29> ap_ST_fsm_state16;
    static const sc_lv<29> ap_ST_fsm_state17;
    static const sc_lv<29> ap_ST_fsm_state18;
    static const sc_lv<29> ap_ST_fsm_state19;
    static const sc_lv<29> ap_ST_fsm_state20;
    static const sc_lv<29> ap_ST_fsm_state21;
    static const sc_lv<29> ap_ST_fsm_state22;
    static const sc_lv<29> ap_ST_fsm_state23;
    static const sc_lv<29> ap_ST_fsm_state24;
    static const sc_lv<29> ap_ST_fsm_state25;
    static const sc_lv<29> ap_ST_fsm_state26;
    static const sc_lv<29> ap_ST_fsm_state27;
    static const sc_lv<29> ap_ST_fsm_state28;
    static const sc_lv<29> ap_ST_fsm_state29;
    static const sc_lv<29> ap_ST_fsm_state30;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<64> ap_const_lv64_4;
    static const sc_lv<64> ap_const_lv64_5;
    static const sc_lv<64> ap_const_lv64_6;
    static const sc_lv<64> ap_const_lv64_7;
    static const sc_lv<64> ap_const_lv64_8;
    static const sc_lv<64> ap_const_lv64_9;
    static const sc_lv<64> ap_const_lv64_A;
    static const sc_lv<64> ap_const_lv64_B;
    static const sc_lv<64> ap_const_lv64_C;
    static const sc_lv<64> ap_const_lv64_D;
    static const sc_lv<64> ap_const_lv64_E;
    static const sc_lv<64> ap_const_lv64_F;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<17> ap_const_lv17_1FFFF;
    static const sc_lv<16> ap_const_lv16_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state25();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state28();
    void thread_ap_CS_fsm_state29();
    void thread_ap_CS_fsm_state30();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state13_on_subcall_done();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_i_phi_fu_276_p4();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_ciphertext_0_ack_in();
    void thread_ciphertext_0_ack_out();
    void thread_ciphertext_0_data_out();
    void thread_ciphertext_0_load_A();
    void thread_ciphertext_0_load_B();
    void thread_ciphertext_0_sel();
    void thread_ciphertext_0_state_cmp_full();
    void thread_ciphertext_0_vld_in();
    void thread_ciphertext_0_vld_out();
    void thread_ciphertext_TDATA_blk_n();
    void thread_ciphertext_TREADY();
    void thread_exitcond_fu_365_p2();
    void thread_expandedKey_0_ack_in();
    void thread_expandedKey_0_ack_out();
    void thread_expandedKey_0_data_out();
    void thread_expandedKey_0_load_A();
    void thread_expandedKey_0_load_B();
    void thread_expandedKey_0_sel();
    void thread_expandedKey_0_state_cmp_full();
    void thread_expandedKey_0_vld_in();
    void thread_expandedKey_0_vld_out();
    void thread_expandedKey_TREADY();
    void thread_grp_AddRoundKey_fu_295_ap_start();
    void thread_grp_AddRoundKey_fu_295_roundKey_TVALID();
    void thread_grp_InvMixColumns_fu_315_ap_start();
    void thread_grp_InvShiftRows_fu_329_ap_start();
    void thread_grp_InvSubBytes_fu_322_ap_start();
    void thread_i_3_fu_345_p2();
    void thread_i_4_fu_370_p2();
    void thread_plaintext_1_ack_in();
    void thread_plaintext_1_ack_out();
    void thread_plaintext_1_data_out();
    void thread_plaintext_1_load_A();
    void thread_plaintext_1_load_B();
    void thread_plaintext_1_sel();
    void thread_plaintext_1_state_cmp_full();
    void thread_plaintext_1_vld_in();
    void thread_plaintext_1_vld_out();
    void thread_plaintext_TDATA();
    void thread_plaintext_TDATA_blk_n();
    void thread_plaintext_TVALID();
    void thread_state_address0();
    void thread_state_address1();
    void thread_state_ce0();
    void thread_state_ce1();
    void thread_state_d0();
    void thread_state_d1();
    void thread_state_we0();
    void thread_state_we1();
    void thread_tmp_18_fu_351_p1();
    void thread_tmp_19_fu_380_p2();
    void thread_tmp_67_cast_fu_376_p1();
    void thread_tmp_cast_fu_356_p1();
    void thread_tmp_fu_339_p2();
    void thread_tmp_s_fu_359_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
