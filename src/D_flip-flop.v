//D触发器

module dff (
    input clk,
    input din,
    output reg q //存储数据的变量类型
);

//当时钟上升沿发生时，执行这个块中的代码
always @(posedge clk) begin
    q <= din; //将din的值赋给输出q,在下一个时钟周期结束时更新q的值
end

endmodule