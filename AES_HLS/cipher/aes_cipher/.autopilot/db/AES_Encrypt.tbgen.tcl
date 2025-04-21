set C_TypeInfoList {{ 
"AES_Encrypt" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"plaintext": [[], {"array": [ {"scalar": "unsigned char"}, [16]]}] }, {"expandedKey": [[], {"array": [ {"scalar": "unsigned char"}, [240]]}] }, {"Nr": [[], {"scalar": "unsigned short"}] }, {"ciphertext": [[], {"array": [ {"scalar": "unsigned char"}, [16]]}] }],[],""]
}}
set moduleName AES_Encrypt
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {AES_Encrypt}
set C_modelType { void 0 }
set C_modelArgList {
	{ plaintext int 8 regular {axi_s 0 volatile  { plaintext Data } }  }
	{ expandedKey int 8 regular {axi_s 0 volatile  { expandedKey Data } }  }
	{ Nr uint 16 regular  }
	{ ciphertext int 8 regular {axi_s 1 volatile  { ciphertext Data } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "plaintext", "interface" : "axis", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "plaintext","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 15,"step" : 1}]}]}]} , 
 	{ "Name" : "expandedKey", "interface" : "axis", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "expandedKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 239,"step" : 1}]}]}]} , 
 	{ "Name" : "Nr", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "Nr","cData": "unsigned short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "ciphertext", "interface" : "axis", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ciphertext","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 15,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 16
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ plaintext_TDATA sc_in sc_lv 8 signal 0 } 
	{ plaintext_TVALID sc_in sc_logic 1 invld 0 } 
	{ plaintext_TREADY sc_out sc_logic 1 inacc 0 } 
	{ expandedKey_TDATA sc_in sc_lv 8 signal 1 } 
	{ expandedKey_TVALID sc_in sc_logic 1 invld 1 } 
	{ expandedKey_TREADY sc_out sc_logic 1 inacc 1 } 
	{ Nr sc_in sc_lv 16 signal 2 } 
	{ ciphertext_TDATA sc_out sc_lv 8 signal 3 } 
	{ ciphertext_TVALID sc_out sc_logic 1 outvld 3 } 
	{ ciphertext_TREADY sc_in sc_logic 1 outacc 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "plaintext_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "plaintext", "role": "TDATA" }} , 
 	{ "name": "plaintext_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "plaintext", "role": "TVALID" }} , 
 	{ "name": "plaintext_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "plaintext", "role": "TREADY" }} , 
 	{ "name": "expandedKey_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "expandedKey", "role": "TDATA" }} , 
 	{ "name": "expandedKey_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "expandedKey", "role": "TVALID" }} , 
 	{ "name": "expandedKey_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "expandedKey", "role": "TREADY" }} , 
 	{ "name": "Nr", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "Nr", "role": "default" }} , 
 	{ "name": "ciphertext_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ciphertext", "role": "TDATA" }} , 
 	{ "name": "ciphertext_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "ciphertext", "role": "TVALID" }} , 
 	{ "name": "ciphertext_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "ciphertext", "role": "TREADY" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "6", "8"],
		"CDFG" : "AES_Encrypt",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state5", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_AddRoundKey_fu_295"},
			{"State" : "ap_ST_fsm_state13", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_AddRoundKey_fu_295"},
			{"State" : "ap_ST_fsm_state11", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_MixColumns_fu_315"},
			{"State" : "ap_ST_fsm_state7", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_SubBytes_fu_322"},
			{"State" : "ap_ST_fsm_state9", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_ShiftRows_fu_329"}],
		"Port" : [
			{"Name" : "plaintext", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "plaintext_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "expandedKey", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_AddRoundKey_fu_295", "Port" : "roundKey"}]},
			{"Name" : "Nr", "Type" : "None", "Direction" : "I"},
			{"Name" : "ciphertext", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "ciphertext_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "cipher", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_MixColumns_fu_315", "Port" : "cipher"},
					{"ID" : "6", "SubInstance" : "grp_SubBytes_fu_322", "Port" : "cipher"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.state_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_AddRoundKey_fu_295", "Parent" : "0",
		"CDFG" : "AddRoundKey",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "roundKey", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "roundKey_TDATA_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MixColumns_fu_315", "Parent" : "0", "Child" : ["4", "5"],
		"CDFG" : "MixColumns",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "cipher", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MixColumns_fu_315.cipher_U", "Parent" : "3"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MixColumns_fu_315.tmp_state_U", "Parent" : "3"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_SubBytes_fu_322", "Parent" : "0", "Child" : ["7"],
		"CDFG" : "SubBytes",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "cipher", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_SubBytes_fu_322.cipher_U", "Parent" : "6"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_ShiftRows_fu_329", "Parent" : "0", "Child" : ["9"],
		"CDFG" : "ShiftRows",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShiftRows_fu_329.tmp_state_U", "Parent" : "8"}]}


set ArgLastReadFirstWriteLatency {
	AES_Encrypt {
		plaintext {Type I LastRead 1 FirstWrite -1}
		expandedKey {Type I LastRead 15 FirstWrite -1}
		Nr {Type I LastRead 0 FirstWrite -1}
		ciphertext {Type O LastRead -1 FirstWrite 5}
		cipher {Type I LastRead -1 FirstWrite -1}}
	AddRoundKey {
		state {Type IO LastRead 8 FirstWrite 8}
		roundKey {Type I LastRead 15 FirstWrite -1}}
	MixColumns {
		state {Type IO LastRead 9 FirstWrite 12}
		cipher {Type I LastRead -1 FirstWrite -1}}
	SubBytes {
		state {Type IO LastRead 8 FirstWrite 8}
		cipher {Type I LastRead -1 FirstWrite -1}}
	ShiftRows {
		state {Type IO LastRead 8 FirstWrite 10}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	plaintext { axis {  { plaintext_TDATA in_data 0 8 }  { plaintext_TVALID in_vld 0 1 }  { plaintext_TREADY in_acc 1 1 } } }
	expandedKey { axis {  { expandedKey_TDATA in_data 0 8 }  { expandedKey_TVALID in_vld 0 1 }  { expandedKey_TREADY in_acc 1 1 } } }
	Nr { ap_none {  { Nr in_data 0 16 } } }
	ciphertext { axis {  { ciphertext_TDATA out_data 1 8 }  { ciphertext_TVALID out_vld 1 1 }  { ciphertext_TREADY out_acc 0 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
