set moduleName AES_Full_Pipeline_L_rounds2
set isTopModule 0
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {AES_Full_Pipeline_L_rounds2}
set C_modelType { void 0 }
set C_modelArgList {
	{ Nr int 16 regular  }
	{ state_1 int 8 regular {array 16 { 2 2 } 1 1 }  }
	{ trunc_ln int 4 regular  }
	{ expandedKey int 8 regular {array 176 { 1 } 1 1 }  }
	{ sub19_i int 17 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "Nr", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "state_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "trunc_ln", "interface" : "wire", "bitwidth" : 4, "direction" : "READONLY"} , 
 	{ "Name" : "expandedKey", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "sub19_i", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 22
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ Nr sc_in sc_lv 16 signal 0 } 
	{ state_1_address0 sc_out sc_lv 4 signal 1 } 
	{ state_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ state_1_we0 sc_out sc_logic 1 signal 1 } 
	{ state_1_d0 sc_out sc_lv 8 signal 1 } 
	{ state_1_q0 sc_in sc_lv 8 signal 1 } 
	{ state_1_address1 sc_out sc_lv 4 signal 1 } 
	{ state_1_ce1 sc_out sc_logic 1 signal 1 } 
	{ state_1_we1 sc_out sc_logic 1 signal 1 } 
	{ state_1_d1 sc_out sc_lv 8 signal 1 } 
	{ state_1_q1 sc_in sc_lv 8 signal 1 } 
	{ trunc_ln sc_in sc_lv 4 signal 2 } 
	{ expandedKey_address0 sc_out sc_lv 8 signal 3 } 
	{ expandedKey_ce0 sc_out sc_logic 1 signal 3 } 
	{ expandedKey_q0 sc_in sc_lv 8 signal 3 } 
	{ sub19_i sc_in sc_lv 17 signal 4 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "Nr", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "Nr", "role": "default" }} , 
 	{ "name": "state_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "state_1", "role": "address0" }} , 
 	{ "name": "state_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "state_1", "role": "ce0" }} , 
 	{ "name": "state_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "state_1", "role": "we0" }} , 
 	{ "name": "state_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_1", "role": "d0" }} , 
 	{ "name": "state_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_1", "role": "q0" }} , 
 	{ "name": "state_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "state_1", "role": "address1" }} , 
 	{ "name": "state_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "state_1", "role": "ce1" }} , 
 	{ "name": "state_1_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "state_1", "role": "we1" }} , 
 	{ "name": "state_1_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_1", "role": "d1" }} , 
 	{ "name": "state_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_1", "role": "q1" }} , 
 	{ "name": "trunc_ln", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "trunc_ln", "role": "default" }} , 
 	{ "name": "expandedKey_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "expandedKey", "role": "address0" }} , 
 	{ "name": "expandedKey_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "expandedKey", "role": "ce0" }} , 
 	{ "name": "expandedKey_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "expandedKey", "role": "q0" }} , 
 	{ "name": "sub19_i", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "sub19_i", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "4", "5", "10"],
		"CDFG" : "AES_Full_Pipeline_L_rounds2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "Nr", "Type" : "None", "Direction" : "I"},
			{"Name" : "state_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_InvSubBytes_fu_100", "Port" : "state", "Inst_start_state" : "11", "Inst_end_state" : "28"},
					{"ID" : "4", "SubInstance" : "grp_AddRoundKey_fu_108", "Port" : "state", "Inst_start_state" : "29", "Inst_end_state" : "45"},
					{"ID" : "1", "SubInstance" : "grp_InvShiftRows_fu_94", "Port" : "state", "Inst_start_state" : "2", "Inst_end_state" : "10"},
					{"ID" : "5", "SubInstance" : "grp_InvMixColumns_fu_117", "Port" : "state", "Inst_start_state" : "46", "Inst_end_state" : "63"}]},
			{"Name" : "trunc_ln", "Type" : "None", "Direction" : "I"},
			{"Name" : "expandedKey", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_AddRoundKey_fu_108", "Port" : "expandedKey", "Inst_start_state" : "29", "Inst_end_state" : "45"}]},
			{"Name" : "sub19_i", "Type" : "None", "Direction" : "I"},
			{"Name" : "inverted_s_box", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_InvSubBytes_fu_100", "Port" : "inverted_s_box", "Inst_start_state" : "11", "Inst_end_state" : "28"}]},
			{"Name" : "mul14", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_InvMixColumns_fu_117", "Port" : "mul14", "Inst_start_state" : "46", "Inst_end_state" : "63"}]},
			{"Name" : "mul11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_InvMixColumns_fu_117", "Port" : "mul11", "Inst_start_state" : "46", "Inst_end_state" : "63"}]},
			{"Name" : "mul13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_InvMixColumns_fu_117", "Port" : "mul13", "Inst_start_state" : "46", "Inst_end_state" : "63"}]},
			{"Name" : "mul09", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_InvMixColumns_fu_117", "Port" : "mul09", "Inst_start_state" : "46", "Inst_end_state" : "63"}]}],
		"Loop" : [
			{"Name" : "L_rounds", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "62", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_InvShiftRows_fu_94", "Parent" : "0",
		"CDFG" : "InvShiftRows",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "9",
		"VariableLatency" : "0", "ExactLatency" : "8", "EstimateLatencyMin" : "8", "EstimateLatencyMax" : "8",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_InvSubBytes_fu_100", "Parent" : "0", "Child" : ["3"],
		"CDFG" : "InvSubBytes",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "18",
		"VariableLatency" : "0", "ExactLatency" : "17", "EstimateLatencyMin" : "17", "EstimateLatencyMax" : "17",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "inverted_s_box", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_InvSubBytes_fu_100.inverted_s_box_U", "Parent" : "2"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_AddRoundKey_fu_108", "Parent" : "0",
		"CDFG" : "AddRoundKey",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "17",
		"VariableLatency" : "0", "ExactLatency" : "16", "EstimateLatencyMin" : "16", "EstimateLatencyMax" : "16",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "expandedKey", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "roundKey", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_InvMixColumns_fu_117", "Parent" : "0", "Child" : ["6", "7", "8", "9"],
		"CDFG" : "InvMixColumns",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "18",
		"VariableLatency" : "0", "ExactLatency" : "17", "EstimateLatencyMin" : "17", "EstimateLatencyMax" : "17",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "mul14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mul11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mul13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mul09", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_InvMixColumns_fu_117.mul14_U", "Parent" : "5"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_InvMixColumns_fu_117.mul11_U", "Parent" : "5"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_InvMixColumns_fu_117.mul13_U", "Parent" : "5"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_InvMixColumns_fu_117.mul09_U", "Parent" : "5"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flow_control_loop_pipe_sequential_init_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	AES_Full_Pipeline_L_rounds2 {
		Nr {Type I LastRead 0 FirstWrite -1}
		state_1 {Type IO LastRead 8 FirstWrite 1}
		trunc_ln {Type I LastRead 0 FirstWrite -1}
		expandedKey {Type I LastRead 15 FirstWrite -1}
		sub19_i {Type I LastRead 0 FirstWrite -1}
		inverted_s_box {Type I LastRead -1 FirstWrite -1}
		mul14 {Type I LastRead -1 FirstWrite -1}
		mul11 {Type I LastRead -1 FirstWrite -1}
		mul13 {Type I LastRead -1 FirstWrite -1}
		mul09 {Type I LastRead -1 FirstWrite -1}}
	InvShiftRows {
		state {Type IO LastRead 6 FirstWrite 1}}
	InvSubBytes {
		state {Type IO LastRead 8 FirstWrite 8}
		inverted_s_box {Type I LastRead -1 FirstWrite -1}}
	AddRoundKey {
		state {Type IO LastRead 8 FirstWrite 8}
		expandedKey {Type I LastRead 15 FirstWrite -1}
		roundKey {Type I LastRead 0 FirstWrite -1}}
	InvMixColumns {
		state {Type IO LastRead 8 FirstWrite 8}
		mul14 {Type I LastRead -1 FirstWrite -1}
		mul11 {Type I LastRead -1 FirstWrite -1}
		mul13 {Type I LastRead -1 FirstWrite -1}
		mul09 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	Nr { ap_none {  { Nr in_data 0 16 } } }
	state_1 { ap_memory {  { state_1_address0 mem_address 1 4 }  { state_1_ce0 mem_ce 1 1 }  { state_1_we0 mem_we 1 1 }  { state_1_d0 mem_din 1 8 }  { state_1_q0 mem_dout 0 8 }  { state_1_address1 MemPortADDR2 1 4 }  { state_1_ce1 MemPortCE2 1 1 }  { state_1_we1 MemPortWE2 1 1 }  { state_1_d1 MemPortDIN2 1 8 }  { state_1_q1 MemPortDOUT2 0 8 } } }
	trunc_ln { ap_none {  { trunc_ln in_data 0 4 } } }
	expandedKey { ap_memory {  { expandedKey_address0 mem_address 1 8 }  { expandedKey_ce0 mem_ce 1 1 }  { expandedKey_q0 mem_dout 0 8 } } }
	sub19_i { ap_none {  { sub19_i in_data 0 17 } } }
}
