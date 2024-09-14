module regfile(
    input elk,                  // 时钟信号
    input [4:0] raddr1,          // 读取端口1的地址（5位）
    output [31:0] rdata1,        // 读取端口1的数据（32位）
    input [4:0] raddr2,          // 读取端口2的地址（5位）
    output [31:0] rdata2,        // 读取端口2的数据（32位）
    input we,                    // 写使能信号
    input [4:0] waddr,           // 写入的地址（5位）
    input [31:0] wdata           // 写入的数据（32位）
);

reg [31:0] reg_array[31:0];

//write
always @ (posedge clk) begin
    if(we) reg_array[waddr] <= wdata; //在时钟上升沿之后，wdata 会被写入 reg_array[waddr] 对应的寄存器
end

//read out1
assign rdata1 = (raddr1 == 5'b0) ? 32'b0 : reg_array[raddr1];
//read out2
assign rdata2 = (raddr2 == 5'b0) ? 32'b0 : reg_array[raddr2];

endmodule