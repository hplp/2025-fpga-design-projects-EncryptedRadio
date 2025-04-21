// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.2 (64-bit)
// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xaes_full.h"

extern XAes_full_Config XAes_full_ConfigTable[];

XAes_full_Config *XAes_full_LookupConfig(u16 DeviceId) {
	XAes_full_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XAES_FULL_NUM_INSTANCES; Index++) {
		if (XAes_full_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XAes_full_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XAes_full_Initialize(XAes_full *InstancePtr, u16 DeviceId) {
	XAes_full_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XAes_full_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XAes_full_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

