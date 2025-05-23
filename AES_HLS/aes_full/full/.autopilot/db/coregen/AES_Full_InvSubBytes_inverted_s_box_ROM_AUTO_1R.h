// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.2 (64-bit)
// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __AES_Full_InvSubBytes_inverted_s_box_ROM_AUTO_1R_H__
#define __AES_Full_InvSubBytes_inverted_s_box_ROM_AUTO_1R_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct AES_Full_InvSubBytes_inverted_s_box_ROM_AUTO_1R_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 8;
  static const unsigned AddressRange = 256;
  static const unsigned AddressWidth = 8;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(AES_Full_InvSubBytes_inverted_s_box_ROM_AUTO_1R_ram) {
        ram[0] = "0b01010010";
        ram[1] = "0b00001001";
        ram[2] = "0b01101010";
        ram[3] = "0b11010101";
        ram[4] = "0b00110000";
        ram[5] = "0b00110110";
        ram[6] = "0b10100101";
        ram[7] = "0b00111000";
        ram[8] = "0b10111111";
        ram[9] = "0b01000000";
        ram[10] = "0b10100011";
        ram[11] = "0b10011110";
        ram[12] = "0b10000001";
        ram[13] = "0b11110011";
        ram[14] = "0b11010111";
        ram[15] = "0b11111011";
        ram[16] = "0b01111100";
        ram[17] = "0b11100011";
        ram[18] = "0b00111001";
        ram[19] = "0b10000010";
        ram[20] = "0b10011011";
        ram[21] = "0b00101111";
        ram[22] = "0b11111111";
        ram[23] = "0b10000111";
        ram[24] = "0b00110100";
        ram[25] = "0b10001110";
        ram[26] = "0b01000011";
        ram[27] = "0b01000100";
        ram[28] = "0b11000100";
        ram[29] = "0b11011110";
        ram[30] = "0b11101001";
        ram[31] = "0b11001011";
        ram[32] = "0b01010100";
        ram[33] = "0b01111011";
        ram[34] = "0b10010100";
        ram[35] = "0b00110010";
        ram[36] = "0b10100110";
        ram[37] = "0b11000010";
        ram[38] = "0b00100011";
        ram[39] = "0b00111101";
        ram[40] = "0b11101110";
        ram[41] = "0b01001100";
        ram[42] = "0b10010101";
        ram[43] = "0b00001011";
        ram[44] = "0b01000010";
        ram[45] = "0b11111010";
        ram[46] = "0b11000011";
        ram[47] = "0b01001110";
        ram[48] = "0b00001000";
        ram[49] = "0b00101110";
        ram[50] = "0b10100001";
        ram[51] = "0b01100110";
        ram[52] = "0b00101000";
        ram[53] = "0b11011001";
        ram[54] = "0b00100100";
        ram[55] = "0b10110010";
        ram[56] = "0b01110110";
        ram[57] = "0b01011011";
        ram[58] = "0b10100010";
        ram[59] = "0b01001001";
        ram[60] = "0b01101101";
        ram[61] = "0b10001011";
        ram[62] = "0b11010001";
        ram[63] = "0b00100101";
        ram[64] = "0b01110010";
        ram[65] = "0b11111000";
        ram[66] = "0b11110110";
        ram[67] = "0b01100100";
        ram[68] = "0b10000110";
        ram[69] = "0b01101000";
        ram[70] = "0b10011000";
        ram[71] = "0b00010110";
        ram[72] = "0b11010100";
        ram[73] = "0b10100100";
        ram[74] = "0b01011100";
        ram[75] = "0b11001100";
        ram[76] = "0b01011101";
        ram[77] = "0b01100101";
        ram[78] = "0b10110110";
        ram[79] = "0b10010010";
        ram[80] = "0b01101100";
        ram[81] = "0b01110000";
        ram[82] = "0b01001000";
        ram[83] = "0b01010000";
        ram[84] = "0b11111101";
        ram[85] = "0b11101101";
        ram[86] = "0b10111001";
        ram[87] = "0b11011010";
        ram[88] = "0b01011110";
        ram[89] = "0b00010101";
        ram[90] = "0b01000110";
        ram[91] = "0b01010111";
        ram[92] = "0b10100111";
        ram[93] = "0b10001101";
        ram[94] = "0b10011101";
        ram[95] = "0b10000100";
        ram[96] = "0b10010000";
        ram[97] = "0b11011000";
        ram[98] = "0b10101011";
        ram[99] = "0b00000000";
        ram[100] = "0b10001100";
        ram[101] = "0b10111100";
        ram[102] = "0b11010011";
        ram[103] = "0b00001010";
        ram[104] = "0b11110111";
        ram[105] = "0b11100100";
        ram[106] = "0b01011000";
        ram[107] = "0b00000101";
        ram[108] = "0b10111000";
        ram[109] = "0b10110011";
        ram[110] = "0b01000101";
        ram[111] = "0b00000110";
        ram[112] = "0b11010000";
        ram[113] = "0b00101100";
        ram[114] = "0b00011110";
        ram[115] = "0b10001111";
        ram[116] = "0b11001010";
        ram[117] = "0b00111111";
        ram[118] = "0b00001111";
        ram[119] = "0b00000010";
        ram[120] = "0b11000001";
        ram[121] = "0b10101111";
        ram[122] = "0b10111101";
        ram[123] = "0b00000011";
        ram[124] = "0b00000001";
        ram[125] = "0b00010011";
        ram[126] = "0b10001010";
        ram[127] = "0b01101011";
        ram[128] = "0b00111010";
        ram[129] = "0b10010001";
        ram[130] = "0b00010001";
        ram[131] = "0b01000001";
        ram[132] = "0b01001111";
        ram[133] = "0b01100111";
        ram[134] = "0b11011100";
        ram[135] = "0b11101010";
        ram[136] = "0b10010111";
        ram[137] = "0b11110010";
        ram[138] = "0b11001111";
        ram[139] = "0b11001110";
        ram[140] = "0b11110000";
        ram[141] = "0b10110100";
        ram[142] = "0b11100110";
        ram[143] = "0b01110011";
        ram[144] = "0b10010110";
        ram[145] = "0b10101100";
        ram[146] = "0b01110100";
        ram[147] = "0b00100010";
        ram[148] = "0b11100111";
        ram[149] = "0b10101101";
        ram[150] = "0b00110101";
        ram[151] = "0b10000101";
        ram[152] = "0b11100010";
        ram[153] = "0b11111001";
        ram[154] = "0b00110111";
        ram[155] = "0b11101000";
        ram[156] = "0b00011100";
        ram[157] = "0b01110101";
        ram[158] = "0b11011111";
        ram[159] = "0b01101110";
        ram[160] = "0b01000111";
        ram[161] = "0b11110001";
        ram[162] = "0b00011010";
        ram[163] = "0b01110001";
        ram[164] = "0b00011101";
        ram[165] = "0b00101001";
        ram[166] = "0b11000101";
        ram[167] = "0b10001001";
        ram[168] = "0b01101111";
        ram[169] = "0b10110111";
        ram[170] = "0b01100010";
        ram[171] = "0b00001110";
        ram[172] = "0b10101010";
        ram[173] = "0b00011000";
        ram[174] = "0b10111110";
        ram[175] = "0b00011011";
        ram[176] = "0b11111100";
        ram[177] = "0b01010110";
        ram[178] = "0b00111110";
        ram[179] = "0b01001011";
        ram[180] = "0b11000110";
        ram[181] = "0b11010010";
        ram[182] = "0b01111001";
        ram[183] = "0b00100000";
        ram[184] = "0b10011010";
        ram[185] = "0b11011011";
        ram[186] = "0b11000000";
        ram[187] = "0b11111110";
        ram[188] = "0b01111000";
        ram[189] = "0b11001101";
        ram[190] = "0b01011010";
        ram[191] = "0b11110100";
        ram[192] = "0b00011111";
        ram[193] = "0b11011101";
        ram[194] = "0b10101000";
        ram[195] = "0b00110011";
        ram[196] = "0b10001000";
        ram[197] = "0b00000111";
        ram[198] = "0b11000111";
        ram[199] = "0b00110001";
        ram[200] = "0b10110001";
        ram[201] = "0b00010010";
        ram[202] = "0b00010000";
        ram[203] = "0b01011001";
        ram[204] = "0b00100111";
        ram[205] = "0b10000000";
        ram[206] = "0b11101100";
        ram[207] = "0b01011111";
        ram[208] = "0b01100000";
        ram[209] = "0b01010001";
        ram[210] = "0b01111111";
        ram[211] = "0b10101001";
        ram[212] = "0b00011001";
        ram[213] = "0b10110101";
        ram[214] = "0b01001010";
        ram[215] = "0b00001101";
        ram[216] = "0b00101101";
        ram[217] = "0b11100101";
        ram[218] = "0b01111010";
        ram[219] = "0b10011111";
        ram[220] = "0b10010011";
        ram[221] = "0b11001001";
        ram[222] = "0b10011100";
        ram[223] = "0b11101111";
        ram[224] = "0b10100000";
        ram[225] = "0b11100000";
        ram[226] = "0b00111011";
        ram[227] = "0b01001101";
        ram[228] = "0b10101110";
        ram[229] = "0b00101010";
        ram[230] = "0b11110101";
        ram[231] = "0b10110000";
        ram[232] = "0b11001000";
        ram[233] = "0b11101011";
        ram[234] = "0b10111011";
        ram[235] = "0b00111100";
        ram[236] = "0b10000011";
        ram[237] = "0b01010011";
        ram[238] = "0b10011001";
        ram[239] = "0b01100001";
        ram[240] = "0b00010111";
        ram[241] = "0b00101011";
        ram[242] = "0b00000100";
        ram[243] = "0b01111110";
        ram[244] = "0b10111010";
        ram[245] = "0b01110111";
        ram[246] = "0b11010110";
        ram[247] = "0b00100110";
        ram[248] = "0b11100001";
        ram[249] = "0b01101001";
        ram[250] = "0b00010100";
        ram[251] = "0b01100011";
        ram[252] = "0b01010101";
        ram[253] = "0b00100001";
        ram[254] = "0b00001100";
        ram[255] = "0b01111101";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(AES_Full_InvSubBytes_inverted_s_box_ROM_AUTO_1R) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 256;
static const unsigned AddressWidth = 8;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


AES_Full_InvSubBytes_inverted_s_box_ROM_AUTO_1R_ram* meminst;


SC_CTOR(AES_Full_InvSubBytes_inverted_s_box_ROM_AUTO_1R) {
meminst = new AES_Full_InvSubBytes_inverted_s_box_ROM_AUTO_1R_ram("AES_Full_InvSubBytes_inverted_s_box_ROM_AUTO_1R_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~AES_Full_InvSubBytes_inverted_s_box_ROM_AUTO_1R() {
    delete meminst;
}


};//endmodule
#endif
