// (c) Copyright 1995-2025 Xilinx, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.


// IP VLNV: xilinx.com:hls:AES_Full:1.0
// IP Revision: 2114044003

`timescale 1ns/1ps

(* IP_DEFINITION_SOURCE = "HLS" *)
(* DowngradeIPIdentifiedWarnings = "yes" *)
module Zynq_CPU_AES_Full_0_1 (
  ap_local_block,
  s_axi_CRTLS_AWADDR,
  s_axi_CRTLS_AWVALID,
  s_axi_CRTLS_AWREADY,
  s_axi_CRTLS_WDATA,
  s_axi_CRTLS_WSTRB,
  s_axi_CRTLS_WVALID,
  s_axi_CRTLS_WREADY,
  s_axi_CRTLS_BRESP,
  s_axi_CRTLS_BVALID,
  s_axi_CRTLS_BREADY,
  s_axi_CRTLS_ARADDR,
  s_axi_CRTLS_ARVALID,
  s_axi_CRTLS_ARREADY,
  s_axi_CRTLS_RDATA,
  s_axi_CRTLS_RRESP,
  s_axi_CRTLS_RVALID,
  s_axi_CRTLS_RREADY,
  ap_clk,
  ap_rst_n,
  interrupt
);

output wire ap_local_block;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CRTLS AWADDR" *)
input wire [8 : 0] s_axi_CRTLS_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CRTLS AWVALID" *)
input wire s_axi_CRTLS_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CRTLS AWREADY" *)
output wire s_axi_CRTLS_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CRTLS WDATA" *)
input wire [31 : 0] s_axi_CRTLS_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CRTLS WSTRB" *)
input wire [3 : 0] s_axi_CRTLS_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CRTLS WVALID" *)
input wire s_axi_CRTLS_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CRTLS WREADY" *)
output wire s_axi_CRTLS_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CRTLS BRESP" *)
output wire [1 : 0] s_axi_CRTLS_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CRTLS BVALID" *)
output wire s_axi_CRTLS_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CRTLS BREADY" *)
input wire s_axi_CRTLS_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CRTLS ARADDR" *)
input wire [8 : 0] s_axi_CRTLS_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CRTLS ARVALID" *)
input wire s_axi_CRTLS_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CRTLS ARREADY" *)
output wire s_axi_CRTLS_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CRTLS RDATA" *)
output wire [31 : 0] s_axi_CRTLS_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CRTLS RRESP" *)
output wire [1 : 0] s_axi_CRTLS_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CRTLS RVALID" *)
output wire s_axi_CRTLS_RVALID;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME s_axi_CRTLS, ADDR_WIDTH 9, DATA_WIDTH 32, PROTOCOL AXI4LITE, READ_WRITE_MODE READ_WRITE, FREQ_HZ 100000000, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.0, CLK_DOMAIN Zynq_CPU_processing_system7_0_1_FCLK_CLK0, NUM_READ_THR\
EADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CRTLS RREADY" *)
input wire s_axi_CRTLS_RREADY;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_clk, ASSOCIATED_BUSIF s_axi_CRTLS, ASSOCIATED_RESET ap_rst_n, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN Zynq_CPU_processing_system7_0_1_FCLK_CLK0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *)
input wire ap_clk;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_rst_n, POLARITY ACTIVE_LOW, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst_n RST" *)
input wire ap_rst_n;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME interrupt, SENSITIVITY LEVEL_HIGH, PortWidth 1" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:interrupt:1.0 interrupt INTERRUPT" *)
output wire interrupt;

(* SDX_KERNEL = "true" *)
(* SDX_KERNEL_TYPE = "hls" *)
(* SDX_KERNEL_SIM_INST = "" *)
  AES_Full #(
    .C_S_AXI_CRTLS_ADDR_WIDTH(9),
    .C_S_AXI_CRTLS_DATA_WIDTH(32)
  ) inst (
    .ap_local_block(ap_local_block),
    .s_axi_CRTLS_AWADDR(s_axi_CRTLS_AWADDR),
    .s_axi_CRTLS_AWVALID(s_axi_CRTLS_AWVALID),
    .s_axi_CRTLS_AWREADY(s_axi_CRTLS_AWREADY),
    .s_axi_CRTLS_WDATA(s_axi_CRTLS_WDATA),
    .s_axi_CRTLS_WSTRB(s_axi_CRTLS_WSTRB),
    .s_axi_CRTLS_WVALID(s_axi_CRTLS_WVALID),
    .s_axi_CRTLS_WREADY(s_axi_CRTLS_WREADY),
    .s_axi_CRTLS_BRESP(s_axi_CRTLS_BRESP),
    .s_axi_CRTLS_BVALID(s_axi_CRTLS_BVALID),
    .s_axi_CRTLS_BREADY(s_axi_CRTLS_BREADY),
    .s_axi_CRTLS_ARADDR(s_axi_CRTLS_ARADDR),
    .s_axi_CRTLS_ARVALID(s_axi_CRTLS_ARVALID),
    .s_axi_CRTLS_ARREADY(s_axi_CRTLS_ARREADY),
    .s_axi_CRTLS_RDATA(s_axi_CRTLS_RDATA),
    .s_axi_CRTLS_RRESP(s_axi_CRTLS_RRESP),
    .s_axi_CRTLS_RVALID(s_axi_CRTLS_RVALID),
    .s_axi_CRTLS_RREADY(s_axi_CRTLS_RREADY),
    .ap_clk(ap_clk),
    .ap_rst_n(ap_rst_n),
    .interrupt(interrupt)
  );
endmodule
