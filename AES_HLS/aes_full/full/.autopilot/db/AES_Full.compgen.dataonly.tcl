# This script segment is generated automatically by AutoPilot

set axilite_register_dict [dict create]
set port_CRTLS {
mode_cipher { 
	dir I
	width 1
	depth 1
	mode ap_none
	offset 16
	offset_end 23
}
mode_inverse_cipher { 
	dir I
	width 1
	depth 1
	mode ap_none
	offset 24
	offset_end 31
}
data_in { 
	dir I
	width 8
	depth 16
	mode ap_memory
	offset 32
	offset_end 47
	core_op ram_1p
	core_impl auto
	core_latency 1
	byte_write 0
}
Nr { 
	dir I
	width 16
	depth 1
	mode ap_none
	offset 48
	offset_end 55
}
data_out { 
	dir O
	width 8
	depth 16
	mode ap_memory
	offset 64
	offset_end 79
	core_op ram_1p
	core_impl auto
	core_latency 1
	byte_write 0
}
expandedKey { 
	dir I
	width 8
	depth 176
	mode ap_memory
	offset 256
	offset_end 511
	core_op ram_1p
	core_impl auto
	core_latency 1
	byte_write 0
}
ap_start {
	mailbox_input_ctrl 0
	mailbox_output_ctrl 0
	auto_restart_enabled 1
	auto_restart_counter_num 0
	auto_restart_counter_offset 16
	auto_restart_counter_size 32
}
ap_done { }
ap_ready { }
ap_idle { }
ap_local_deadlock { 
	dir O
	width 1
	depth 1
	mode ap_none
	offset -1
	offset_end -1
}
interrupt {
    ap_local_deadlock 5
}
}
dict set axilite_register_dict CRTLS $port_CRTLS


