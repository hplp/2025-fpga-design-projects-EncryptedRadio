set moduleName AddRoundKey
set isTopModule 0
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {AddRoundKey}
set C_modelType { void 0 }
set C_modelArgList {
	{ state int 8 regular {array 16 { 2 2 } 1 1 }  }
	{ expandedKey int 8 regular {array 176 { 1 } 1 1 }  }
	{ roundKey int 8 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "state", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "expandedKey", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "roundKey", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 21
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ state_address0 sc_out sc_lv 4 signal 0 } 
	{ state_ce0 sc_out sc_logic 1 signal 0 } 
	{ state_we0 sc_out sc_logic 1 signal 0 } 
	{ state_d0 sc_out sc_lv 8 signal 0 } 
	{ state_q0 sc_in sc_lv 8 signal 0 } 
	{ state_address1 sc_out sc_lv 4 signal 0 } 
	{ state_ce1 sc_out sc_logic 1 signal 0 } 
	{ state_we1 sc_out sc_logic 1 signal 0 } 
	{ state_d1 sc_out sc_lv 8 signal 0 } 
	{ state_q1 sc_in sc_lv 8 signal 0 } 
	{ expandedKey_address0 sc_out sc_lv 8 signal 1 } 
	{ expandedKey_ce0 sc_out sc_logic 1 signal 1 } 
	{ expandedKey_q0 sc_in sc_lv 8 signal 1 } 
	{ roundKey sc_in sc_lv 8 signal 2 } 
	{ ap_ce sc_in sc_logic 1 ce -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "state_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "state", "role": "address0" }} , 
 	{ "name": "state_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "state", "role": "ce0" }} , 
 	{ "name": "state_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "state", "role": "we0" }} , 
 	{ "name": "state_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state", "role": "d0" }} , 
 	{ "name": "state_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state", "role": "q0" }} , 
 	{ "name": "state_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "state", "role": "address1" }} , 
 	{ "name": "state_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "state", "role": "ce1" }} , 
 	{ "name": "state_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "state", "role": "we1" }} , 
 	{ "name": "state_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state", "role": "d1" }} , 
 	{ "name": "state_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state", "role": "q1" }} , 
 	{ "name": "expandedKey_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "expandedKey", "role": "address0" }} , 
 	{ "name": "expandedKey_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "expandedKey", "role": "ce0" }} , 
 	{ "name": "expandedKey_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "expandedKey", "role": "q0" }} , 
 	{ "name": "roundKey", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "roundKey", "role": "default" }} , 
 	{ "name": "ap_ce", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "ce", "bundle":{"name": "ap_ce", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
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
			{"Name" : "roundKey", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	AddRoundKey {
		state {Type IO LastRead 8 FirstWrite 8}
		expandedKey {Type I LastRead 15 FirstWrite -1}
		roundKey {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "16", "Max" : "16"}
	, {"Name" : "Interval", "Min" : "17", "Max" : "17"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	state { ap_memory {  { state_address0 mem_address 1 4 }  { state_ce0 mem_ce 1 1 }  { state_we0 mem_we 1 1 }  { state_d0 mem_din 1 8 }  { state_q0 mem_dout 0 8 }  { state_address1 MemPortADDR2 1 4 }  { state_ce1 MemPortCE2 1 1 }  { state_we1 MemPortWE2 1 1 }  { state_d1 MemPortDIN2 1 8 }  { state_q1 in_data 0 8 } } }
	expandedKey { ap_memory {  { expandedKey_address0 mem_address 1 8 }  { expandedKey_ce0 mem_ce 1 1 }  { expandedKey_q0 in_data 0 8 } } }
	roundKey { ap_none {  { roundKey in_data 0 8 } } }
}
