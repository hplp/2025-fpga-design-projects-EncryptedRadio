// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "ap_stream.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "ciphertext"
#define AUTOTB_TVIN_ciphertext  "../tv/cdatafile/c.AES_Decrypt.autotvin_ciphertext.dat"
// wrapc file define: "expandedKey"
#define AUTOTB_TVIN_expandedKey  "../tv/cdatafile/c.AES_Decrypt.autotvin_expandedKey.dat"
// wrapc file define: "Nr"
#define AUTOTB_TVIN_Nr  "../tv/cdatafile/c.AES_Decrypt.autotvin_Nr.dat"
// wrapc file define: "plaintext"
#define AUTOTB_TVOUT_plaintext  "../tv/cdatafile/c.AES_Decrypt.autotvout_plaintext.dat"
#define AUTOTB_TVIN_plaintext  "../tv/cdatafile/c.AES_Decrypt.autotvin_plaintext.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "plaintext"
#define AUTOTB_TVOUT_PC_plaintext  "../tv/rtldatafile/rtl.AES_Decrypt.autotvout_plaintext.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			ciphertext_depth = 0;
			expandedKey_depth = 0;
			Nr_depth = 0;
			plaintext_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{ciphertext " << ciphertext_depth << "}\n";
			total_list << "{expandedKey " << expandedKey_depth << "}\n";
			total_list << "{Nr " << Nr_depth << "}\n";
			total_list << "{plaintext " << plaintext_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int ciphertext_depth;
		int expandedKey_depth;
		int Nr_depth;
		int plaintext_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void AES_Decrypt (
unsigned char ciphertext[16],
unsigned char expandedKey[240],
unsigned int Nr,
unsigned char plaintext[16]);

void AESL_WRAP_AES_Decrypt (
unsigned char ciphertext[16],
unsigned char expandedKey[240],
unsigned int Nr,
unsigned char plaintext[16])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "plaintext"
		aesl_fh.read(AUTOTB_TVOUT_PC_plaintext, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_plaintext, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_plaintext, AESL_token); // data

			sc_bv<8> *plaintext_pc_buffer = new sc_bv<8>[16];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'plaintext', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'plaintext', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					plaintext_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_plaintext, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_plaintext))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: plaintext
				{
					// bitslice(7, 0)
					// {
						// celement: plaintext(7, 0)
						// {
							sc_lv<8>* plaintext_lv0_0_15_1 = new sc_lv<8>[16];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: plaintext(7, 0)
						{
							// carray: (0) => (15) @ (1)
							for (int i_0 = 0; i_0 <= 15; i_0 += 1)
							{
								if (&(plaintext[0]) != NULL) // check the null address if the c port is array or others
								{
									plaintext_lv0_0_15_1[hls_map_index].range(7, 0) = sc_bv<8>(plaintext_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: plaintext(7, 0)
						{
							// carray: (0) => (15) @ (1)
							for (int i_0 = 0; i_0 <= 15; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : plaintext[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : plaintext[0]
								// output_left_conversion : plaintext[i_0]
								// output_type_conversion : (plaintext_lv0_0_15_1[hls_map_index]).to_uint64()
								if (&(plaintext[0]) != NULL) // check the null address if the c port is array or others
								{
									plaintext[i_0] = (plaintext_lv0_0_15_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] plaintext_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "ciphertext"
		char* tvin_ciphertext = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_ciphertext);

		// "expandedKey"
		char* tvin_expandedKey = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_expandedKey);

		// "Nr"
		char* tvin_Nr = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_Nr);

		// "plaintext"
		char* tvin_plaintext = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_plaintext);
		char* tvout_plaintext = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_plaintext);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_ciphertext, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_ciphertext, tvin_ciphertext);

		sc_bv<8>* ciphertext_tvin_wrapc_buffer = new sc_bv<8>[16];

		// RTL Name: ciphertext
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ciphertext(7, 0)
				{
					// carray: (0) => (15) @ (1)
					for (int i_0 = 0; i_0 <= 15; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : ciphertext[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ciphertext[0]
						// regulate_c_name       : ciphertext
						// input_type_conversion : ciphertext[i_0]
						if (&(ciphertext[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ciphertext_tmp_mem;
							ciphertext_tmp_mem = ciphertext[i_0];
							ciphertext_tvin_wrapc_buffer[hls_map_index].range(7, 0) = ciphertext_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 16; i++)
		{
			sprintf(tvin_ciphertext, "%s\n", (ciphertext_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_ciphertext, tvin_ciphertext);
		}

		tcl_file.set_num(16, &tcl_file.ciphertext_depth);
		sprintf(tvin_ciphertext, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_ciphertext, tvin_ciphertext);

		// release memory allocation
		delete [] ciphertext_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_expandedKey, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_expandedKey, tvin_expandedKey);

		sc_bv<8>* expandedKey_tvin_wrapc_buffer = new sc_bv<8>[240];

		// RTL Name: expandedKey
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: expandedKey(7, 0)
				{
					// carray: (0) => (239) @ (1)
					for (int i_0 = 0; i_0 <= 239; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : expandedKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : expandedKey[0]
						// regulate_c_name       : expandedKey
						// input_type_conversion : expandedKey[i_0]
						if (&(expandedKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> expandedKey_tmp_mem;
							expandedKey_tmp_mem = expandedKey[i_0];
							expandedKey_tvin_wrapc_buffer[hls_map_index].range(7, 0) = expandedKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 240; i++)
		{
			sprintf(tvin_expandedKey, "%s\n", (expandedKey_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_expandedKey, tvin_expandedKey);
		}

		tcl_file.set_num(240, &tcl_file.expandedKey_depth);
		sprintf(tvin_expandedKey, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_expandedKey, tvin_expandedKey);

		// release memory allocation
		delete [] expandedKey_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_Nr, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_Nr, tvin_Nr);

		sc_bv<32> Nr_tvin_wrapc_buffer;

		// RTL Name: Nr
		{
			// bitslice(31, 0)
			{
				// celement: Nr(31, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : Nr
						// sub_1st_elem          : 
						// ori_name_1st_elem     : Nr
						// regulate_c_name       : Nr
						// input_type_conversion : Nr
						if (&(Nr) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> Nr_tmp_mem;
							Nr_tmp_mem = Nr;
							Nr_tvin_wrapc_buffer.range(31, 0) = Nr_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_Nr, "%s\n", (Nr_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_Nr, tvin_Nr);
		}

		tcl_file.set_num(1, &tcl_file.Nr_depth);
		sprintf(tvin_Nr, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_Nr, tvin_Nr);

		// [[transaction]]
		sprintf(tvin_plaintext, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_plaintext, tvin_plaintext);

		sc_bv<8>* plaintext_tvin_wrapc_buffer = new sc_bv<8>[16];

		// RTL Name: plaintext
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: plaintext(7, 0)
				{
					// carray: (0) => (15) @ (1)
					for (int i_0 = 0; i_0 <= 15; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : plaintext[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : plaintext[0]
						// regulate_c_name       : plaintext
						// input_type_conversion : plaintext[i_0]
						if (&(plaintext[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> plaintext_tmp_mem;
							plaintext_tmp_mem = plaintext[i_0];
							plaintext_tvin_wrapc_buffer[hls_map_index].range(7, 0) = plaintext_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 16; i++)
		{
			sprintf(tvin_plaintext, "%s\n", (plaintext_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_plaintext, tvin_plaintext);
		}

		tcl_file.set_num(16, &tcl_file.plaintext_depth);
		sprintf(tvin_plaintext, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_plaintext, tvin_plaintext);

		// release memory allocation
		delete [] plaintext_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		AES_Decrypt(ciphertext, expandedKey, Nr, plaintext);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_plaintext, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_plaintext, tvout_plaintext);

		sc_bv<8>* plaintext_tvout_wrapc_buffer = new sc_bv<8>[16];

		// RTL Name: plaintext
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: plaintext(7, 0)
				{
					// carray: (0) => (15) @ (1)
					for (int i_0 = 0; i_0 <= 15; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : plaintext[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : plaintext[0]
						// regulate_c_name       : plaintext
						// input_type_conversion : plaintext[i_0]
						if (&(plaintext[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> plaintext_tmp_mem;
							plaintext_tmp_mem = plaintext[i_0];
							plaintext_tvout_wrapc_buffer[hls_map_index].range(7, 0) = plaintext_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 16; i++)
		{
			sprintf(tvout_plaintext, "%s\n", (plaintext_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_plaintext, tvout_plaintext);
		}

		tcl_file.set_num(16, &tcl_file.plaintext_depth);
		sprintf(tvout_plaintext, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_plaintext, tvout_plaintext);

		// release memory allocation
		delete [] plaintext_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "ciphertext"
		delete [] tvin_ciphertext;
		// release memory allocation: "expandedKey"
		delete [] tvin_expandedKey;
		// release memory allocation: "Nr"
		delete [] tvin_Nr;
		// release memory allocation: "plaintext"
		delete [] tvout_plaintext;
		delete [] tvin_plaintext;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

