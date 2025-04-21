// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.2 (64-bit)
// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// ==============================================================

`timescale 1 ns / 1 ps

module AESL_axi_slave_CRTLS (
    clk,
    reset,
    TRAN_s_axi_CRTLS_AWADDR,
    TRAN_s_axi_CRTLS_AWVALID,
    TRAN_s_axi_CRTLS_AWREADY,
    TRAN_s_axi_CRTLS_WVALID,
    TRAN_s_axi_CRTLS_WREADY,
    TRAN_s_axi_CRTLS_WDATA,
    TRAN_s_axi_CRTLS_WSTRB,
    TRAN_s_axi_CRTLS_ARADDR,
    TRAN_s_axi_CRTLS_ARVALID,
    TRAN_s_axi_CRTLS_ARREADY,
    TRAN_s_axi_CRTLS_RVALID,
    TRAN_s_axi_CRTLS_RREADY,
    TRAN_s_axi_CRTLS_RDATA,
    TRAN_s_axi_CRTLS_RRESP,
    TRAN_s_axi_CRTLS_BVALID,
    TRAN_s_axi_CRTLS_BREADY,
    TRAN_s_axi_CRTLS_BRESP,
    TRAN_CRTLS_write_data_finish,
    TRAN_CRTLS_read_data_finish,
    TRAN_CRTLS_start_in,
    TRAN_CRTLS_idle_out,
    TRAN_CRTLS_ready_out,
    TRAN_CRTLS_ready_in,
    TRAN_CRTLS_done_out,
    TRAN_CRTLS_write_start_in   ,
    TRAN_CRTLS_write_start_finish,
    TRAN_CRTLS_interrupt,
    TRAN_CRTLS_transaction_done_in
    );

//------------------------Parameter----------------------
`define TV_IN_mode_cipher "../tv/cdatafile/c.AES_Full.autotvin_mode_cipher.dat"
`define TV_IN_mode_inverse_cipher "../tv/cdatafile/c.AES_Full.autotvin_mode_inverse_cipher.dat"
`define TV_IN_data_in "../tv/cdatafile/c.AES_Full.autotvin_data_in.dat"
`define TV_IN_expandedKey "../tv/cdatafile/c.AES_Full.autotvin_expandedKey.dat"
`define TV_IN_Nr "../tv/cdatafile/c.AES_Full.autotvin_Nr.dat"
`define TV_OUT_data_out "../tv/rtldatafile/rtl.AES_Full.autotvout_data_out.dat"
parameter ADDR_WIDTH = 9;
parameter DATA_WIDTH = 32;
parameter mode_cipher_DEPTH = 1;
reg [31 : 0] mode_cipher_OPERATE_DEPTH = 0;
parameter mode_cipher_c_bitwidth = 1;
parameter mode_inverse_cipher_DEPTH = 1;
reg [31 : 0] mode_inverse_cipher_OPERATE_DEPTH = 0;
parameter mode_inverse_cipher_c_bitwidth = 1;
parameter data_in_DEPTH = 16;
reg [31 : 0] data_in_OPERATE_DEPTH = 0;
parameter data_in_c_bitwidth = 8;
parameter expandedKey_DEPTH = 176;
reg [31 : 0] expandedKey_OPERATE_DEPTH = 0;
parameter expandedKey_c_bitwidth = 8;
parameter Nr_DEPTH = 1;
reg [31 : 0] Nr_OPERATE_DEPTH = 0;
parameter Nr_c_bitwidth = 16;
parameter data_out_DEPTH = 16;
reg [31 : 0] data_out_OPERATE_DEPTH = 0;
parameter data_out_c_bitwidth = 8;
parameter START_ADDR = 0;
parameter AES_Full_continue_addr = 0;
parameter AES_Full_auto_start_addr = 0;
parameter mode_cipher_data_in_addr = 16;
parameter mode_inverse_cipher_data_in_addr = 24;
parameter data_in_data_in_addr = 32;
parameter Nr_data_in_addr = 48;
parameter expandedKey_data_in_addr = 256;
parameter data_out_data_out_addr = 64;
parameter ap_local_deadlock_data_out_addr = 0;
parameter STATUS_ADDR = 0;

output [ADDR_WIDTH - 1 : 0] TRAN_s_axi_CRTLS_AWADDR;
output  TRAN_s_axi_CRTLS_AWVALID;
input  TRAN_s_axi_CRTLS_AWREADY;
output  TRAN_s_axi_CRTLS_WVALID;
input  TRAN_s_axi_CRTLS_WREADY;
output [DATA_WIDTH - 1 : 0] TRAN_s_axi_CRTLS_WDATA;
output [DATA_WIDTH/8 - 1 : 0] TRAN_s_axi_CRTLS_WSTRB;
output [ADDR_WIDTH - 1 : 0] TRAN_s_axi_CRTLS_ARADDR;
output  TRAN_s_axi_CRTLS_ARVALID;
input  TRAN_s_axi_CRTLS_ARREADY;
input  TRAN_s_axi_CRTLS_RVALID;
output  TRAN_s_axi_CRTLS_RREADY;
input [DATA_WIDTH - 1 : 0] TRAN_s_axi_CRTLS_RDATA;
input [2 - 1 : 0] TRAN_s_axi_CRTLS_RRESP;
input  TRAN_s_axi_CRTLS_BVALID;
output  TRAN_s_axi_CRTLS_BREADY;
input [2 - 1 : 0] TRAN_s_axi_CRTLS_BRESP;
output TRAN_CRTLS_write_data_finish;
output TRAN_CRTLS_read_data_finish;
input     clk;
input     reset;
input     TRAN_CRTLS_start_in;
output    TRAN_CRTLS_done_out;
output    TRAN_CRTLS_ready_out;
input     TRAN_CRTLS_ready_in;
output    TRAN_CRTLS_idle_out;
input  TRAN_CRTLS_write_start_in   ;
output TRAN_CRTLS_write_start_finish;
input     TRAN_CRTLS_interrupt;
input     TRAN_CRTLS_transaction_done_in;

reg [ADDR_WIDTH - 1 : 0] AWADDR_reg = 0;
reg  AWVALID_reg = 0;
reg  WVALID_reg = 0;
reg [DATA_WIDTH - 1 : 0] WDATA_reg = 0;
reg [DATA_WIDTH/8 - 1 : 0] WSTRB_reg = 0;
reg [ADDR_WIDTH - 1 : 0] ARADDR_reg = 0;
reg  ARVALID_reg = 0;
reg  RREADY_reg = 0;
reg [DATA_WIDTH - 1 : 0] RDATA_reg = 0;
reg  BREADY_reg = 0;
reg [DATA_WIDTH - 1 : 0] mem_mode_cipher [mode_cipher_DEPTH - 1 : 0] = '{default : 'h0};
reg [DATA_WIDTH-1 : 0] image_mem_mode_cipher [ (mode_cipher_c_bitwidth+DATA_WIDTH-1)/DATA_WIDTH * mode_cipher_DEPTH -1 : 0] = '{default : 'hz};
reg mode_cipher_write_data_finish;
reg [DATA_WIDTH - 1 : 0] mem_mode_inverse_cipher [mode_inverse_cipher_DEPTH - 1 : 0] = '{default : 'h0};
reg [DATA_WIDTH-1 : 0] image_mem_mode_inverse_cipher [ (mode_inverse_cipher_c_bitwidth+DATA_WIDTH-1)/DATA_WIDTH * mode_inverse_cipher_DEPTH -1 : 0] = '{default : 'hz};
reg mode_inverse_cipher_write_data_finish;
reg [DATA_WIDTH - 1 : 0] mem_data_in [data_in_DEPTH - 1 : 0] = '{default : 'h0};
reg [DATA_WIDTH-1 : 0] image_mem_data_in [ (data_in_c_bitwidth+DATA_WIDTH-1)/DATA_WIDTH * data_in_DEPTH -1 : 0] = '{default : 'hz};
reg data_in_write_data_finish;
reg [DATA_WIDTH - 1 : 0] mem_expandedKey [expandedKey_DEPTH - 1 : 0] = '{default : 'h0};
reg [DATA_WIDTH-1 : 0] image_mem_expandedKey [ (expandedKey_c_bitwidth+DATA_WIDTH-1)/DATA_WIDTH * expandedKey_DEPTH -1 : 0] = '{default : 'hz};
reg expandedKey_write_data_finish;
reg [DATA_WIDTH - 1 : 0] mem_Nr [Nr_DEPTH - 1 : 0] = '{default : 'h0};
reg [DATA_WIDTH-1 : 0] image_mem_Nr [ (Nr_c_bitwidth+DATA_WIDTH-1)/DATA_WIDTH * Nr_DEPTH -1 : 0] = '{default : 'hz};
reg Nr_write_data_finish;
reg [DATA_WIDTH - 1 : 0] mem_data_out [data_out_DEPTH - 1 : 0] = '{default : 'h0};
reg [DATA_WIDTH-1 : 0] image_mem_data_out [ (data_out_c_bitwidth+DATA_WIDTH-1)/DATA_WIDTH * data_out_DEPTH -1 : 0] = '{default : 'hz};
reg data_out_read_data_finish;
reg AESL_ready_out_index_reg = 0;
reg AESL_write_start_finish = 0;
reg AESL_ready_reg;
reg ready_initial;
reg AESL_done_index_reg = 0;
reg AESL_idle_index_reg = 0;
reg AESL_auto_restart_index_reg;
reg process_0_finish = 0;
reg process_1_finish = 0;
reg process_2_finish = 0;
reg process_3_finish = 0;
reg process_4_finish = 0;
reg process_5_finish = 0;
reg process_6_finish = 0;
reg process_7_finish = 0;
//write mode_cipher reg
reg [31 : 0] write_mode_cipher_count = 0;
reg write_mode_cipher_run_flag = 0;
reg write_one_mode_cipher_data_done = 0;
//write mode_inverse_cipher reg
reg [31 : 0] write_mode_inverse_cipher_count = 0;
reg write_mode_inverse_cipher_run_flag = 0;
reg write_one_mode_inverse_cipher_data_done = 0;
//write data_in reg
reg [31 : 0] write_data_in_count = 0;
reg write_data_in_run_flag = 0;
reg write_one_data_in_data_done = 0;
//write expandedKey reg
reg [31 : 0] write_expandedKey_count = 0;
reg write_expandedKey_run_flag = 0;
reg write_one_expandedKey_data_done = 0;
//write Nr reg
reg [31 : 0] write_Nr_count = 0;
reg write_Nr_run_flag = 0;
reg write_one_Nr_data_done = 0;
//read data_out reg
reg [31 : 0] read_data_out_count = 0;
reg read_data_out_run_flag = 0;
reg read_one_data_out_data_done = 0;
reg [31 : 0] write_start_count = 0;
reg write_start_run_flag = 0;

//===================process control=================
reg [31 : 0] ongoing_process_number = 0;
//process number depends on how much processes needed.
reg process_busy = 0;

//=================== signal connection ==============
assign TRAN_s_axi_CRTLS_AWADDR = AWADDR_reg;
assign TRAN_s_axi_CRTLS_AWVALID = AWVALID_reg;
assign TRAN_s_axi_CRTLS_WVALID = WVALID_reg;
assign TRAN_s_axi_CRTLS_WDATA = WDATA_reg;
assign TRAN_s_axi_CRTLS_WSTRB = WSTRB_reg;
assign TRAN_s_axi_CRTLS_ARADDR = ARADDR_reg;
assign TRAN_s_axi_CRTLS_ARVALID = ARVALID_reg;
assign TRAN_s_axi_CRTLS_RREADY = RREADY_reg;
assign TRAN_s_axi_CRTLS_BREADY = BREADY_reg;
assign TRAN_CRTLS_write_start_finish = AESL_write_start_finish;
assign TRAN_CRTLS_done_out = AESL_done_index_reg;
assign TRAN_CRTLS_ready_out = AESL_ready_out_index_reg;
assign TRAN_CRTLS_idle_out = AESL_idle_index_reg;
assign TRAN_CRTLS_read_data_finish = 1 & data_out_read_data_finish;
assign TRAN_CRTLS_write_data_finish = 1 & mode_cipher_write_data_finish & mode_inverse_cipher_write_data_finish & data_in_write_data_finish & expandedKey_write_data_finish & Nr_write_data_finish;
always @(TRAN_CRTLS_ready_in or ready_initial) 
begin
    AESL_ready_reg <= TRAN_CRTLS_ready_in | ready_initial;
end

always @(reset or process_0_finish or process_1_finish or process_2_finish or process_3_finish or process_4_finish or process_5_finish or process_6_finish or process_7_finish ) begin
    if (reset == 0) begin
        ongoing_process_number <= 0;
    end
    else if (ongoing_process_number == 0 && process_0_finish == 1) begin
            ongoing_process_number <= ongoing_process_number + 1;
    end
    else if (ongoing_process_number == 1 && process_1_finish == 1) begin
            ongoing_process_number <= ongoing_process_number + 1;
    end
    else if (ongoing_process_number == 2 && process_2_finish == 1) begin
            ongoing_process_number <= ongoing_process_number + 1;
    end
    else if (ongoing_process_number == 3 && process_3_finish == 1) begin
            ongoing_process_number <= ongoing_process_number + 1;
    end
    else if (ongoing_process_number == 4 && process_4_finish == 1) begin
            ongoing_process_number <= ongoing_process_number + 1;
    end
    else if (ongoing_process_number == 5 && process_5_finish == 1) begin
            ongoing_process_number <= ongoing_process_number + 1;
    end
    else if (ongoing_process_number == 6 && process_6_finish == 1) begin
            ongoing_process_number <= ongoing_process_number + 1;
    end
    else if (ongoing_process_number == 7 && process_7_finish == 1) begin
            ongoing_process_number <= 0;
    end
end

task count_c_data_four_byte_num_by_bitwidth;
input  integer bitwidth;
output integer num;
integer factor;
integer i;
begin
    factor = 32;
    for (i = 1; i <= 32; i = i + 1) begin
        if (bitwidth <= factor && bitwidth > factor - 32) begin
            num = i;
        end
        factor = factor + 32;
    end
end    
endtask

task count_seperate_factor_by_bitwidth;
input  integer bitwidth;
output integer factor;
begin
    if (bitwidth <= 8) begin
        factor=4;
    end
    if (bitwidth <= 16 & bitwidth > 8 ) begin
        factor=2;
    end
    if (bitwidth <= 32 & bitwidth > 16 ) begin
        factor=1;
    end
    if (bitwidth <= 1024 & bitwidth > 32 ) begin
        factor=1;
    end
end    
endtask

task count_operate_depth_by_bitwidth_and_depth;
input  integer bitwidth;
input  integer depth;
output integer operate_depth;
integer factor;
integer remain;
begin
    count_seperate_factor_by_bitwidth (bitwidth , factor);
    operate_depth = depth / factor;
    remain = depth % factor;
    if (remain > 0) begin
        operate_depth = operate_depth + 1;
    end
end    
endtask

task write; /*{{{*/
    input  reg [ADDR_WIDTH - 1:0] waddr;   // write address
    input  reg [DATA_WIDTH - 1:0] wdata;   // write data
    output reg wresp;
    reg aw_flag;
    reg w_flag;
    reg [DATA_WIDTH/8 - 1:0] wstrb_reg;
    integer i;
begin 
    wresp = 0;
    aw_flag = 0;
    w_flag = 0;
//=======================one single write operate======================
    AWADDR_reg <= waddr;
    AWVALID_reg <= 1;
    WDATA_reg <= wdata;
    WVALID_reg <= 1;
    for (i = 0; i < DATA_WIDTH/8; i = i + 1) begin
        wstrb_reg [i] = 1;
    end    
    WSTRB_reg <= wstrb_reg;
    while (!(aw_flag && w_flag)) begin
        @(posedge clk);
        if (aw_flag != 1)
            aw_flag = TRAN_s_axi_CRTLS_AWREADY & AWVALID_reg;
        if (w_flag != 1)
            w_flag = TRAN_s_axi_CRTLS_WREADY & WVALID_reg;
        AWVALID_reg <= !aw_flag;
        WVALID_reg <= !w_flag;
    end

    BREADY_reg <= 1;
    while (TRAN_s_axi_CRTLS_BVALID != 1) begin
        //wait for response 
        @(posedge clk);
    end
    @(posedge clk);
    BREADY_reg <= 0;
    if (TRAN_s_axi_CRTLS_BRESP === 2'b00) begin
        wresp = 1;
        //input success. in fact BRESP is always 2'b00
    end   
//=======================one single write operate======================

end
endtask/*}}}*/

task read (/*{{{*/
    input  [ADDR_WIDTH - 1:0] raddr ,   // write address
    output [DATA_WIDTH - 1:0] RDATA_result ,
    output rresp
);
begin 
    rresp = 0;
//=======================one single read operate======================
    ARADDR_reg <= raddr;
    ARVALID_reg <= 1;
    while (TRAN_s_axi_CRTLS_ARREADY !== 1) begin
        @(posedge clk);
    end
    @(posedge clk);
    ARVALID_reg <= 0;
    RREADY_reg <= 1;
    while (TRAN_s_axi_CRTLS_RVALID !== 1) begin
        //wait for response 
        @(posedge clk);
    end
    @(posedge clk);
    RDATA_result  <= TRAN_s_axi_CRTLS_RDATA;
    RREADY_reg <= 0;
    if (TRAN_s_axi_CRTLS_RRESP === 2'b00 ) begin
        rresp <= 1;
        //output success. in fact RRESP is always 2'b00
    end  
    @(posedge clk);

//=======================one single read operate end======================

end
endtask/*}}}*/

initial begin : ready_initial_process
    ready_initial = 0;
    wait(reset === 1);
    @(posedge clk);
    ready_initial = 1;
    @(posedge clk);
    ready_initial = 0;
end

initial begin : update_status
    integer process_num ;
    integer read_status_resp;
    wait(reset === 1);
    @(posedge clk);
    process_num = 0;
    while (1) begin
        process_0_finish = 0;
        AESL_done_index_reg         <= 0;
        AESL_ready_out_index_reg        <= 0;
        if (ongoing_process_number === process_num && process_busy === 0) begin
            process_busy = 1;
            read (STATUS_ADDR, RDATA_reg, read_status_resp);
                AESL_done_index_reg         <= RDATA_reg[1 : 1];
                AESL_ready_out_index_reg    <= RDATA_reg[1 : 1];
                AESL_idle_index_reg         <= RDATA_reg[2 : 2];
            process_0_finish = 1;
            process_busy = 0;
        end 
        @(posedge clk);
    end
end

always @(reset or posedge clk) begin
    if (reset == 0) begin
        mode_cipher_write_data_finish <= 0;
        write_mode_cipher_run_flag <= 0; 
        write_mode_cipher_count = 0;
        count_operate_depth_by_bitwidth_and_depth (mode_cipher_c_bitwidth, mode_cipher_DEPTH, mode_cipher_OPERATE_DEPTH);
    end
    else begin
        if (TRAN_CRTLS_start_in === 1) begin
            mode_cipher_write_data_finish <= 0;
        end
        if (AESL_ready_reg === 1) begin
            write_mode_cipher_run_flag <= 1; 
            write_mode_cipher_count = 0;
        end
        if (write_one_mode_cipher_data_done === 1) begin
            write_mode_cipher_count = write_mode_cipher_count + 1;
            if (write_mode_cipher_count == mode_cipher_OPERATE_DEPTH) begin
                write_mode_cipher_run_flag <= 0; 
                mode_cipher_write_data_finish <= 1;
            end
        end
    end
end

initial begin : write_mode_cipher
    integer write_mode_cipher_resp;
    integer process_num ;
    integer get_ack;
    integer four_byte_num;
    integer c_bitwidth;
    integer i;
    integer j;
    reg [31 : 0] mode_cipher_data_tmp_reg;
    wait(reset === 1);
    @(posedge clk);
    c_bitwidth = mode_cipher_c_bitwidth;
    process_num = 1;
    count_c_data_four_byte_num_by_bitwidth (c_bitwidth , four_byte_num) ;
    while (1) begin
        process_1_finish <= 0;

        if (ongoing_process_number === process_num && process_busy === 0 ) begin
            get_ack = 1;
            if (write_mode_cipher_run_flag === 1 && get_ack === 1) begin
                process_busy = 1;
                //write mode_cipher data 
                for (i = 0 ; i < four_byte_num ; i = i+1) begin
                    if (mode_cipher_c_bitwidth < 32) begin
                        mode_cipher_data_tmp_reg = mem_mode_cipher[write_mode_cipher_count];
                    end
                    else begin
                        for (j=0 ; j<32 ; j = j + 1) begin
                            if (i*32 + j < mode_cipher_c_bitwidth) begin
                                mode_cipher_data_tmp_reg[j] = mem_mode_cipher[write_mode_cipher_count][i*32 + j];
                            end
                            else begin
                                mode_cipher_data_tmp_reg[j] = 0;
                            end
                        end
                    end
                    if(image_mem_mode_cipher[write_mode_cipher_count * four_byte_num  + i]!==mode_cipher_data_tmp_reg) begin
                    write (mode_cipher_data_in_addr + write_mode_cipher_count * four_byte_num * 4 + i * 4, mode_cipher_data_tmp_reg, write_mode_cipher_resp);
                    image_mem_mode_cipher[write_mode_cipher_count * four_byte_num + i]=mode_cipher_data_tmp_reg;
                    end
                end
                process_busy = 0;
                write_one_mode_cipher_data_done <= 1;
                @(posedge clk);
                write_one_mode_cipher_data_done <= 0;
            end   
            process_1_finish <= 1;
        end
        @(posedge clk);
    end    
end
always @(reset or posedge clk) begin
    if (reset == 0) begin
        mode_inverse_cipher_write_data_finish <= 0;
        write_mode_inverse_cipher_run_flag <= 0; 
        write_mode_inverse_cipher_count = 0;
        count_operate_depth_by_bitwidth_and_depth (mode_inverse_cipher_c_bitwidth, mode_inverse_cipher_DEPTH, mode_inverse_cipher_OPERATE_DEPTH);
    end
    else begin
        if (TRAN_CRTLS_start_in === 1) begin
            mode_inverse_cipher_write_data_finish <= 0;
        end
        if (AESL_ready_reg === 1) begin
            write_mode_inverse_cipher_run_flag <= 1; 
            write_mode_inverse_cipher_count = 0;
        end
        if (write_one_mode_inverse_cipher_data_done === 1) begin
            write_mode_inverse_cipher_count = write_mode_inverse_cipher_count + 1;
            if (write_mode_inverse_cipher_count == mode_inverse_cipher_OPERATE_DEPTH) begin
                write_mode_inverse_cipher_run_flag <= 0; 
                mode_inverse_cipher_write_data_finish <= 1;
            end
        end
    end
end

initial begin : write_mode_inverse_cipher
    integer write_mode_inverse_cipher_resp;
    integer process_num ;
    integer get_ack;
    integer four_byte_num;
    integer c_bitwidth;
    integer i;
    integer j;
    reg [31 : 0] mode_inverse_cipher_data_tmp_reg;
    wait(reset === 1);
    @(posedge clk);
    c_bitwidth = mode_inverse_cipher_c_bitwidth;
    process_num = 2;
    count_c_data_four_byte_num_by_bitwidth (c_bitwidth , four_byte_num) ;
    while (1) begin
        process_2_finish <= 0;

        if (ongoing_process_number === process_num && process_busy === 0 ) begin
            get_ack = 1;
            if (write_mode_inverse_cipher_run_flag === 1 && get_ack === 1) begin
                process_busy = 1;
                //write mode_inverse_cipher data 
                for (i = 0 ; i < four_byte_num ; i = i+1) begin
                    if (mode_inverse_cipher_c_bitwidth < 32) begin
                        mode_inverse_cipher_data_tmp_reg = mem_mode_inverse_cipher[write_mode_inverse_cipher_count];
                    end
                    else begin
                        for (j=0 ; j<32 ; j = j + 1) begin
                            if (i*32 + j < mode_inverse_cipher_c_bitwidth) begin
                                mode_inverse_cipher_data_tmp_reg[j] = mem_mode_inverse_cipher[write_mode_inverse_cipher_count][i*32 + j];
                            end
                            else begin
                                mode_inverse_cipher_data_tmp_reg[j] = 0;
                            end
                        end
                    end
                    if(image_mem_mode_inverse_cipher[write_mode_inverse_cipher_count * four_byte_num  + i]!==mode_inverse_cipher_data_tmp_reg) begin
                    write (mode_inverse_cipher_data_in_addr + write_mode_inverse_cipher_count * four_byte_num * 4 + i * 4, mode_inverse_cipher_data_tmp_reg, write_mode_inverse_cipher_resp);
                    image_mem_mode_inverse_cipher[write_mode_inverse_cipher_count * four_byte_num + i]=mode_inverse_cipher_data_tmp_reg;
                    end
                end
                process_busy = 0;
                write_one_mode_inverse_cipher_data_done <= 1;
                @(posedge clk);
                write_one_mode_inverse_cipher_data_done <= 0;
            end   
            process_2_finish <= 1;
        end
        @(posedge clk);
    end    
end
always @(reset or posedge clk) begin
    if (reset == 0) begin
        data_in_write_data_finish <= 0;
        write_data_in_run_flag <= 0; 
        write_data_in_count = 0;
        count_operate_depth_by_bitwidth_and_depth (data_in_c_bitwidth, data_in_DEPTH, data_in_OPERATE_DEPTH);
    end
    else begin
        if (TRAN_CRTLS_start_in === 1) begin
            data_in_write_data_finish <= 0;
        end
        if (AESL_ready_reg === 1) begin
            write_data_in_run_flag <= 1; 
            write_data_in_count = 0;
        end
        if (write_one_data_in_data_done === 1) begin
            write_data_in_count = write_data_in_count + 1;
            if (write_data_in_count == data_in_OPERATE_DEPTH) begin
                write_data_in_run_flag <= 0; 
                data_in_write_data_finish <= 1;
            end
        end
    end
end

initial begin : write_data_in
    integer write_data_in_resp;
    integer process_num ;
    integer get_ack;
    integer four_byte_num;
    integer c_bitwidth;
    integer i;
    integer j;
    reg [31 : 0] data_in_data_tmp_reg;
    wait(reset === 1);
    @(posedge clk);
    c_bitwidth = data_in_c_bitwidth;
    process_num = 3;
    count_c_data_four_byte_num_by_bitwidth (c_bitwidth , four_byte_num) ;
    while (1) begin
        process_3_finish <= 0;

        if (ongoing_process_number === process_num && process_busy === 0 ) begin
            get_ack = 1;
            if (write_data_in_run_flag === 1 && get_ack === 1) begin
                process_busy = 1;
                //write data_in data 
                for (i = 0 ; i < four_byte_num ; i = i+1) begin
                    if (data_in_c_bitwidth < 32) begin
                        data_in_data_tmp_reg = mem_data_in[write_data_in_count];
                    end
                    else begin
                        for (j=0 ; j<32 ; j = j + 1) begin
                            if (i*32 + j < data_in_c_bitwidth) begin
                                data_in_data_tmp_reg[j] = mem_data_in[write_data_in_count][i*32 + j];
                            end
                            else begin
                                data_in_data_tmp_reg[j] = 0;
                            end
                        end
                    end
                    if(image_mem_data_in[write_data_in_count * four_byte_num  + i]!==data_in_data_tmp_reg) begin
                    write (data_in_data_in_addr + write_data_in_count * four_byte_num * 4 + i * 4, data_in_data_tmp_reg, write_data_in_resp);
                    image_mem_data_in[write_data_in_count * four_byte_num + i]=data_in_data_tmp_reg;
                    end
                end
                process_busy = 0;
                write_one_data_in_data_done <= 1;
                @(posedge clk);
                write_one_data_in_data_done <= 0;
            end   
            process_3_finish <= 1;
        end
        @(posedge clk);
    end    
end
always @(reset or posedge clk) begin
    if (reset == 0) begin
        expandedKey_write_data_finish <= 0;
        write_expandedKey_run_flag <= 0; 
        write_expandedKey_count = 0;
        count_operate_depth_by_bitwidth_and_depth (expandedKey_c_bitwidth, expandedKey_DEPTH, expandedKey_OPERATE_DEPTH);
    end
    else begin
        if (TRAN_CRTLS_start_in === 1) begin
            expandedKey_write_data_finish <= 0;
        end
        if (AESL_ready_reg === 1) begin
            write_expandedKey_run_flag <= 1; 
            write_expandedKey_count = 0;
        end
        if (write_one_expandedKey_data_done === 1) begin
            write_expandedKey_count = write_expandedKey_count + 1;
            if (write_expandedKey_count == expandedKey_OPERATE_DEPTH) begin
                write_expandedKey_run_flag <= 0; 
                expandedKey_write_data_finish <= 1;
            end
        end
    end
end

initial begin : write_expandedKey
    integer write_expandedKey_resp;
    integer process_num ;
    integer get_ack;
    integer four_byte_num;
    integer c_bitwidth;
    integer i;
    integer j;
    reg [31 : 0] expandedKey_data_tmp_reg;
    wait(reset === 1);
    @(posedge clk);
    c_bitwidth = expandedKey_c_bitwidth;
    process_num = 4;
    count_c_data_four_byte_num_by_bitwidth (c_bitwidth , four_byte_num) ;
    while (1) begin
        process_4_finish <= 0;

        if (ongoing_process_number === process_num && process_busy === 0 ) begin
            get_ack = 1;
            if (write_expandedKey_run_flag === 1 && get_ack === 1) begin
                process_busy = 1;
                //write expandedKey data 
                for (i = 0 ; i < four_byte_num ; i = i+1) begin
                    if (expandedKey_c_bitwidth < 32) begin
                        expandedKey_data_tmp_reg = mem_expandedKey[write_expandedKey_count];
                    end
                    else begin
                        for (j=0 ; j<32 ; j = j + 1) begin
                            if (i*32 + j < expandedKey_c_bitwidth) begin
                                expandedKey_data_tmp_reg[j] = mem_expandedKey[write_expandedKey_count][i*32 + j];
                            end
                            else begin
                                expandedKey_data_tmp_reg[j] = 0;
                            end
                        end
                    end
                    if(image_mem_expandedKey[write_expandedKey_count * four_byte_num  + i]!==expandedKey_data_tmp_reg) begin
                    write (expandedKey_data_in_addr + write_expandedKey_count * four_byte_num * 4 + i * 4, expandedKey_data_tmp_reg, write_expandedKey_resp);
                    image_mem_expandedKey[write_expandedKey_count * four_byte_num + i]=expandedKey_data_tmp_reg;
                    end
                end
                process_busy = 0;
                write_one_expandedKey_data_done <= 1;
                @(posedge clk);
                write_one_expandedKey_data_done <= 0;
            end   
            process_4_finish <= 1;
        end
        @(posedge clk);
    end    
end
always @(reset or posedge clk) begin
    if (reset == 0) begin
        Nr_write_data_finish <= 0;
        write_Nr_run_flag <= 0; 
        write_Nr_count = 0;
        count_operate_depth_by_bitwidth_and_depth (Nr_c_bitwidth, Nr_DEPTH, Nr_OPERATE_DEPTH);
    end
    else begin
        if (TRAN_CRTLS_start_in === 1) begin
            Nr_write_data_finish <= 0;
        end
        if (AESL_ready_reg === 1) begin
            write_Nr_run_flag <= 1; 
            write_Nr_count = 0;
        end
        if (write_one_Nr_data_done === 1) begin
            write_Nr_count = write_Nr_count + 1;
            if (write_Nr_count == Nr_OPERATE_DEPTH) begin
                write_Nr_run_flag <= 0; 
                Nr_write_data_finish <= 1;
            end
        end
    end
end

initial begin : write_Nr
    integer write_Nr_resp;
    integer process_num ;
    integer get_ack;
    integer four_byte_num;
    integer c_bitwidth;
    integer i;
    integer j;
    reg [31 : 0] Nr_data_tmp_reg;
    wait(reset === 1);
    @(posedge clk);
    c_bitwidth = Nr_c_bitwidth;
    process_num = 5;
    count_c_data_four_byte_num_by_bitwidth (c_bitwidth , four_byte_num) ;
    while (1) begin
        process_5_finish <= 0;

        if (ongoing_process_number === process_num && process_busy === 0 ) begin
            get_ack = 1;
            if (write_Nr_run_flag === 1 && get_ack === 1) begin
                process_busy = 1;
                //write Nr data 
                for (i = 0 ; i < four_byte_num ; i = i+1) begin
                    if (Nr_c_bitwidth < 32) begin
                        Nr_data_tmp_reg = mem_Nr[write_Nr_count];
                    end
                    else begin
                        for (j=0 ; j<32 ; j = j + 1) begin
                            if (i*32 + j < Nr_c_bitwidth) begin
                                Nr_data_tmp_reg[j] = mem_Nr[write_Nr_count][i*32 + j];
                            end
                            else begin
                                Nr_data_tmp_reg[j] = 0;
                            end
                        end
                    end
                    if(image_mem_Nr[write_Nr_count * four_byte_num  + i]!==Nr_data_tmp_reg) begin
                    write (Nr_data_in_addr + write_Nr_count * four_byte_num * 4 + i * 4, Nr_data_tmp_reg, write_Nr_resp);
                    image_mem_Nr[write_Nr_count * four_byte_num + i]=Nr_data_tmp_reg;
                    end
                end
                process_busy = 0;
                write_one_Nr_data_done <= 1;
                @(posedge clk);
                write_one_Nr_data_done <= 0;
            end   
            process_5_finish <= 1;
        end
        @(posedge clk);
    end    
end

always @(reset or posedge clk) begin
    if (reset == 0) begin
        write_start_run_flag <= 0; 
        write_start_count <= 0;
    end
    else begin
        if (write_start_count >= 2) begin
            write_start_run_flag <= 0; 
        end
        else if (TRAN_CRTLS_write_start_in === 1) begin
            write_start_run_flag <= 1; 
        end
        if (AESL_write_start_finish === 1) begin
            write_start_count <= write_start_count + 1;
            write_start_run_flag <= 0; 
        end
    end
end

initial begin : write_start
    reg [DATA_WIDTH - 1 : 0] write_start_tmp;
    integer process_num;
    integer write_start_resp;
    wait(reset === 1);
    @(posedge clk);
    process_num = 6;
    while (1) begin
        process_6_finish = 0;
        if (ongoing_process_number === process_num && process_busy === 0 ) begin
            if (write_start_run_flag === 1) begin
                process_busy = 1;
                write_start_tmp=0;
                write_start_tmp[0 : 0] = 1;
                write (START_ADDR, write_start_tmp, write_start_resp);
                process_busy = 0;
                AESL_write_start_finish <= 1;
                @(posedge clk);
                AESL_write_start_finish <= 0;
            end
            process_6_finish <= 1;
        end 
        @(posedge clk);
    end
end

always @(reset or posedge clk) begin
    if (reset == 0) begin
        data_out_read_data_finish <= 0;
        read_data_out_run_flag <= 0; 
        read_data_out_count = 0;
        count_operate_depth_by_bitwidth_and_depth (data_out_c_bitwidth, data_out_DEPTH, data_out_OPERATE_DEPTH);
    end
    else begin
        if (AESL_done_index_reg === 1) begin
            read_data_out_run_flag = 1; 
        end
        if (TRAN_CRTLS_transaction_done_in === 1) begin
            data_out_read_data_finish <= 0;
            read_data_out_count = 0; 
        end
        if (read_one_data_out_data_done === 1) begin
            read_data_out_count = read_data_out_count + 1;
            if (read_data_out_count == data_out_OPERATE_DEPTH) begin
                read_data_out_run_flag <= 0; 
                data_out_read_data_finish <= 1;
            end
        end
    end
end

initial begin : read_data_out
    integer read_data_out_resp;
    integer process_num;
    integer get_vld;
    integer four_byte_num;
    integer c_bitwidth;
    integer i;
    integer j;

    wait(reset === 1);
    @(posedge clk);
    c_bitwidth = data_out_c_bitwidth;
    process_num = 7;
    count_c_data_four_byte_num_by_bitwidth (c_bitwidth , four_byte_num) ;
    while (1) begin
        process_7_finish <= 0;
        if (ongoing_process_number === process_num && process_busy === 0 ) begin
            if (read_data_out_run_flag === 1) begin
                process_busy = 1;
                get_vld = 1;
                if (get_vld == 1) begin
                    //read data_out data 
                    for (i = 0 ; i < four_byte_num ; i = i+1) begin
                        read (data_out_data_out_addr + read_data_out_count * four_byte_num * 4 + i * 4, RDATA_reg, read_data_out_resp);
                        if (data_out_c_bitwidth < 32) begin
                            mem_data_out[read_data_out_count] <= RDATA_reg;
                        end
                        else begin
                            for (j=0 ; j < 32 ; j = j + 1) begin
                                if (i*32 + j < data_out_c_bitwidth) begin
                                    mem_data_out[read_data_out_count][i*32 + j] <= RDATA_reg[j];
                                end
                            end
                        end
                    end
                    
                    read_one_data_out_data_done <= 1;
                    @(posedge clk);
                    read_one_data_out_data_done <= 0;
                end    
                process_busy = 0;
            end    
            process_7_finish <= 1;
        end
        @(posedge clk);
    end    
end
//------------------------Task and function-------------- 
task read_token; 
    input integer fp; 
    output reg [127 : 0] token;
    integer ret;
    begin
        token = "";
        ret = 0;
        ret = $fscanf(fp,"%s",token);
    end 
endtask 
 
//------------------------Read file------------------------ 
 
// Read data from file 
initial begin : read_mode_cipher_file_process 
  integer fp; 
  integer ret; 
  integer factor; 
  reg [127 : 0] token; 
  reg [127 : 0] token_tmp; 
  //reg [mode_cipher_c_bitwidth - 1 : 0] token_tmp; 
  reg [DATA_WIDTH - 1 : 0] tmp_cache_mem; 
  reg [ 8*5 : 1] str;
    reg [63:0] trans_depth;
  integer transaction_idx; 
  integer i; 
  transaction_idx = 0; 
  tmp_cache_mem [DATA_WIDTH - 1 : 0] = 0;
  count_seperate_factor_by_bitwidth (mode_cipher_c_bitwidth , factor);
  fp = $fopen(`TV_IN_mode_cipher ,"r"); 
  if(fp == 0) begin                               // Failed to open file 
      $display("Failed to open file \"%s\"!", `TV_IN_mode_cipher); 
      $finish; 
  end 
  read_token(fp, token); 
  if (token != "[[[runtime]]]") begin             // Illegal format 
      $display("ERROR: Simulation using HLS TB failed.");
      $finish; 
  end 
  read_token(fp, token); 
  while (token != "[[[/runtime]]]") begin 
      if (token != "[[transaction]]") begin 
          $display("ERROR: Simulation using HLS TB failed.");
          $finish; 
      end 
      read_token(fp, token);                        // skip transaction number 
      @(posedge clk);
      # 0.2;
      while(AESL_ready_reg !== 1) begin
          @(posedge clk); 
          # 0.2;
      end
      for(i = 0; i < mode_cipher_DEPTH; i = i + 1) begin 
          read_token(fp, token); 
          ret = $sscanf(token, "0x%x", token_tmp); 
          if (factor == 4) begin
              if (i%factor == 0) begin
                  tmp_cache_mem [7 : 0] = token_tmp;
              end
              if (i%factor == 1) begin
                  tmp_cache_mem [15 : 8] = token_tmp;
              end
              if (i%factor == 2) begin
                  tmp_cache_mem [23 : 16] = token_tmp;
              end
              if (i%factor == 3) begin
                  tmp_cache_mem [31 : 24] = token_tmp;
                  mem_mode_cipher [i/factor] = tmp_cache_mem;
                  tmp_cache_mem [DATA_WIDTH - 1 : 0] = 0;
              end
          end
          if (factor == 2) begin
              if (i%factor == 0) begin
                  tmp_cache_mem [15 : 0] = token_tmp;
              end
              if (i%factor == 1) begin
                  tmp_cache_mem [31 : 16] = token_tmp;
                  mem_mode_cipher [i/factor] = tmp_cache_mem;
                  tmp_cache_mem [DATA_WIDTH - 1: 0] = 0;
              end
          end
          if (factor == 1) begin
              mem_mode_cipher [i] = token_tmp;
          end
      end 
      if (factor == 4) begin
          if (i%factor != 0) begin
              mem_mode_cipher [i/factor] = tmp_cache_mem;
          end
      end
      if (factor == 2) begin
          if (i%factor != 0) begin
              mem_mode_cipher [i/factor] = tmp_cache_mem;
          end
      end 
      read_token(fp, token); 
      if(token != "[[/transaction]]") begin 
          $display("ERROR: Simulation using HLS TB failed.");
          $finish; 
      end 
      read_token(fp, token); 
      transaction_idx = transaction_idx + 1; 
  end 
  $fclose(fp); 
end 
 
task write_binary_mode_cipher;
    input integer fp;
    input reg[64-1:0] in;
    input integer in_bw;
    reg [63:0] tmp_long;
    reg[64-1:0] local_in;
    integer char_num;
    integer long_num;
    integer i;
    integer j;
    begin
        long_num = (in_bw + 63) / 64;
        char_num = ((in_bw - 1) % 64 + 7) / 8;
        for(i=long_num;i>0;i=i-1) begin
             local_in = in;
             tmp_long = local_in >> ((i-1)*64);
             for(j=0;j<64;j=j+1)
                 if (tmp_long[j] === 1'bx)
                     tmp_long[j] = 1'b0;
             if (i == long_num) begin
                 case(char_num)
                     1: $fwrite(fp,"%c",tmp_long[7:0]);
                     2: $fwrite(fp,"%c%c",tmp_long[15:8],tmp_long[7:0]);
                     3: $fwrite(fp,"%c%c%c",tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     4: $fwrite(fp,"%c%c%c%c",tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     5: $fwrite(fp,"%c%c%c%c%c",tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     6: $fwrite(fp,"%c%c%c%c%c%c",tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     7: $fwrite(fp,"%c%c%c%c%c%c%c",tmp_long[55:48],tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     8: $fwrite(fp,"%c%c%c%c%c%c%c%c",tmp_long[63:56],tmp_long[55:48],tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     default: ;
                 endcase
             end
             else begin
                 $fwrite(fp,"%c%c%c%c%c%c%c%c",tmp_long[63:56],tmp_long[55:48],tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
             end
        end
    end
endtask;
//------------------------Read file------------------------ 
 
// Read data from file 
initial begin : read_mode_inverse_cipher_file_process 
  integer fp; 
  integer ret; 
  integer factor; 
  reg [127 : 0] token; 
  reg [127 : 0] token_tmp; 
  //reg [mode_inverse_cipher_c_bitwidth - 1 : 0] token_tmp; 
  reg [DATA_WIDTH - 1 : 0] tmp_cache_mem; 
  reg [ 8*5 : 1] str;
    reg [63:0] trans_depth;
  integer transaction_idx; 
  integer i; 
  transaction_idx = 0; 
  tmp_cache_mem [DATA_WIDTH - 1 : 0] = 0;
  count_seperate_factor_by_bitwidth (mode_inverse_cipher_c_bitwidth , factor);
  fp = $fopen(`TV_IN_mode_inverse_cipher ,"r"); 
  if(fp == 0) begin                               // Failed to open file 
      $display("Failed to open file \"%s\"!", `TV_IN_mode_inverse_cipher); 
      $finish; 
  end 
  read_token(fp, token); 
  if (token != "[[[runtime]]]") begin             // Illegal format 
      $display("ERROR: Simulation using HLS TB failed.");
      $finish; 
  end 
  read_token(fp, token); 
  while (token != "[[[/runtime]]]") begin 
      if (token != "[[transaction]]") begin 
          $display("ERROR: Simulation using HLS TB failed.");
          $finish; 
      end 
      read_token(fp, token);                        // skip transaction number 
      @(posedge clk);
      # 0.2;
      while(AESL_ready_reg !== 1) begin
          @(posedge clk); 
          # 0.2;
      end
      for(i = 0; i < mode_inverse_cipher_DEPTH; i = i + 1) begin 
          read_token(fp, token); 
          ret = $sscanf(token, "0x%x", token_tmp); 
          if (factor == 4) begin
              if (i%factor == 0) begin
                  tmp_cache_mem [7 : 0] = token_tmp;
              end
              if (i%factor == 1) begin
                  tmp_cache_mem [15 : 8] = token_tmp;
              end
              if (i%factor == 2) begin
                  tmp_cache_mem [23 : 16] = token_tmp;
              end
              if (i%factor == 3) begin
                  tmp_cache_mem [31 : 24] = token_tmp;
                  mem_mode_inverse_cipher [i/factor] = tmp_cache_mem;
                  tmp_cache_mem [DATA_WIDTH - 1 : 0] = 0;
              end
          end
          if (factor == 2) begin
              if (i%factor == 0) begin
                  tmp_cache_mem [15 : 0] = token_tmp;
              end
              if (i%factor == 1) begin
                  tmp_cache_mem [31 : 16] = token_tmp;
                  mem_mode_inverse_cipher [i/factor] = tmp_cache_mem;
                  tmp_cache_mem [DATA_WIDTH - 1: 0] = 0;
              end
          end
          if (factor == 1) begin
              mem_mode_inverse_cipher [i] = token_tmp;
          end
      end 
      if (factor == 4) begin
          if (i%factor != 0) begin
              mem_mode_inverse_cipher [i/factor] = tmp_cache_mem;
          end
      end
      if (factor == 2) begin
          if (i%factor != 0) begin
              mem_mode_inverse_cipher [i/factor] = tmp_cache_mem;
          end
      end 
      read_token(fp, token); 
      if(token != "[[/transaction]]") begin 
          $display("ERROR: Simulation using HLS TB failed.");
          $finish; 
      end 
      read_token(fp, token); 
      transaction_idx = transaction_idx + 1; 
  end 
  $fclose(fp); 
end 
 
task write_binary_mode_inverse_cipher;
    input integer fp;
    input reg[64-1:0] in;
    input integer in_bw;
    reg [63:0] tmp_long;
    reg[64-1:0] local_in;
    integer char_num;
    integer long_num;
    integer i;
    integer j;
    begin
        long_num = (in_bw + 63) / 64;
        char_num = ((in_bw - 1) % 64 + 7) / 8;
        for(i=long_num;i>0;i=i-1) begin
             local_in = in;
             tmp_long = local_in >> ((i-1)*64);
             for(j=0;j<64;j=j+1)
                 if (tmp_long[j] === 1'bx)
                     tmp_long[j] = 1'b0;
             if (i == long_num) begin
                 case(char_num)
                     1: $fwrite(fp,"%c",tmp_long[7:0]);
                     2: $fwrite(fp,"%c%c",tmp_long[15:8],tmp_long[7:0]);
                     3: $fwrite(fp,"%c%c%c",tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     4: $fwrite(fp,"%c%c%c%c",tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     5: $fwrite(fp,"%c%c%c%c%c",tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     6: $fwrite(fp,"%c%c%c%c%c%c",tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     7: $fwrite(fp,"%c%c%c%c%c%c%c",tmp_long[55:48],tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     8: $fwrite(fp,"%c%c%c%c%c%c%c%c",tmp_long[63:56],tmp_long[55:48],tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     default: ;
                 endcase
             end
             else begin
                 $fwrite(fp,"%c%c%c%c%c%c%c%c",tmp_long[63:56],tmp_long[55:48],tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
             end
        end
    end
endtask;
//------------------------Read file------------------------ 
 
// Read data from file 
initial begin : read_data_in_file_process 
  integer fp; 
  integer ret; 
  integer factor; 
  reg [127 : 0] token; 
  reg [8 - 1 : 0] token_tmp; 
  //reg [data_in_c_bitwidth - 1 : 0] token_tmp; 
  reg [DATA_WIDTH - 1 : 0] tmp_cache_mem; 
  reg [ 8*5 : 1] str;
    reg [63:0] trans_depth;
  integer transaction_idx; 
  integer i; 
  transaction_idx = 0; 
  tmp_cache_mem [DATA_WIDTH - 1 : 0] = 0;
  count_seperate_factor_by_bitwidth (data_in_c_bitwidth , factor);
  fp = $fopen(`TV_IN_data_in ,"rb"); 
  if(fp == 0) begin                               // Failed to open file 
      $display("Failed to open file \"%s\"!", `TV_IN_data_in); 
      $finish; 
  end 
  $fread(trans_depth,fp);
  while (trans_depth != 64'h5a5aa5a50f0ff0f0)  begin
      @(posedge clk);
      # 0.2;
      while(AESL_ready_reg !== 1) begin
          @(posedge clk); 
          # 0.2;
      end
      for(i = 0; i < data_in_DEPTH; i = i + 1) begin 
         $fread(token_tmp,fp);
          if (factor == 4) begin
              if (i%factor == 0) begin
                  tmp_cache_mem [7 : 0] = token_tmp;
              end
              if (i%factor == 1) begin
                  tmp_cache_mem [15 : 8] = token_tmp;
              end
              if (i%factor == 2) begin
                  tmp_cache_mem [23 : 16] = token_tmp;
              end
              if (i%factor == 3) begin
                  tmp_cache_mem [31 : 24] = token_tmp;
                  mem_data_in [i/factor] = tmp_cache_mem;
                  tmp_cache_mem [DATA_WIDTH - 1 : 0] = 0;
              end
          end
          if (factor == 2) begin
              if (i%factor == 0) begin
                  tmp_cache_mem [15 : 0] = token_tmp;
              end
              if (i%factor == 1) begin
                  tmp_cache_mem [31 : 16] = token_tmp;
                  mem_data_in [i/factor] = tmp_cache_mem;
                  tmp_cache_mem [DATA_WIDTH - 1: 0] = 0;
              end
          end
          if (factor == 1) begin
              mem_data_in [i] = token_tmp;
          end
      end 
      if (factor == 4) begin
          if (i%factor != 0) begin
              mem_data_in [i/factor] = tmp_cache_mem;
          end
      end
      if (factor == 2) begin
          if (i%factor != 0) begin
              mem_data_in [i/factor] = tmp_cache_mem;
          end
      end 
      $fread(trans_depth,fp);
      transaction_idx = transaction_idx + 1; 
  end 
  $fclose(fp); 
end 
 
task write_binary_data_in;
    input integer fp;
    input reg[64-1:0] in;
    input integer in_bw;
    reg [63:0] tmp_long;
    reg[64-1:0] local_in;
    integer char_num;
    integer long_num;
    integer i;
    integer j;
    begin
        long_num = (in_bw + 63) / 64;
        char_num = ((in_bw - 1) % 64 + 7) / 8;
        for(i=long_num;i>0;i=i-1) begin
             local_in = in;
             tmp_long = local_in >> ((i-1)*64);
             for(j=0;j<64;j=j+1)
                 if (tmp_long[j] === 1'bx)
                     tmp_long[j] = 1'b0;
             if (i == long_num) begin
                 case(char_num)
                     1: $fwrite(fp,"%c",tmp_long[7:0]);
                     2: $fwrite(fp,"%c%c",tmp_long[15:8],tmp_long[7:0]);
                     3: $fwrite(fp,"%c%c%c",tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     4: $fwrite(fp,"%c%c%c%c",tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     5: $fwrite(fp,"%c%c%c%c%c",tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     6: $fwrite(fp,"%c%c%c%c%c%c",tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     7: $fwrite(fp,"%c%c%c%c%c%c%c",tmp_long[55:48],tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     8: $fwrite(fp,"%c%c%c%c%c%c%c%c",tmp_long[63:56],tmp_long[55:48],tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     default: ;
                 endcase
             end
             else begin
                 $fwrite(fp,"%c%c%c%c%c%c%c%c",tmp_long[63:56],tmp_long[55:48],tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
             end
        end
    end
endtask;
//------------------------Read file------------------------ 
 
// Read data from file 
initial begin : read_expandedKey_file_process 
  integer fp; 
  integer ret; 
  integer factor; 
  reg [127 : 0] token; 
  reg [8 - 1 : 0] token_tmp; 
  //reg [expandedKey_c_bitwidth - 1 : 0] token_tmp; 
  reg [DATA_WIDTH - 1 : 0] tmp_cache_mem; 
  reg [ 8*5 : 1] str;
    reg [63:0] trans_depth;
  integer transaction_idx; 
  integer i; 
  transaction_idx = 0; 
  tmp_cache_mem [DATA_WIDTH - 1 : 0] = 0;
  count_seperate_factor_by_bitwidth (expandedKey_c_bitwidth , factor);
  fp = $fopen(`TV_IN_expandedKey ,"rb"); 
  if(fp == 0) begin                               // Failed to open file 
      $display("Failed to open file \"%s\"!", `TV_IN_expandedKey); 
      $finish; 
  end 
  $fread(trans_depth,fp);
  while (trans_depth != 64'h5a5aa5a50f0ff0f0)  begin
      @(posedge clk);
      # 0.2;
      while(AESL_ready_reg !== 1) begin
          @(posedge clk); 
          # 0.2;
      end
      for(i = 0; i < expandedKey_DEPTH; i = i + 1) begin 
         $fread(token_tmp,fp);
          if (factor == 4) begin
              if (i%factor == 0) begin
                  tmp_cache_mem [7 : 0] = token_tmp;
              end
              if (i%factor == 1) begin
                  tmp_cache_mem [15 : 8] = token_tmp;
              end
              if (i%factor == 2) begin
                  tmp_cache_mem [23 : 16] = token_tmp;
              end
              if (i%factor == 3) begin
                  tmp_cache_mem [31 : 24] = token_tmp;
                  mem_expandedKey [i/factor] = tmp_cache_mem;
                  tmp_cache_mem [DATA_WIDTH - 1 : 0] = 0;
              end
          end
          if (factor == 2) begin
              if (i%factor == 0) begin
                  tmp_cache_mem [15 : 0] = token_tmp;
              end
              if (i%factor == 1) begin
                  tmp_cache_mem [31 : 16] = token_tmp;
                  mem_expandedKey [i/factor] = tmp_cache_mem;
                  tmp_cache_mem [DATA_WIDTH - 1: 0] = 0;
              end
          end
          if (factor == 1) begin
              mem_expandedKey [i] = token_tmp;
          end
      end 
      if (factor == 4) begin
          if (i%factor != 0) begin
              mem_expandedKey [i/factor] = tmp_cache_mem;
          end
      end
      if (factor == 2) begin
          if (i%factor != 0) begin
              mem_expandedKey [i/factor] = tmp_cache_mem;
          end
      end 
      $fread(trans_depth,fp);
      transaction_idx = transaction_idx + 1; 
  end 
  $fclose(fp); 
end 
 
task write_binary_expandedKey;
    input integer fp;
    input reg[64-1:0] in;
    input integer in_bw;
    reg [63:0] tmp_long;
    reg[64-1:0] local_in;
    integer char_num;
    integer long_num;
    integer i;
    integer j;
    begin
        long_num = (in_bw + 63) / 64;
        char_num = ((in_bw - 1) % 64 + 7) / 8;
        for(i=long_num;i>0;i=i-1) begin
             local_in = in;
             tmp_long = local_in >> ((i-1)*64);
             for(j=0;j<64;j=j+1)
                 if (tmp_long[j] === 1'bx)
                     tmp_long[j] = 1'b0;
             if (i == long_num) begin
                 case(char_num)
                     1: $fwrite(fp,"%c",tmp_long[7:0]);
                     2: $fwrite(fp,"%c%c",tmp_long[15:8],tmp_long[7:0]);
                     3: $fwrite(fp,"%c%c%c",tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     4: $fwrite(fp,"%c%c%c%c",tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     5: $fwrite(fp,"%c%c%c%c%c",tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     6: $fwrite(fp,"%c%c%c%c%c%c",tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     7: $fwrite(fp,"%c%c%c%c%c%c%c",tmp_long[55:48],tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     8: $fwrite(fp,"%c%c%c%c%c%c%c%c",tmp_long[63:56],tmp_long[55:48],tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     default: ;
                 endcase
             end
             else begin
                 $fwrite(fp,"%c%c%c%c%c%c%c%c",tmp_long[63:56],tmp_long[55:48],tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
             end
        end
    end
endtask;
//------------------------Read file------------------------ 
 
// Read data from file 
initial begin : read_Nr_file_process 
  integer fp; 
  integer ret; 
  integer factor; 
  reg [127 : 0] token; 
  reg [127 : 0] token_tmp; 
  //reg [Nr_c_bitwidth - 1 : 0] token_tmp; 
  reg [DATA_WIDTH - 1 : 0] tmp_cache_mem; 
  reg [ 8*5 : 1] str;
    reg [63:0] trans_depth;
  integer transaction_idx; 
  integer i; 
  transaction_idx = 0; 
  tmp_cache_mem [DATA_WIDTH - 1 : 0] = 0;
  count_seperate_factor_by_bitwidth (Nr_c_bitwidth , factor);
  fp = $fopen(`TV_IN_Nr ,"r"); 
  if(fp == 0) begin                               // Failed to open file 
      $display("Failed to open file \"%s\"!", `TV_IN_Nr); 
      $finish; 
  end 
  read_token(fp, token); 
  if (token != "[[[runtime]]]") begin             // Illegal format 
      $display("ERROR: Simulation using HLS TB failed.");
      $finish; 
  end 
  read_token(fp, token); 
  while (token != "[[[/runtime]]]") begin 
      if (token != "[[transaction]]") begin 
          $display("ERROR: Simulation using HLS TB failed.");
          $finish; 
      end 
      read_token(fp, token);                        // skip transaction number 
      @(posedge clk);
      # 0.2;
      while(AESL_ready_reg !== 1) begin
          @(posedge clk); 
          # 0.2;
      end
      for(i = 0; i < Nr_DEPTH; i = i + 1) begin 
          read_token(fp, token); 
          ret = $sscanf(token, "0x%x", token_tmp); 
          if (factor == 4) begin
              if (i%factor == 0) begin
                  tmp_cache_mem [7 : 0] = token_tmp;
              end
              if (i%factor == 1) begin
                  tmp_cache_mem [15 : 8] = token_tmp;
              end
              if (i%factor == 2) begin
                  tmp_cache_mem [23 : 16] = token_tmp;
              end
              if (i%factor == 3) begin
                  tmp_cache_mem [31 : 24] = token_tmp;
                  mem_Nr [i/factor] = tmp_cache_mem;
                  tmp_cache_mem [DATA_WIDTH - 1 : 0] = 0;
              end
          end
          if (factor == 2) begin
              if (i%factor == 0) begin
                  tmp_cache_mem [15 : 0] = token_tmp;
              end
              if (i%factor == 1) begin
                  tmp_cache_mem [31 : 16] = token_tmp;
                  mem_Nr [i/factor] = tmp_cache_mem;
                  tmp_cache_mem [DATA_WIDTH - 1: 0] = 0;
              end
          end
          if (factor == 1) begin
              mem_Nr [i] = token_tmp;
          end
      end 
      if (factor == 4) begin
          if (i%factor != 0) begin
              mem_Nr [i/factor] = tmp_cache_mem;
          end
      end
      if (factor == 2) begin
          if (i%factor != 0) begin
              mem_Nr [i/factor] = tmp_cache_mem;
          end
      end 
      read_token(fp, token); 
      if(token != "[[/transaction]]") begin 
          $display("ERROR: Simulation using HLS TB failed.");
          $finish; 
      end 
      read_token(fp, token); 
      transaction_idx = transaction_idx + 1; 
  end 
  $fclose(fp); 
end 
 
task write_binary_Nr;
    input integer fp;
    input reg[64-1:0] in;
    input integer in_bw;
    reg [63:0] tmp_long;
    reg[64-1:0] local_in;
    integer char_num;
    integer long_num;
    integer i;
    integer j;
    begin
        long_num = (in_bw + 63) / 64;
        char_num = ((in_bw - 1) % 64 + 7) / 8;
        for(i=long_num;i>0;i=i-1) begin
             local_in = in;
             tmp_long = local_in >> ((i-1)*64);
             for(j=0;j<64;j=j+1)
                 if (tmp_long[j] === 1'bx)
                     tmp_long[j] = 1'b0;
             if (i == long_num) begin
                 case(char_num)
                     1: $fwrite(fp,"%c",tmp_long[7:0]);
                     2: $fwrite(fp,"%c%c",tmp_long[15:8],tmp_long[7:0]);
                     3: $fwrite(fp,"%c%c%c",tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     4: $fwrite(fp,"%c%c%c%c",tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     5: $fwrite(fp,"%c%c%c%c%c",tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     6: $fwrite(fp,"%c%c%c%c%c%c",tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     7: $fwrite(fp,"%c%c%c%c%c%c%c",tmp_long[55:48],tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     8: $fwrite(fp,"%c%c%c%c%c%c%c%c",tmp_long[63:56],tmp_long[55:48],tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     default: ;
                 endcase
             end
             else begin
                 $fwrite(fp,"%c%c%c%c%c%c%c%c",tmp_long[63:56],tmp_long[55:48],tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
             end
        end
    end
endtask;
task write_binary_data_out;
    input integer fp;
    input reg[64-1:0] in;
    input integer in_bw;
    reg [63:0] tmp_long;
    reg[64-1:0] local_in;
    integer char_num;
    integer long_num;
    integer i;
    integer j;
    begin
        long_num = (in_bw + 63) / 64;
        char_num = ((in_bw - 1) % 64 + 7) / 8;
        for(i=long_num;i>0;i=i-1) begin
             local_in = in;
             tmp_long = local_in >> ((i-1)*64);
             for(j=0;j<64;j=j+1)
                 if (tmp_long[j] === 1'bx)
                     tmp_long[j] = 1'b0;
             if (i == long_num) begin
                 case(char_num)
                     1: $fwrite(fp,"%c",tmp_long[7:0]);
                     2: $fwrite(fp,"%c%c",tmp_long[15:8],tmp_long[7:0]);
                     3: $fwrite(fp,"%c%c%c",tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     4: $fwrite(fp,"%c%c%c%c",tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     5: $fwrite(fp,"%c%c%c%c%c",tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     6: $fwrite(fp,"%c%c%c%c%c%c",tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     7: $fwrite(fp,"%c%c%c%c%c%c%c",tmp_long[55:48],tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     8: $fwrite(fp,"%c%c%c%c%c%c%c%c",tmp_long[63:56],tmp_long[55:48],tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
                     default: ;
                 endcase
             end
             else begin
                 $fwrite(fp,"%c%c%c%c%c%c%c%c",tmp_long[63:56],tmp_long[55:48],tmp_long[47:40],tmp_long[39:32],tmp_long[31:24],tmp_long[23:16],tmp_long[15:8],tmp_long[7:0]);
             end
        end
    end
endtask;
//------------------------Write file----------------------- 
 
// Write data to file 
 
initial begin : write_data_out_file_proc 
  integer fp; 
  integer factor; 
  integer transaction_idx; 
  reg [data_out_c_bitwidth - 1 : 0] tmp_cache_mem; 
  reg [ 100*8 : 1] str;
  reg [63:0] bin_data;
  integer i; 
  transaction_idx = 0; 
  count_seperate_factor_by_bitwidth (data_out_c_bitwidth , factor);
  while(1) begin 
      @(posedge clk);
      while (data_out_read_data_finish !== 1 || TRAN_CRTLS_transaction_done_in === 1) begin
          @(posedge clk);
      end
      # 0.1;
    fp = $fopen(`TV_OUT_data_out, "ab"); 
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", str);
        $finish;
    end
        bin_data = data_out_DEPTH;
        write_binary(fp,bin_data,64);
      for (i = 0; i < (data_out_DEPTH - data_out_DEPTH % factor); i = i + 1) begin
          if (factor == 4) begin
              if (i%factor == 0) begin
                  tmp_cache_mem = mem_data_out[i/factor][7:0];
              end
              if (i%factor == 1) begin
                  tmp_cache_mem = mem_data_out[i/factor][15:8];
              end
              if (i%factor == 2) begin
                  tmp_cache_mem = mem_data_out[i/factor][23:16];
              end
              if (i%factor == 3) begin
                  tmp_cache_mem = mem_data_out[i/factor][31:24];
              end
              bin_data = tmp_cache_mem;
              write_binary_data_out(fp,bin_data,8);
          end
          if (factor == 2) begin
              if (i%factor == 0) begin
                  tmp_cache_mem = mem_data_out[i/factor][15:0];
              end
              if (i%factor == 1) begin
                  tmp_cache_mem = mem_data_out[i/factor][31:16];
              end
              bin_data = tmp_cache_mem;
              write_binary_data_out(fp,bin_data,16);
          end
          if (factor == 1) begin
              bin_data = mem_data_out[i];
              write_binary_data_out(fp,bin_data,8);
          end
      end 
      if (factor == 4) begin
          if ((data_out_DEPTH - 1) % factor == 2) begin
              bin_data = mem_data_out[data_out_DEPTH / factor][7:0];
              write_binary_data_out(fp,bin_data,8);
              bin_data = mem_data_out[data_out_DEPTH / factor][15:8];
              write_binary_data_out(fp,bin_data,8);
              bin_data = mem_data_out[data_out_DEPTH / factor][23:16];
              write_binary_data_out(fp,bin_data,8);
          end
          if ((data_out_DEPTH - 1) % factor == 1) begin
              bin_data = mem_data_out[data_out_DEPTH / factor][7:0];
              write_binary_data_out(fp,bin_data,8);
              bin_data = mem_data_out[data_out_DEPTH / factor][15:8];
              write_binary_data_out(fp,bin_data,8);
          end
          if ((data_out_DEPTH - 1) % factor == 0) begin
              bin_data = mem_data_out[data_out_DEPTH / factor][7:0];
              write_binary_data_out(fp,bin_data,8);
          end
      end
      if (factor == 2) begin
          if ((data_out_DEPTH - 1) % factor == 0) begin
              bin_data = mem_data_out[data_out_DEPTH / factor][15:0];
              write_binary_data_out(fp,bin_data,16);
          end
      end
      transaction_idx = transaction_idx + 1;
      $fclose(fp); 
      while (TRAN_CRTLS_start_in !== 1) begin
          @(posedge clk);
      end
  end 
end 
 
endmodule
