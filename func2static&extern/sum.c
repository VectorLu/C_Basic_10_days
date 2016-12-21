#include <stdio.h>
// 定义外部函数 sum()
extern int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;   // 返回参数的乘积
}