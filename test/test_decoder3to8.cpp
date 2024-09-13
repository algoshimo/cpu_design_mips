#include "Vdecoder3to8.h"      // Verilator 生成的头文件
#include "verilated.h"         // Verilator 核心头文件

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);   // 初始化 Verilator

    // 创建 Verilog 模块实例
    Vdecoder3to8* decoder = new Vdecoder3to8;

    // 测试不同的输入值
    for (int i = 0; i < 8; i++) {
        decoder->in = i;        // 设置输入值
        decoder->eval();        // 计算输出
        printf("Input = %d, Output = %02x\n", i, decoder->out);
    }

    // 释放资源
    delete decoder;
    return 0;
}
