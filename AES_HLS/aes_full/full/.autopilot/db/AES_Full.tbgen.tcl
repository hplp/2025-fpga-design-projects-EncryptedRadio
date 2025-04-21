set moduleName AES_Full
set isTopModule 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {AES_Full}
set C_modelType { void 0 }
set C_modelArgList {
	{ mode_cipher uint 1 regular {axi_slave 0}  }
	{ mode_inverse_cipher uint 1 regular {axi_slave 0}  }
	{ data_in int 8 regular {axi_slave 0}  }
	{ expandedKey int 8 regular {axi_slave 0}  }
	{ Nr uint 16 regular {axi_slave 0}  }
	{ data_out int 8 regular {axi_slave 1}  }
	{ ap_local_deadlock int 1 unused {axi_slave 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "mode_cipher", "interface" : "axi_slave", "bundle":"CRTLS","type":"ap_none","bitwidth" : 1, "direction" : "READONLY", "offset" : {"in":16}, "offset_end" : {"in":23}} , 
 	{ "Name" : "mode_inverse_cipher", "interface" : "axi_slave", "bundle":"CRTLS","type":"ap_none","bitwidth" : 1, "direction" : "READONLY", "offset" : {"in":24}, "offset_end" : {"in":31}} , 
 	{ "Name" : "data_in", "interface" : "axi_slave", "bundle":"CRTLS","type":"ap_memory","bitwidth" : 8, "direction" : "READONLY", "offset" : {"in":32}, "offset_end" : {"in":47}} , 
 	{ "Name" : "expandedKey", "interface" : "axi_slave", "bundle":"CRTLS","type":"ap_memory","bitwidth" : 8, "direction" : "READONLY", "offset" : {"in":256}, "offset_end" : {"in":511}} , 
 	{ "Name" : "Nr", "interface" : "axi_slave", "bundle":"CRTLS","type":"ap_none","bitwidth" : 16, "direction" : "READONLY", "offset" : {"in":48}, "offset_end" : {"in":55}} , 
 	{ "Name" : "data_out", "interface" : "axi_slave", "bundle":"CRTLS","type":"ap_memory","bitwidth" : 8, "direction" : "WRITEONLY", "offset" : {"out":64}, "offset_end" : {"out":79}} , 
 	{ "Name" : "ap_local_deadlock", "interface" : "axi_slave", "bundle":"CRTLS","type":"ap_none","bitwidth" : 1, "direction" : "WRITEONLY", "offset" : {"out":0}, "offset_end" : {"out":4294967295}} ]}
# RTL Port declarations: 
set portNum 21
set portList { 
	{ ap_local_block sc_out sc_logic 1 signal -1 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ s_axi_CRTLS_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CRTLS_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CRTLS_AWADDR sc_in sc_lv 9 signal -1 } 
	{ s_axi_CRTLS_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CRTLS_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CRTLS_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_CRTLS_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_CRTLS_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CRTLS_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CRTLS_ARADDR sc_in sc_lv 9 signal -1 } 
	{ s_axi_CRTLS_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_CRTLS_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_CRTLS_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_CRTLS_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_CRTLS_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_CRTLS_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_CRTLS_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_CRTLS_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "CRTLS", "role": "AWADDR" },"address":[{"name":"AES_Full","role":"start","value":"0","valid_bit":"0"},{"name":"AES_Full","role":"continue","value":"0","valid_bit":"4"},{"name":"AES_Full","role":"auto_start","value":"0","valid_bit":"7"},{"name":"mode_cipher","role":"data","value":"16"},{"name":"mode_inverse_cipher","role":"data","value":"24"},{"name":"data_in","role":"data","value":"32"},{"name":"Nr","role":"data","value":"48"},{"name":"expandedKey","role":"data","value":"256"}] },
	{ "name": "s_axi_CRTLS_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTLS", "role": "AWVALID" } },
	{ "name": "s_axi_CRTLS_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTLS", "role": "AWREADY" } },
	{ "name": "s_axi_CRTLS_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTLS", "role": "WVALID" } },
	{ "name": "s_axi_CRTLS_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTLS", "role": "WREADY" } },
	{ "name": "s_axi_CRTLS_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "CRTLS", "role": "WDATA" } },
	{ "name": "s_axi_CRTLS_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "CRTLS", "role": "WSTRB" } },
	{ "name": "s_axi_CRTLS_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "CRTLS", "role": "ARADDR" },"address":[{"name":"AES_Full","role":"start","value":"0","valid_bit":"0"},{"name":"AES_Full","role":"done","value":"0","valid_bit":"1"},{"name":"AES_Full","role":"idle","value":"0","valid_bit":"2"},{"name":"AES_Full","role":"ready","value":"0","valid_bit":"3"},{"name":"AES_Full","role":"auto_start","value":"0","valid_bit":"7"},{"name":"data_out","role":"data","value":"64"},{"name":"ap_local_deadlock","role":"data","value":"0"}] },
	{ "name": "s_axi_CRTLS_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTLS", "role": "ARVALID" } },
	{ "name": "s_axi_CRTLS_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTLS", "role": "ARREADY" } },
	{ "name": "s_axi_CRTLS_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTLS", "role": "RVALID" } },
	{ "name": "s_axi_CRTLS_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTLS", "role": "RREADY" } },
	{ "name": "s_axi_CRTLS_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "CRTLS", "role": "RDATA" } },
	{ "name": "s_axi_CRTLS_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "CRTLS", "role": "RRESP" } },
	{ "name": "s_axi_CRTLS_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTLS", "role": "BVALID" } },
	{ "name": "s_axi_CRTLS_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTLS", "role": "BREADY" } },
	{ "name": "s_axi_CRTLS_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "CRTLS", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTLS", "role": "interrupt" } }, 
 	{ "name": "ap_local_block", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ap_local_block", "role": "default" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "5", "6", "15", "17", "19", "30", "32"],
		"CDFG" : "AES_Full",
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
			{"Name" : "mode_cipher", "Type" : "None", "Direction" : "I"},
			{"Name" : "mode_inverse_cipher", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_in", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_AES_Full_Pipeline_L_copy_fu_122", "Port" : "data_in", "Inst_start_state" : "1", "Inst_end_state" : "2"},
					{"ID" : "17", "SubInstance" : "grp_AES_Full_Pipeline_L_copy1_fu_161", "Port" : "data_in", "Inst_start_state" : "23", "Inst_end_state" : "24"}]},
			{"Name" : "expandedKey", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_AES_Full_Pipeline_L_rounds_fu_139", "Port" : "expandedKey", "Inst_start_state" : "20", "Inst_end_state" : "21"},
					{"ID" : "19", "SubInstance" : "grp_AES_Full_Pipeline_L_rounds2_fu_168", "Port" : "expandedKey", "Inst_start_state" : "42", "Inst_end_state" : "43"},
					{"ID" : "5", "SubInstance" : "grp_AddRoundKey_fu_130", "Port" : "expandedKey", "Inst_start_state" : "25", "Inst_end_state" : "41"}]},
			{"Name" : "Nr", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_out", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "15", "SubInstance" : "grp_AES_Full_Pipeline_L_copy_o_fu_154", "Port" : "data_out", "Inst_start_state" : "22", "Inst_end_state" : "23"},
					{"ID" : "30", "SubInstance" : "grp_AES_Full_Pipeline_L_copy_o3_fu_188", "Port" : "data_out", "Inst_start_state" : "44", "Inst_end_state" : "45"}]},
			{"Name" : "s_box", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_AES_Full_Pipeline_L_rounds_fu_139", "Port" : "s_box", "Inst_start_state" : "20", "Inst_end_state" : "21"}]},
			{"Name" : "mul02", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_AES_Full_Pipeline_L_rounds_fu_139", "Port" : "mul02", "Inst_start_state" : "20", "Inst_end_state" : "21"}]},
			{"Name" : "mul03", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_AES_Full_Pipeline_L_rounds_fu_139", "Port" : "mul03", "Inst_start_state" : "20", "Inst_end_state" : "21"}]},
			{"Name" : "inverted_s_box", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "grp_AES_Full_Pipeline_L_rounds2_fu_168", "Port" : "inverted_s_box", "Inst_start_state" : "42", "Inst_end_state" : "43"}]},
			{"Name" : "mul14", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "grp_AES_Full_Pipeline_L_rounds2_fu_168", "Port" : "mul14", "Inst_start_state" : "42", "Inst_end_state" : "43"}]},
			{"Name" : "mul11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "grp_AES_Full_Pipeline_L_rounds2_fu_168", "Port" : "mul11", "Inst_start_state" : "42", "Inst_end_state" : "43"}]},
			{"Name" : "mul13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "grp_AES_Full_Pipeline_L_rounds2_fu_168", "Port" : "mul13", "Inst_start_state" : "42", "Inst_end_state" : "43"}]},
			{"Name" : "mul09", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "grp_AES_Full_Pipeline_L_rounds2_fu_168", "Port" : "mul09", "Inst_start_state" : "42", "Inst_end_state" : "43"}]},
			{"Name" : "ap_local_deadlock", "Type" : "None", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.state_1_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.state_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_copy_fu_122", "Parent" : "0", "Child" : ["4"],
		"CDFG" : "AES_Full_Pipeline_L_copy",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "18", "EstimateLatencyMax" : "18",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "data_in", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "state", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "L_copy", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_copy_fu_122.flow_control_loop_pipe_sequential_init_U", "Parent" : "3"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_AddRoundKey_fu_130", "Parent" : "0",
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
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_rounds_fu_139", "Parent" : "0", "Child" : ["7", "9", "10", "13", "14"],
		"CDFG" : "AES_Full_Pipeline_L_rounds",
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
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "grp_AddRoundKey_fu_104", "Port" : "state", "Inst_start_state" : "47", "Inst_end_state" : "63"},
					{"ID" : "9", "SubInstance" : "grp_ShiftRows_fu_88", "Port" : "state", "Inst_start_state" : "20", "Inst_end_state" : "28"},
					{"ID" : "10", "SubInstance" : "grp_MixColumns_fu_94", "Port" : "state", "Inst_start_state" : "29", "Inst_end_state" : "46"},
					{"ID" : "7", "SubInstance" : "grp_SubBytes_fu_80", "Port" : "state", "Inst_start_state" : "2", "Inst_end_state" : "19"}]},
			{"Name" : "expandedKey", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "grp_AddRoundKey_fu_104", "Port" : "expandedKey", "Inst_start_state" : "47", "Inst_end_state" : "63"}]},
			{"Name" : "sub_i", "Type" : "None", "Direction" : "I"},
			{"Name" : "s_box", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_SubBytes_fu_80", "Port" : "s_box", "Inst_start_state" : "2", "Inst_end_state" : "19"}]},
			{"Name" : "mul02", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "grp_MixColumns_fu_94", "Port" : "mul02", "Inst_start_state" : "29", "Inst_end_state" : "46"}]},
			{"Name" : "mul03", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "grp_MixColumns_fu_94", "Port" : "mul03", "Inst_start_state" : "29", "Inst_end_state" : "46"}]}],
		"Loop" : [
			{"Name" : "L_rounds", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "62", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_rounds_fu_139.grp_SubBytes_fu_80", "Parent" : "6", "Child" : ["8"],
		"CDFG" : "SubBytes",
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
			{"Name" : "s_box", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "8", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_rounds_fu_139.grp_SubBytes_fu_80.s_box_U", "Parent" : "7"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_rounds_fu_139.grp_ShiftRows_fu_88", "Parent" : "6",
		"CDFG" : "ShiftRows",
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
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_rounds_fu_139.grp_MixColumns_fu_94", "Parent" : "6", "Child" : ["11", "12"],
		"CDFG" : "MixColumns",
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
			{"Name" : "mul02", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mul03", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "11", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_rounds_fu_139.grp_MixColumns_fu_94.mul02_U", "Parent" : "10"},
	{"ID" : "12", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_rounds_fu_139.grp_MixColumns_fu_94.mul03_U", "Parent" : "10"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_rounds_fu_139.grp_AddRoundKey_fu_104", "Parent" : "6",
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
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_rounds_fu_139.flow_control_loop_pipe_sequential_init_U", "Parent" : "6"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_copy_o_fu_154", "Parent" : "0", "Child" : ["16"],
		"CDFG" : "AES_Full_Pipeline_L_copy_o",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "18", "EstimateLatencyMax" : "18",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_out", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "L_copy_o", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_copy_o_fu_154.flow_control_loop_pipe_sequential_init_U", "Parent" : "15"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_copy1_fu_161", "Parent" : "0", "Child" : ["18"],
		"CDFG" : "AES_Full_Pipeline_L_copy1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "18", "EstimateLatencyMax" : "18",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "data_in", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "state_1", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "L_copy", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_copy1_fu_161.flow_control_loop_pipe_sequential_init_U", "Parent" : "17"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_rounds2_fu_168", "Parent" : "0", "Child" : ["20", "21", "23", "24", "29"],
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
					{"ID" : "21", "SubInstance" : "grp_InvSubBytes_fu_100", "Port" : "state", "Inst_start_state" : "11", "Inst_end_state" : "28"},
					{"ID" : "23", "SubInstance" : "grp_AddRoundKey_fu_108", "Port" : "state", "Inst_start_state" : "29", "Inst_end_state" : "45"},
					{"ID" : "20", "SubInstance" : "grp_InvShiftRows_fu_94", "Port" : "state", "Inst_start_state" : "2", "Inst_end_state" : "10"},
					{"ID" : "24", "SubInstance" : "grp_InvMixColumns_fu_117", "Port" : "state", "Inst_start_state" : "46", "Inst_end_state" : "63"}]},
			{"Name" : "trunc_ln", "Type" : "None", "Direction" : "I"},
			{"Name" : "expandedKey", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "23", "SubInstance" : "grp_AddRoundKey_fu_108", "Port" : "expandedKey", "Inst_start_state" : "29", "Inst_end_state" : "45"}]},
			{"Name" : "sub19_i", "Type" : "None", "Direction" : "I"},
			{"Name" : "inverted_s_box", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "grp_InvSubBytes_fu_100", "Port" : "inverted_s_box", "Inst_start_state" : "11", "Inst_end_state" : "28"}]},
			{"Name" : "mul14", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "24", "SubInstance" : "grp_InvMixColumns_fu_117", "Port" : "mul14", "Inst_start_state" : "46", "Inst_end_state" : "63"}]},
			{"Name" : "mul11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "24", "SubInstance" : "grp_InvMixColumns_fu_117", "Port" : "mul11", "Inst_start_state" : "46", "Inst_end_state" : "63"}]},
			{"Name" : "mul13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "24", "SubInstance" : "grp_InvMixColumns_fu_117", "Port" : "mul13", "Inst_start_state" : "46", "Inst_end_state" : "63"}]},
			{"Name" : "mul09", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "24", "SubInstance" : "grp_InvMixColumns_fu_117", "Port" : "mul09", "Inst_start_state" : "46", "Inst_end_state" : "63"}]}],
		"Loop" : [
			{"Name" : "L_rounds", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "62", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_rounds2_fu_168.grp_InvShiftRows_fu_94", "Parent" : "19",
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
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_rounds2_fu_168.grp_InvSubBytes_fu_100", "Parent" : "19", "Child" : ["22"],
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
	{"ID" : "22", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_rounds2_fu_168.grp_InvSubBytes_fu_100.inverted_s_box_U", "Parent" : "21"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_rounds2_fu_168.grp_AddRoundKey_fu_108", "Parent" : "19",
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
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_rounds2_fu_168.grp_InvMixColumns_fu_117", "Parent" : "19", "Child" : ["25", "26", "27", "28"],
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
	{"ID" : "25", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_rounds2_fu_168.grp_InvMixColumns_fu_117.mul14_U", "Parent" : "24"},
	{"ID" : "26", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_rounds2_fu_168.grp_InvMixColumns_fu_117.mul11_U", "Parent" : "24"},
	{"ID" : "27", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_rounds2_fu_168.grp_InvMixColumns_fu_117.mul13_U", "Parent" : "24"},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_rounds2_fu_168.grp_InvMixColumns_fu_117.mul09_U", "Parent" : "24"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_rounds2_fu_168.flow_control_loop_pipe_sequential_init_U", "Parent" : "19"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_copy_o3_fu_188", "Parent" : "0", "Child" : ["31"],
		"CDFG" : "AES_Full_Pipeline_L_copy_o3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "18", "EstimateLatencyMax" : "18",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_out", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "L_copy_o", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_AES_Full_Pipeline_L_copy_o3_fu_188.flow_control_loop_pipe_sequential_init_U", "Parent" : "30"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.CRTLS_s_axi_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	AES_Full {
		mode_cipher {Type I LastRead 0 FirstWrite -1}
		mode_inverse_cipher {Type I LastRead 0 FirstWrite -1}
		data_in {Type I LastRead 0 FirstWrite -1}
		expandedKey {Type I LastRead 15 FirstWrite -1}
		Nr {Type I LastRead 0 FirstWrite -1}
		data_out {Type O LastRead -1 FirstWrite 1}
		s_box {Type I LastRead -1 FirstWrite -1}
		mul02 {Type I LastRead -1 FirstWrite -1}
		mul03 {Type I LastRead -1 FirstWrite -1}
		inverted_s_box {Type I LastRead -1 FirstWrite -1}
		mul14 {Type I LastRead -1 FirstWrite -1}
		mul11 {Type I LastRead -1 FirstWrite -1}
		mul13 {Type I LastRead -1 FirstWrite -1}
		mul09 {Type I LastRead -1 FirstWrite -1}
		ap_local_deadlock {Type O LastRead -1 FirstWrite -1}}
	AES_Full_Pipeline_L_copy {
		data_in {Type I LastRead 0 FirstWrite -1}
		state {Type O LastRead -1 FirstWrite 1}}
	AddRoundKey {
		state {Type IO LastRead 8 FirstWrite 8}
		expandedKey {Type I LastRead 15 FirstWrite -1}
		roundKey {Type I LastRead 0 FirstWrite -1}}
	AES_Full_Pipeline_L_rounds {
		Nr {Type I LastRead 0 FirstWrite -1}
		state {Type IO LastRead 8 FirstWrite 2}
		expandedKey {Type I LastRead 15 FirstWrite -1}
		sub_i {Type I LastRead 0 FirstWrite -1}
		s_box {Type I LastRead -1 FirstWrite -1}
		mul02 {Type I LastRead -1 FirstWrite -1}
		mul03 {Type I LastRead -1 FirstWrite -1}}
	SubBytes {
		state {Type IO LastRead 8 FirstWrite 8}
		s_box {Type I LastRead -1 FirstWrite -1}}
	ShiftRows {
		state {Type IO LastRead 6 FirstWrite 2}}
	MixColumns {
		state {Type IO LastRead 8 FirstWrite 8}
		mul02 {Type I LastRead -1 FirstWrite -1}
		mul03 {Type I LastRead -1 FirstWrite -1}}
	AddRoundKey {
		state {Type IO LastRead 8 FirstWrite 8}
		expandedKey {Type I LastRead 15 FirstWrite -1}
		roundKey {Type I LastRead 0 FirstWrite -1}}
	AES_Full_Pipeline_L_copy_o {
		state {Type I LastRead 0 FirstWrite -1}
		data_out {Type O LastRead -1 FirstWrite 1}}
	AES_Full_Pipeline_L_copy1 {
		data_in {Type I LastRead 0 FirstWrite -1}
		state_1 {Type O LastRead -1 FirstWrite 1}}
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
		mul09 {Type I LastRead -1 FirstWrite -1}}
	AES_Full_Pipeline_L_copy_o3 {
		state_1 {Type I LastRead 0 FirstWrite -1}
		data_out {Type O LastRead -1 FirstWrite 1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
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
