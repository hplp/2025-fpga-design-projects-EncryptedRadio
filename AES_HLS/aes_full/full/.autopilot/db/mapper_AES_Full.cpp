#include <systemc>
#include <vector>
#include <iostream>
#include "hls_stream.h"
#include "ap_int.h"
#include "ap_fixed.h"
using namespace std;
using namespace sc_dt;
class AESL_RUNTIME_BC {
  public:
    AESL_RUNTIME_BC(const char* name) {
      file_token.open( name);
      if (!file_token.good()) {
        cout << "Failed to open tv file " << name << endl;
        exit (1);
      }
      file_token >> mName;//[[[runtime]]]
    }
    ~AESL_RUNTIME_BC() {
      file_token.close();
    }
    int read_size () {
      int size = 0;
      file_token >> mName;//[[transaction]]
      file_token >> mName;//transaction number
      file_token >> mName;//pop_size
      size = atoi(mName.c_str());
      file_token >> mName;//[[/transaction]]
      return size;
    }
  public:
    fstream file_token;
    string mName;
};
extern "C" void AES_Full(char, char, char*, char*, short, char*);
extern "C" void apatb_AES_Full_hw(char __xlx_apatb_param_mode_cipher, char __xlx_apatb_param_mode_inverse_cipher, volatile void * __xlx_apatb_param_data_in, volatile void * __xlx_apatb_param_expandedKey, short __xlx_apatb_param_Nr, volatile void * __xlx_apatb_param_data_out) {
  // Collect __xlx_data_in__tmp_vec
  vector<sc_bv<8> >__xlx_data_in__tmp_vec;
  for (int j = 0, e = 16; j != e; ++j) {
    __xlx_data_in__tmp_vec.push_back(((char*)__xlx_apatb_param_data_in)[j]);
  }
  int __xlx_size_param_data_in = 16;
  int __xlx_offset_param_data_in = 0;
  int __xlx_offset_byte_param_data_in = 0*1;
  char* __xlx_data_in__input_buffer= new char[__xlx_data_in__tmp_vec.size()];
  for (int i = 0; i < __xlx_data_in__tmp_vec.size(); ++i) {
    __xlx_data_in__input_buffer[i] = __xlx_data_in__tmp_vec[i].range(7, 0).to_uint64();
  }
  // Collect __xlx_expandedKey__tmp_vec
  vector<sc_bv<8> >__xlx_expandedKey__tmp_vec;
  for (int j = 0, e = 176; j != e; ++j) {
    __xlx_expandedKey__tmp_vec.push_back(((char*)__xlx_apatb_param_expandedKey)[j]);
  }
  int __xlx_size_param_expandedKey = 176;
  int __xlx_offset_param_expandedKey = 0;
  int __xlx_offset_byte_param_expandedKey = 0*1;
  char* __xlx_expandedKey__input_buffer= new char[__xlx_expandedKey__tmp_vec.size()];
  for (int i = 0; i < __xlx_expandedKey__tmp_vec.size(); ++i) {
    __xlx_expandedKey__input_buffer[i] = __xlx_expandedKey__tmp_vec[i].range(7, 0).to_uint64();
  }
  // Collect __xlx_data_out__tmp_vec
  vector<sc_bv<8> >__xlx_data_out__tmp_vec;
  for (int j = 0, e = 16; j != e; ++j) {
    __xlx_data_out__tmp_vec.push_back(((char*)__xlx_apatb_param_data_out)[j]);
  }
  int __xlx_size_param_data_out = 16;
  int __xlx_offset_param_data_out = 0;
  int __xlx_offset_byte_param_data_out = 0*1;
  char* __xlx_data_out__input_buffer= new char[__xlx_data_out__tmp_vec.size()];
  for (int i = 0; i < __xlx_data_out__tmp_vec.size(); ++i) {
    __xlx_data_out__input_buffer[i] = __xlx_data_out__tmp_vec[i].range(7, 0).to_uint64();
  }
  // DUT call
  AES_Full(__xlx_apatb_param_mode_cipher, __xlx_apatb_param_mode_inverse_cipher, __xlx_data_in__input_buffer, __xlx_expandedKey__input_buffer, __xlx_apatb_param_Nr, __xlx_data_out__input_buffer);
// print __xlx_apatb_param_data_in
  sc_bv<8>*__xlx_data_in_output_buffer = new sc_bv<8>[__xlx_size_param_data_in];
  for (int i = 0; i < __xlx_size_param_data_in; ++i) {
    __xlx_data_in_output_buffer[i] = __xlx_data_in__input_buffer[i+__xlx_offset_param_data_in];
  }
  for (int i = 0; i < __xlx_size_param_data_in; ++i) {
    ((char*)__xlx_apatb_param_data_in)[i] = __xlx_data_in_output_buffer[i].to_uint();
  }
// print __xlx_apatb_param_expandedKey
  sc_bv<8>*__xlx_expandedKey_output_buffer = new sc_bv<8>[__xlx_size_param_expandedKey];
  for (int i = 0; i < __xlx_size_param_expandedKey; ++i) {
    __xlx_expandedKey_output_buffer[i] = __xlx_expandedKey__input_buffer[i+__xlx_offset_param_expandedKey];
  }
  for (int i = 0; i < __xlx_size_param_expandedKey; ++i) {
    ((char*)__xlx_apatb_param_expandedKey)[i] = __xlx_expandedKey_output_buffer[i].to_uint();
  }
// print __xlx_apatb_param_data_out
  sc_bv<8>*__xlx_data_out_output_buffer = new sc_bv<8>[__xlx_size_param_data_out];
  for (int i = 0; i < __xlx_size_param_data_out; ++i) {
    __xlx_data_out_output_buffer[i] = __xlx_data_out__input_buffer[i+__xlx_offset_param_data_out];
  }
  for (int i = 0; i < __xlx_size_param_data_out; ++i) {
    ((char*)__xlx_apatb_param_data_out)[i] = __xlx_data_out_output_buffer[i].to_uint();
  }
}
