//3-8译码器
module  decoder3to8( 
    input [2:0] in,  //in[2]最高位 ， in[0]最低位
    output [7:0] out
);
//括号内部是模块的所有输入和输出信号

assign out[0] = (in == 3'd0);
assign out[1] = (in == 3'd1);
assign out[2] = (in == 3'd2);
assign out[3] = (in == 3'd3);
assign out[4] = (in == 3'd4);
assign out[5] = (in == 3'd5);
assign out[6] = (in == 3'd6);
assign out[7] = (in == 3'd7);
endmodule