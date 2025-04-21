// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.2 (64-bit)
// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// ==============================================================

extern "C" void AESL_WRAP_AES_Full (
char mode_cipher,
char mode_inverse_cipher,
volatile void* data_in,
volatile void* expandedKey,
short Nr,
volatile void* data_out);
