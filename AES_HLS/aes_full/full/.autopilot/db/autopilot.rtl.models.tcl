set SynModuleInfo {
  {SRCNAME AES_Full_Pipeline_L_copy MODELNAME AES_Full_Pipeline_L_copy RTLNAME AES_Full_AES_Full_Pipeline_L_copy
    SUBMODULES {
      {MODELNAME AES_Full_flow_control_loop_pipe_sequential_init RTLNAME AES_Full_flow_control_loop_pipe_sequential_init BINDTYPE interface TYPE internal_upc_flow_control INSTNAME AES_Full_flow_control_loop_pipe_sequential_init_U}
    }
  }
  {SRCNAME AddRoundKey MODELNAME AddRoundKey RTLNAME AES_Full_AddRoundKey}
  {SRCNAME SubBytes MODELNAME SubBytes RTLNAME AES_Full_SubBytes
    SUBMODULES {
      {MODELNAME AES_Full_SubBytes_s_box_ROM_AUTO_1R RTLNAME AES_Full_SubBytes_s_box_ROM_AUTO_1R BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME ShiftRows MODELNAME ShiftRows RTLNAME AES_Full_ShiftRows}
  {SRCNAME MixColumns MODELNAME MixColumns RTLNAME AES_Full_MixColumns
    SUBMODULES {
      {MODELNAME AES_Full_MixColumns_mul02_ROM_AUTO_1R RTLNAME AES_Full_MixColumns_mul02_ROM_AUTO_1R BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME AES_Full_MixColumns_mul03_ROM_AUTO_1R RTLNAME AES_Full_MixColumns_mul03_ROM_AUTO_1R BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME AES_Full_Pipeline_L_rounds MODELNAME AES_Full_Pipeline_L_rounds RTLNAME AES_Full_AES_Full_Pipeline_L_rounds}
  {SRCNAME AES_Full_Pipeline_L_copy_o MODELNAME AES_Full_Pipeline_L_copy_o RTLNAME AES_Full_AES_Full_Pipeline_L_copy_o}
  {SRCNAME AES_Full_Pipeline_L_copy1 MODELNAME AES_Full_Pipeline_L_copy1 RTLNAME AES_Full_AES_Full_Pipeline_L_copy1}
  {SRCNAME InvShiftRows MODELNAME InvShiftRows RTLNAME AES_Full_InvShiftRows}
  {SRCNAME InvSubBytes MODELNAME InvSubBytes RTLNAME AES_Full_InvSubBytes
    SUBMODULES {
      {MODELNAME AES_Full_InvSubBytes_inverted_s_box_ROM_AUTO_1R RTLNAME AES_Full_InvSubBytes_inverted_s_box_ROM_AUTO_1R BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME InvMixColumns MODELNAME InvMixColumns RTLNAME AES_Full_InvMixColumns
    SUBMODULES {
      {MODELNAME AES_Full_InvMixColumns_mul14_ROM_AUTO_1R RTLNAME AES_Full_InvMixColumns_mul14_ROM_AUTO_1R BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME AES_Full_InvMixColumns_mul11_ROM_AUTO_1R RTLNAME AES_Full_InvMixColumns_mul11_ROM_AUTO_1R BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME AES_Full_InvMixColumns_mul13_ROM_AUTO_1R RTLNAME AES_Full_InvMixColumns_mul13_ROM_AUTO_1R BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME AES_Full_InvMixColumns_mul09_ROM_AUTO_1R RTLNAME AES_Full_InvMixColumns_mul09_ROM_AUTO_1R BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME AES_Full_Pipeline_L_rounds2 MODELNAME AES_Full_Pipeline_L_rounds2 RTLNAME AES_Full_AES_Full_Pipeline_L_rounds2}
  {SRCNAME AES_Full_Pipeline_L_copy_o3 MODELNAME AES_Full_Pipeline_L_copy_o3 RTLNAME AES_Full_AES_Full_Pipeline_L_copy_o3}
  {SRCNAME AES_Full MODELNAME AES_Full RTLNAME AES_Full IS_TOP 1
    SUBMODULES {
      {MODELNAME AES_Full_state_1_RAM_AUTO_1R1W RTLNAME AES_Full_state_1_RAM_AUTO_1R1W BINDTYPE storage TYPE ram IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME AES_Full_CRTLS_s_axi RTLNAME AES_Full_CRTLS_s_axi BINDTYPE interface TYPE interface_s_axilite}
    }
  }
}
