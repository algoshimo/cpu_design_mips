#include "Vencoder8to3.h"      // Verilator 生成的头文件
#include "verilated.h"         // Verilator 核心头文件

void print_b(int x,int num)
{
    int ans[num];
    for(int i=0;i<num;i++)
    {
        ans[i] = x&1;
        if(x) x>>=1;
    }
    for(int i=num-1;i>=0;i--) printf("%d",ans[i]);
}
int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);   // 初始化 Verilator

    // 创建 Verilog 模块实例
    Vencoder8to3* decoder = new Vencoder8to3;

    // 测试不同的输入值
    for (int i = 0; i < 8; i++) {
        int res = 1;
        for(int j=0;j<i;j++) res*=2;
        decoder->in = res;        // 设置输入值
        decoder->eval();        // 计算输出
        printf("Input = ");
        print_b(res,8);
        printf(" Output = ");
        print_b(decoder->out,3);
        printf("\n");
    }

    // 释放资源
    delete decoder;
    return 0;
}
