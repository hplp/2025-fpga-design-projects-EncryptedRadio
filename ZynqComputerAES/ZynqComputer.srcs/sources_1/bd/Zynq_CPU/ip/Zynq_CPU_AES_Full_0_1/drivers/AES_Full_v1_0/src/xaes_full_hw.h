// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.2 (64-bit)
// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// CRTLS
// 0x000 : Control signals
//         bit 0  - ap_start (Read/Write/COH)
//         bit 1  - ap_done (Read/COR)
//         bit 2  - ap_idle (Read)
//         bit 3  - ap_ready (Read/COR)
//         bit 7  - auto_restart (Read/Write)
//         others - reserved
// 0x004 : Global Interrupt Enable Register
//         bit 0  - Global Interrupt Enable (Read/Write)
//         others - reserved
// 0x008 : IP Interrupt Enable Register (Read/Write)
//         bit 0 - enable ap_done interrupt (Read/Write)
//         bit 1 - enable ap_ready interrupt (Read/Write)
//         bit 5 - enable ap_local_deadlock interrupt (Read/Write)
//         others - reserved
// 0x00c : IP Interrupt Status Register (Read/TOW)
//         bit 0 - ap_done (COR/TOW)
//         bit 1 - ap_ready (COR/TOW)
//         bit 5 - ap_local_deadlock (COR/TOW)
//         others - reserved
// 0x010 : Data signal of mode_cipher
//         bit 0  - mode_cipher[0] (Read/Write)
//         others - reserved
// 0x014 : reserved
// 0x018 : Data signal of mode_inverse_cipher
//         bit 0  - mode_inverse_cipher[0] (Read/Write)
//         others - reserved
// 0x01c : reserved
// 0x030 : Data signal of Nr
//         bit 15~0 - Nr[15:0] (Read/Write)
//         others   - reserved
// 0x034 : reserved
// 0x020 ~
// 0x02f : Memory 'data_in' (16 * 8b)
//         Word n : bit [ 7: 0] - data_in[4n]
//                  bit [15: 8] - data_in[4n+1]
//                  bit [23:16] - data_in[4n+2]
//                  bit [31:24] - data_in[4n+3]
// 0x040 ~
// 0x04f : Memory 'data_out' (16 * 8b)
//         Word n : bit [ 7: 0] - data_out[4n]
//                  bit [15: 8] - data_out[4n+1]
//                  bit [23:16] - data_out[4n+2]
//                  bit [31:24] - data_out[4n+3]
// 0x100 ~
// 0x1ff : Memory 'expandedKey' (176 * 8b)
//         Word n : bit [ 7: 0] - expandedKey[4n]
//                  bit [15: 8] - expandedKey[4n+1]
//                  bit [23:16] - expandedKey[4n+2]
//                  bit [31:24] - expandedKey[4n+3]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XAES_FULL_CRTLS_ADDR_AP_CTRL                  0x000
#define XAES_FULL_CRTLS_ADDR_GIE                      0x004
#define XAES_FULL_CRTLS_ADDR_IER                      0x008
#define XAES_FULL_CRTLS_ADDR_ISR                      0x00c
#define XAES_FULL_CRTLS_ADDR_MODE_CIPHER_DATA         0x010
#define XAES_FULL_CRTLS_BITS_MODE_CIPHER_DATA         1
#define XAES_FULL_CRTLS_ADDR_MODE_INVERSE_CIPHER_DATA 0x018
#define XAES_FULL_CRTLS_BITS_MODE_INVERSE_CIPHER_DATA 1
#define XAES_FULL_CRTLS_ADDR_NR_DATA                  0x030
#define XAES_FULL_CRTLS_BITS_NR_DATA                  16
#define XAES_FULL_CRTLS_ADDR_DATA_IN_BASE             0x020
#define XAES_FULL_CRTLS_ADDR_DATA_IN_HIGH             0x02f
#define XAES_FULL_CRTLS_WIDTH_DATA_IN                 8
#define XAES_FULL_CRTLS_DEPTH_DATA_IN                 16
#define XAES_FULL_CRTLS_ADDR_DATA_OUT_BASE            0x040
#define XAES_FULL_CRTLS_ADDR_DATA_OUT_HIGH            0x04f
#define XAES_FULL_CRTLS_WIDTH_DATA_OUT                8
#define XAES_FULL_CRTLS_DEPTH_DATA_OUT                16
#define XAES_FULL_CRTLS_ADDR_EXPANDEDKEY_BASE         0x100
#define XAES_FULL_CRTLS_ADDR_EXPANDEDKEY_HIGH         0x1ff
#define XAES_FULL_CRTLS_WIDTH_EXPANDEDKEY             8
#define XAES_FULL_CRTLS_DEPTH_EXPANDEDKEY             176

