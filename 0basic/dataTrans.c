/*
 当混合不同类型的变量进行计算时，便可能会发生类型转换。

 相同类型的数据在转换时：
 1. 字符类型数据和整数数据之间可以通用
 2. float 型数据在运算时一律转换为 double 型，以提高运算精度

 不同类型的数据在转换时：

*/

#include <stdio.h>

int main()
{
    // 定义变量并赋初值

    int anInteger = 5;
    char aChar = 'a';
    float aFloat = 5.3;
    double aDouble = 12.65;
    double result;

    // 同类型数据间进行运算并输出结果

    printf("anInteger + aChar = %d\n", anInteger + aChar);
    printf("anIntefer + aChar = %c\n", anInteger + aChar);
    printf("aFloat + aDouble = %f\n", aFloat + aDouble);

    // 不同类型数据间进行运算并输出结果

    printf("anInteger + aDouble = %f\n", anInteger + aDouble);
    printf("aChar + aFloat = %f\n", aChar + aFloat);

    // 将上述四个变量进行混合运算，并输出结果
    result = anInteger + aChar * (aFloat + aDouble);
    printf("double = %f\n", result);
    return 0;
}