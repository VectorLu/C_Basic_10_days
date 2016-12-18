/*
 <<
 左移 n 位，高位左移后溢出，舍弃
 不溢出时，相当于乘以 2 的 n 次方

 >> 
 对于无符号数，右移时左边高位移入零。
 对于有符号数，若原来符号位为 0，则移入 0，
 如果原来符号位为 1（负数），移入 0 还是 1 
 取决于计算机系统。
*/

#include <stdio.h>

int main()
{
    unsigned a, b, c, d;
    int n;
    a = 64;
    n = 2;

    // 将操作数 a 右移 (6-n) 位
    b = a >> (6-n);
    printf("b = %d\n", b);

    // 将操作数 a 左移 n 位
    c = a << n;
    printf("c = %d\n", c);

    d = (a>>(n-1) | (a << (n+1)));
    printf("d = %d\n", d);
    return 0;
}
