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
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;

// wrapc file define:
#define AUTOTB_TVIN_mode_cipher "../tv/cdatafile/c.AES_Full.autotvin_mode_cipher.dat"
#define AUTOTB_TVOUT_mode_cipher "../tv/cdatafile/c.AES_Full.autotvout_mode_cipher.dat"
// wrapc file define:
#define AUTOTB_TVIN_mode_inverse_cipher "../tv/cdatafile/c.AES_Full.autotvin_mode_inverse_cipher.dat"
#define AUTOTB_TVOUT_mode_inverse_cipher "../tv/cdatafile/c.AES_Full.autotvout_mode_inverse_cipher.dat"
// wrapc file define:
#define AUTOTB_TVIN_data_in "../tv/cdatafile/c.AES_Full.autotvin_data_in.dat"
#define AUTOTB_TVOUT_data_in "../tv/cdatafile/c.AES_Full.autotvout_data_in.dat"
// wrapc file define:
#define AUTOTB_TVIN_expandedKey "../tv/cdatafile/c.AES_Full.autotvin_expandedKey.dat"
#define AUTOTB_TVOUT_expandedKey "../tv/cdatafile/c.AES_Full.autotvout_expandedKey.dat"
// wrapc file define:
#define AUTOTB_TVIN_Nr "../tv/cdatafile/c.AES_Full.autotvin_Nr.dat"
#define AUTOTB_TVOUT_Nr "../tv/cdatafile/c.AES_Full.autotvout_Nr.dat"
// wrapc file define:
#define AUTOTB_TVIN_data_out "../tv/cdatafile/c.AES_Full.autotvin_data_out.dat"
#define AUTOTB_TVOUT_data_out "../tv/cdatafile/c.AES_Full.autotvout_data_out.dat"

#define INTER_TCL "../tv/cdatafile/ref.tcl"

// tvout file define:
#define AUTOTB_TVOUT_PC_mode_cipher "../tv/rtldatafile/rtl.AES_Full.autotvout_mode_cipher.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_mode_inverse_cipher "../tv/rtldatafile/rtl.AES_Full.autotvout_mode_inverse_cipher.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_data_in "../tv/rtldatafile/rtl.AES_Full.autotvout_data_in.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_expandedKey "../tv/rtldatafile/rtl.AES_Full.autotvout_expandedKey.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_Nr "../tv/rtldatafile/rtl.AES_Full.autotvout_Nr.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_data_out "../tv/rtldatafile/rtl.AES_Full.autotvout_data_out.dat"


inline void rev_endian(char* p, size_t nbytes)
{
  std::reverse(p, p+nbytes);
}

template<size_t bit_width>
struct transaction {
  typedef uint64_t depth_t;
  static const size_t wbytes = (bit_width+7)>>3;
  static const size_t dbytes = sizeof(depth_t);
  const depth_t depth;
  const size_t vbytes;
  const size_t tbytes;
  char * const p;
  typedef char (*p_dat)[wbytes];
  p_dat vp;

  void reorder() {
    rev_endian(p, dbytes);
    p_dat vp = (p_dat) (p+dbytes);
    for (depth_t i = 0; i < depth; ++i) {
      rev_endian(vp[i], wbytes);
    }
  }

  transaction(depth_t depth)
    : depth(depth), vbytes(wbytes*depth), tbytes(dbytes+vbytes),
      p(new char[tbytes]) {
    *(depth_t*)p = depth;
    vp = (p_dat) (p+dbytes);
  }

  template<size_t psize>
  void import(char* param, depth_t num, int64_t offset) {
    param -= offset*psize;
    for (depth_t i = 0; i < num; ++i) {
      memcpy(vp[i], param, wbytes);
      param += psize;
    }
    vp += num;
  }

  template<size_t psize>
  void send(char* param, depth_t num) {
    for (depth_t i = 0; i < num; ++i) {
      memcpy(param, vp[i], wbytes);
      param += psize;
    }
    vp += num;
  }

  template<size_t psize>
  void send(char* param, depth_t num, int64_t skip) {
    for (depth_t i = 0; i < num; ++i) {
      memcpy(param, vp[skip+i], wbytes);
      param += psize;
    }
  }

  ~transaction() { if (p) { delete[] p; } }
};
      

inline const std::string begin_str(int num)
{
  return std::string("[[transaction]] ")
         .append(std::to_string(num))
         .append("\n");
}

inline const std::string end_str()
{
  return std::string("[[/transaction]] \n");
}
      
class INTER_TCL_FILE {
  public:
INTER_TCL_FILE(const char* name) {
  mName = name; 
  mode_cipher_depth = 0;
  mode_inverse_cipher_depth = 0;
  data_in_depth = 0;
  expandedKey_depth = 0;
  Nr_depth = 0;
  data_out_depth = 0;
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
  total_list << "{mode_cipher " << mode_cipher_depth << "}\n";
  total_list << "{mode_inverse_cipher " << mode_inverse_cipher_depth << "}\n";
  total_list << "{data_in " << data_in_depth << "}\n";
  total_list << "{expandedKey " << expandedKey_depth << "}\n";
  total_list << "{Nr " << Nr_depth << "}\n";
  total_list << "{data_out " << data_out_depth << "}\n";
  return total_list.str();
}
void set_num (int num , int* class_num) {
  (*class_num) = (*class_num) > num ? (*class_num) : num;
}
void set_string(std::string list, std::string* class_list) {
  (*class_list) = list;
}
  public:
    int mode_cipher_depth;
    int mode_inverse_cipher_depth;
    int data_in_depth;
    int expandedKey_depth;
    int Nr_depth;
    int data_out_depth;
    int trans_num;
  private:
    ofstream mFile;
    const char* mName;
};

static bool RTLOutputCheckAndReplacement(std::string &AESL_token, std::string PortName) {
  bool err = false;
  size_t x_found;

  // search and replace 'X' with '0' from the 3rd char of token
  while ((x_found = AESL_token.find('X', 0)) != string::npos)
    err = true, AESL_token.replace(x_found, 1, "0");
  
  // search and replace 'x' with '0' from the 3rd char of token
  while ((x_found = AESL_token.find('x', 2)) != string::npos)
    err = true, AESL_token.replace(x_found, 1, "0");
  
  return err;}
extern "C" void AES_Full_hw_stub_wrapper(char, char, volatile void *, volatile void *, short, volatile void *);

extern "C" void apatb_AES_Full_hw(char __xlx_apatb_param_mode_cipher, char __xlx_apatb_param_mode_inverse_cipher, volatile void * __xlx_apatb_param_data_in, volatile void * __xlx_apatb_param_expandedKey, short __xlx_apatb_param_Nr, volatile void * __xlx_apatb_param_data_out) {
  refine_signal_handler();
  fstream wrapc_switch_file_token;
  wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
static AESL_FILE_HANDLER aesl_fh;
  int AESL_i;
  if (wrapc_switch_file_token.good())
  {

    CodeState = ENTER_WRAPC_PC;
    static unsigned AESL_transaction_pc = 0;
    string AESL_token;
    string AESL_num;
#ifdef USE_BINARY_TV_FILE
{
transaction<8> tr(16);
aesl_fh.read(AUTOTB_TVOUT_PC_data_out, tr.p, tr.tbytes);
tr.reorder();
tr.send<1>((char*)__xlx_apatb_param_data_out, 16);
}
#else
{
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_data_out);
        if (rtl_tv_out_file.good()) {
          rtl_tv_out_file >> AESL_token;
          if (AESL_token != "[[[runtime]]]")
            exit(1);
        }
      }
  
      if (rtl_tv_out_file.good()) {
        rtl_tv_out_file >> AESL_token; 
        rtl_tv_out_file >> AESL_num;  // transaction number
        if (AESL_token != "[[transaction]]") {
          cerr << "Unexpected token: " << AESL_token << endl;
          exit(1);
        }
        if (atoi(AESL_num.c_str()) == AESL_transaction_pc) {
          std::vector<sc_bv<8> > data_out_pc_buffer(16);
          int i = 0;
          bool has_unknown_value = false;
          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            has_unknown_value |= RTLOutputCheckAndReplacement(AESL_token, "data_out");
  
            // push token into output port buffer
            if (AESL_token != "") {
              data_out_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (has_unknown_value) {
            cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'x' or 'X' on port " 
                 << "data_out" << ", possible cause: There are uninitialized variables in the C design."
                 << endl; 
          }
  
          if (i > 0) {{
            int i = 0;
            for (int j = 0, e = 16; j < e; j += 1, ++i) {((char*)__xlx_apatb_param_data_out)[j*1+0] = data_out_pc_buffer[i].range(7, 0).to_int64();
}}}
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  #endif

    AESL_transaction_pc++;
    return ;
  }
static unsigned AESL_transaction;
static INTER_TCL_FILE tcl_file(INTER_TCL);
std::vector<char> __xlx_sprintf_buffer(1024);
CodeState = ENTER_WRAPC;
CodeState = DUMP_INPUTS;
// print mode_cipher Transactions
{
aesl_fh.write(AUTOTB_TVIN_mode_cipher, begin_str(AESL_transaction));
{
    sc_bv<1> __xlx_tmp_lv = *((char*)&__xlx_apatb_param_mode_cipher);
aesl_fh.write(AUTOTB_TVIN_mode_cipher, __xlx_tmp_lv.to_string(SC_HEX)+string("\n"));
}
  tcl_file.set_num(1, &tcl_file.mode_cipher_depth);
aesl_fh.write(AUTOTB_TVIN_mode_cipher, end_str());
}

// print mode_inverse_cipher Transactions
{
aesl_fh.write(AUTOTB_TVIN_mode_inverse_cipher, begin_str(AESL_transaction));
{
    sc_bv<1> __xlx_tmp_lv = *((char*)&__xlx_apatb_param_mode_inverse_cipher);
aesl_fh.write(AUTOTB_TVIN_mode_inverse_cipher, __xlx_tmp_lv.to_string(SC_HEX)+string("\n"));
}
  tcl_file.set_num(1, &tcl_file.mode_inverse_cipher_depth);
aesl_fh.write(AUTOTB_TVIN_mode_inverse_cipher, end_str());
}

unsigned __xlx_offset_byte_param_data_in = 0;
#ifdef USE_BINARY_TV_FILE
{
aesl_fh.touch(AUTOTB_TVIN_data_in, 'b');
transaction<8> tr(16);
  __xlx_offset_byte_param_data_in = 0*1;
  if (__xlx_apatb_param_data_in) {
tr.import<1>((char*)__xlx_apatb_param_data_in, 16, 0);
  }
tr.reorder();
aesl_fh.write(AUTOTB_TVIN_data_in, tr.p, tr.tbytes);
}

  tcl_file.set_num(16, &tcl_file.data_in_depth);
#else
// print data_in Transactions
{
aesl_fh.write(AUTOTB_TVIN_data_in, begin_str(AESL_transaction));
{
  __xlx_offset_byte_param_data_in = 0*1;
  if (__xlx_apatb_param_data_in) {
    for (int j = 0  - 0, e = 16 - 0; j != e; ++j) {
sc_bv<8> __xlx_tmp_lv = ((char*)__xlx_apatb_param_data_in)[j];
aesl_fh.write(AUTOTB_TVIN_data_in, __xlx_tmp_lv.to_string(SC_HEX)+string("\n"));
    }
  }
}

  tcl_file.set_num(16, &tcl_file.data_in_depth);
aesl_fh.write(AUTOTB_TVIN_data_in, end_str());
}

#endif
unsigned __xlx_offset_byte_param_expandedKey = 0;
#ifdef USE_BINARY_TV_FILE
{
aesl_fh.touch(AUTOTB_TVIN_expandedKey, 'b');
transaction<8> tr(176);
  __xlx_offset_byte_param_expandedKey = 0*1;
  if (__xlx_apatb_param_expandedKey) {
tr.import<1>((char*)__xlx_apatb_param_expandedKey, 176, 0);
  }
tr.reorder();
aesl_fh.write(AUTOTB_TVIN_expandedKey, tr.p, tr.tbytes);
}

  tcl_file.set_num(176, &tcl_file.expandedKey_depth);
#else
// print expandedKey Transactions
{
aesl_fh.write(AUTOTB_TVIN_expandedKey, begin_str(AESL_transaction));
{
  __xlx_offset_byte_param_expandedKey = 0*1;
  if (__xlx_apatb_param_expandedKey) {
    for (int j = 0  - 0, e = 176 - 0; j != e; ++j) {
sc_bv<8> __xlx_tmp_lv = ((char*)__xlx_apatb_param_expandedKey)[j];
aesl_fh.write(AUTOTB_TVIN_expandedKey, __xlx_tmp_lv.to_string(SC_HEX)+string("\n"));
    }
  }
}

  tcl_file.set_num(176, &tcl_file.expandedKey_depth);
aesl_fh.write(AUTOTB_TVIN_expandedKey, end_str());
}

#endif
// print Nr Transactions
{
aesl_fh.write(AUTOTB_TVIN_Nr, begin_str(AESL_transaction));
{
    sc_bv<16> __xlx_tmp_lv = *((short*)&__xlx_apatb_param_Nr);
aesl_fh.write(AUTOTB_TVIN_Nr, __xlx_tmp_lv.to_string(SC_HEX)+string("\n"));
}
  tcl_file.set_num(1, &tcl_file.Nr_depth);
aesl_fh.write(AUTOTB_TVIN_Nr, end_str());
}

unsigned __xlx_offset_byte_param_data_out = 0;
#ifdef USE_BINARY_TV_FILE
{
aesl_fh.touch(AUTOTB_TVIN_data_out, 'b');
transaction<8> tr(16);
  __xlx_offset_byte_param_data_out = 0*1;
  if (__xlx_apatb_param_data_out) {
tr.import<1>((char*)__xlx_apatb_param_data_out, 16, 0);
  }
tr.reorder();
aesl_fh.write(AUTOTB_TVIN_data_out, tr.p, tr.tbytes);
}

  tcl_file.set_num(16, &tcl_file.data_out_depth);
#else
// print data_out Transactions
{
aesl_fh.write(AUTOTB_TVIN_data_out, begin_str(AESL_transaction));
{
  __xlx_offset_byte_param_data_out = 0*1;
  if (__xlx_apatb_param_data_out) {
    for (int j = 0  - 0, e = 16 - 0; j != e; ++j) {
sc_bv<8> __xlx_tmp_lv = ((char*)__xlx_apatb_param_data_out)[j];
aesl_fh.write(AUTOTB_TVIN_data_out, __xlx_tmp_lv.to_string(SC_HEX)+string("\n"));
    }
  }
}

  tcl_file.set_num(16, &tcl_file.data_out_depth);
aesl_fh.write(AUTOTB_TVIN_data_out, end_str());
}

#endif
CodeState = CALL_C_DUT;
AES_Full_hw_stub_wrapper(__xlx_apatb_param_mode_cipher, __xlx_apatb_param_mode_inverse_cipher, __xlx_apatb_param_data_in, __xlx_apatb_param_expandedKey, __xlx_apatb_param_Nr, __xlx_apatb_param_data_out);
CodeState = DUMP_OUTPUTS;
#ifdef USE_BINARY_TV_FILE
{
aesl_fh.touch(AUTOTB_TVOUT_data_out, 'b');
transaction<8> tr(16);
  __xlx_offset_byte_param_data_out = 0*1;
  if (__xlx_apatb_param_data_out) {
tr.import<1>((char*)__xlx_apatb_param_data_out, 16, 0);
  }
tr.reorder();
aesl_fh.write(AUTOTB_TVOUT_data_out, tr.p, tr.tbytes);
}

  tcl_file.set_num(16, &tcl_file.data_out_depth);
#else
// print data_out Transactions
{
aesl_fh.write(AUTOTB_TVOUT_data_out, begin_str(AESL_transaction));
{
  __xlx_offset_byte_param_data_out = 0*1;
  if (__xlx_apatb_param_data_out) {
    for (int j = 0  - 0, e = 16 - 0; j != e; ++j) {
sc_bv<8> __xlx_tmp_lv = ((char*)__xlx_apatb_param_data_out)[j];
aesl_fh.write(AUTOTB_TVOUT_data_out, __xlx_tmp_lv.to_string(SC_HEX)+string("\n"));
    }
  }
}

  tcl_file.set_num(16, &tcl_file.data_out_depth);
aesl_fh.write(AUTOTB_TVOUT_data_out, end_str());
}

#endif
CodeState = DELETE_CHAR_BUFFERS;
AESL_transaction++;
tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
}
