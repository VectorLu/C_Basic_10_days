#include <stdio.h>
// 定义外部函数 multiply()
extern int multiply(int a, int b)
{
    int c;
    c = a * b;
    return c;   // 返回参数的乘积
}