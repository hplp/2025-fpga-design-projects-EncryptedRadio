// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.2 (64-bit)
// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xaes_full.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XAes_full_CfgInitialize(XAes_full *InstancePtr, XAes_full_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Crtls_BaseAddress = ConfigPtr->Crtls_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XAes_full_Start(XAes_full *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAes_full_ReadReg(InstancePtr->Crtls_BaseAddress, XAES_FULL_CRTLS_ADDR_AP_CTRL) & 0x80;
    XAes_full_WriteReg(InstancePtr->Crtls_BaseAddress, XAES_FULL_CRTLS_ADDR_AP_CTRL, Data | 0x01);
}

u32 XAes_full_IsDone(XAes_full *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAes_full_ReadReg(InstancePtr->Crtls_BaseAddress, XAES_FULL_CRTLS_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XAes_full_IsIdle(XAes_full *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAes_full_ReadReg(InstancePtr->Crtls_BaseAddress, XAES_FULL_CRTLS_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XAes_full_IsReady(XAes_full *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAes_full_ReadReg(InstancePtr->Crtls_BaseAddress, XAES_FULL_CRTLS_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XAes_full_EnableAutoRestart(XAes_full *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAes_full_WriteReg(InstancePtr->Crtls_BaseAddress, XAES_FULL_CRTLS_ADDR_AP_CTRL, 0x80);
}

void XAes_full_DisableAutoRestart(XAes_full *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAes_full_WriteReg(InstancePtr->Crtls_BaseAddress, XAES_FULL_CRTLS_ADDR_AP_CTRL, 0);
}

void XAes_full_Set_mode_cipher(XAes_full *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAes_full_WriteReg(InstancePtr->Crtls_BaseAddress, XAES_FULL_CRTLS_ADDR_MODE_CIPHER_DATA, Data);
}

u32 XAes_full_Get_mode_cipher(XAes_full *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAes_full_ReadReg(InstancePtr->Crtls_BaseAddress, XAES_FULL_CRTLS_ADDR_MODE_CIPHER_DATA);
    return Data;
}

void XAes_full_Set_mode_inverse_cipher(XAes_full *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAes_full_WriteReg(InstancePtr->Crtls_BaseAddress, XAES_FULL_CRTLS_ADDR_MODE_INVERSE_CIPHER_DATA, Data);
}

u32 XAes_full_Get_mode_inverse_cipher(XAes_full *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAes_full_ReadReg(InstancePtr->Crtls_BaseAddress, XAES_FULL_CRTLS_ADDR_MODE_INVERSE_CIPHER_DATA);
    return Data;
}

void XAes_full_Set_Nr(XAes_full *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAes_full_WriteReg(InstancePtr->Crtls_BaseAddress, XAES_FULL_CRTLS_ADDR_NR_DATA, Data);
}

u32 XAes_full_Get_Nr(XAes_full *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAes_full_ReadReg(InstancePtr->Crtls_BaseAddress, XAES_FULL_CRTLS_ADDR_NR_DATA);
    return Data;
}

u32 XAes_full_Get_data_in_BaseAddress(XAes_full *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Crtls_BaseAddress + XAES_FULL_CRTLS_ADDR_DATA_IN_BASE);
}

u32 XAes_full_Get_data_in_HighAddress(XAes_full *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Crtls_BaseAddress + XAES_FULL_CRTLS_ADDR_DATA_IN_HIGH);
}

u32 XAes_full_Get_data_in_TotalBytes(XAes_full *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XAES_FULL_CRTLS_ADDR_DATA_IN_HIGH - XAES_FULL_CRTLS_ADDR_DATA_IN_BASE + 1);
}

u32 XAes_full_Get_data_in_BitWidth(XAes_full *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XAES_FULL_CRTLS_WIDTH_DATA_IN;
}

u32 XAes_full_Get_data_in_Depth(XAes_full *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XAES_FULL_CRTLS_DEPTH_DATA_IN;
}

u32 XAes_full_Write_data_in_Words(XAes_full *InstancePtr, int offset, word_type *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XAES_FULL_CRTLS_ADDR_DATA_IN_HIGH - XAES_FULL_CRTLS_ADDR_DATA_IN_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Crtls_BaseAddress + XAES_FULL_CRTLS_ADDR_DATA_IN_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XAes_full_Read_data_in_Words(XAes_full *InstancePtr, int offset, word_type *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XAES_FULL_CRTLS_ADDR_DATA_IN_HIGH - XAES_FULL_CRTLS_ADDR_DATA_IN_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Crtls_BaseAddress + XAES_FULL_CRTLS_ADDR_DATA_IN_BASE + (offset + i)*4);
    }
    return length;
}

u32 XAes_full_Write_data_in_Bytes(XAes_full *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XAES_FULL_CRTLS_ADDR_DATA_IN_HIGH - XAES_FULL_CRTLS_ADDR_DATA_IN_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Crtls_BaseAddress + XAES_FULL_CRTLS_ADDR_DATA_IN_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XAes_full_Read_data_in_Bytes(XAes_full *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XAES_FULL_CRTLS_ADDR_DATA_IN_HIGH - XAES_FULL_CRTLS_ADDR_DATA_IN_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Crtls_BaseAddress + XAES_FULL_CRTLS_ADDR_DATA_IN_BASE + offset + i);
    }
    return length;
}

u32 XAes_full_Get_data_out_BaseAddress(XAes_full *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Crtls_BaseAddress + XAES_FULL_CRTLS_ADDR_DATA_OUT_BASE);
}

u32 XAes_full_Get_data_out_HighAddress(XAes_full *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Crtls_BaseAddress + XAES_FULL_CRTLS_ADDR_DATA_OUT_HIGH);
}

u32 XAes_full_Get_data_out_TotalBytes(XAes_full *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XAES_FULL_CRTLS_ADDR_DATA_OUT_HIGH - XAES_FULL_CRTLS_ADDR_DATA_OUT_BASE + 1);
}

u32 XAes_full_Get_data_out_BitWidth(XAes_full *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XAES_FULL_CRTLS_WIDTH_DATA_OUT;
}

u32 XAes_full_Get_data_out_Depth(XAes_full *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XAES_FULL_CRTLS_DEPTH_DATA_OUT;
}

u32 XAes_full_Write_data_out_Words(XAes_full *InstancePtr, int offset, word_type *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XAES_FULL_CRTLS_ADDR_DATA_OUT_HIGH - XAES_FULL_CRTLS_ADDR_DATA_OUT_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Crtls_BaseAddress + XAES_FULL_CRTLS_ADDR_DATA_OUT_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XAes_full_Read_data_out_Words(XAes_full *InstancePtr, int offset, word_type *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XAES_FULL_CRTLS_ADDR_DATA_OUT_HIGH - XAES_FULL_CRTLS_ADDR_DATA_OUT_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Crtls_BaseAddress + XAES_FULL_CRTLS_ADDR_DATA_OUT_BASE + (offset + i)*4);
    }
    return length;
}

u32 XAes_full_Write_data_out_Bytes(XAes_full *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XAES_FULL_CRTLS_ADDR_DATA_OUT_HIGH - XAES_FULL_CRTLS_ADDR_DATA_OUT_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Crtls_BaseAddress + XAES_FULL_CRTLS_ADDR_DATA_OUT_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XAes_full_Read_data_out_Bytes(XAes_full *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XAES_FULL_CRTLS_ADDR_DATA_OUT_HIGH - XAES_FULL_CRTLS_ADDR_DATA_OUT_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Crtls_BaseAddress + XAES_FULL_CRTLS_ADDR_DATA_OUT_BASE + offset + i);
    }
    return length;
}

u32 XAes_full_Get_expandedKey_BaseAddress(XAes_full *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Crtls_BaseAddress + XAES_FULL_CRTLS_ADDR_EXPANDEDKEY_BASE);
}

u32 XAes_full_Get_expandedKey_HighAddress(XAes_full *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Crtls_BaseAddress + XAES_FULL_CRTLS_ADDR_EXPANDEDKEY_HIGH);
}

u32 XAes_full_Get_expandedKey_TotalBytes(XAes_full *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XAES_FULL_CRTLS_ADDR_EXPANDEDKEY_HIGH - XAES_FULL_CRTLS_ADDR_EXPANDEDKEY_BASE + 1);
}

u32 XAes_full_Get_expandedKey_BitWidth(XAes_full *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XAES_FULL_CRTLS_WIDTH_EXPANDEDKEY;
}

u32 XAes_full_Get_expandedKey_Depth(XAes_full *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XAES_FULL_CRTLS_DEPTH_EXPANDEDKEY;
}

u32 XAes_full_Write_expandedKey_Words(XAes_full *InstancePtr, int offset, word_type *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XAES_FULL_CRTLS_ADDR_EXPANDEDKEY_HIGH - XAES_FULL_CRTLS_ADDR_EXPANDEDKEY_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Crtls_BaseAddress + XAES_FULL_CRTLS_ADDR_EXPANDEDKEY_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XAes_full_Read_expandedKey_Words(XAes_full *InstancePtr, int offset, word_type *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XAES_FULL_CRTLS_ADDR_EXPANDEDKEY_HIGH - XAES_FULL_CRTLS_ADDR_EXPANDEDKEY_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Crtls_BaseAddress + XAES_FULL_CRTLS_ADDR_EXPANDEDKEY_BASE + (offset + i)*4);
    }
    return length;
}

u32 XAes_full_Write_expandedKey_Bytes(XAes_full *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XAES_FULL_CRTLS_ADDR_EXPANDEDKEY_HIGH - XAES_FULL_CRTLS_ADDR_EXPANDEDKEY_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Crtls_BaseAddress + XAES_FULL_CRTLS_ADDR_EXPANDEDKEY_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XAes_full_Read_expandedKey_Bytes(XAes_full *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XAES_FULL_CRTLS_ADDR_EXPANDEDKEY_HIGH - XAES_FULL_CRTLS_ADDR_EXPANDEDKEY_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Crtls_BaseAddress + XAES_FULL_CRTLS_ADDR_EXPANDEDKEY_BASE + offset + i);
    }
    return length;
}

void XAes_full_InterruptGlobalEnable(XAes_full *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAes_full_WriteReg(InstancePtr->Crtls_BaseAddress, XAES_FULL_CRTLS_ADDR_GIE, 1);
}

void XAes_full_InterruptGlobalDisable(XAes_full *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAes_full_WriteReg(InstancePtr->Crtls_BaseAddress, XAES_FULL_CRTLS_ADDR_GIE, 0);
}

void XAes_full_InterruptEnable(XAes_full *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XAes_full_ReadReg(InstancePtr->Crtls_BaseAddress, XAES_FULL_CRTLS_ADDR_IER);
    XAes_full_WriteReg(InstancePtr->Crtls_BaseAddress, XAES_FULL_CRTLS_ADDR_IER, Register | Mask);
}

void XAes_full_InterruptDisable(XAes_full *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XAes_full_ReadReg(InstancePtr->Crtls_BaseAddress, XAES_FULL_CRTLS_ADDR_IER);
    XAes_full_WriteReg(InstancePtr->Crtls_BaseAddress, XAES_FULL_CRTLS_ADDR_IER, Register & (~Mask));
}

void XAes_full_InterruptClear(XAes_full *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAes_full_WriteReg(InstancePtr->Crtls_BaseAddress, XAES_FULL_CRTLS_ADDR_ISR, Mask);
}

u32 XAes_full_InterruptGetEnabled(XAes_full *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XAes_full_ReadReg(InstancePtr->Crtls_BaseAddress, XAES_FULL_CRTLS_ADDR_IER);
}

u32 XAes_full_InterruptGetStatus(XAes_full *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XAes_full_ReadReg(InstancePtr->Crtls_BaseAddress, XAES_FULL_CRTLS_ADDR_ISR);
}

