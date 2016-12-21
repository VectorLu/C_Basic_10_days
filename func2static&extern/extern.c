/*
根据函数是否能被其他的源文件调用，
可以将函数分为内部函数和外部函数

在定义内部函数时，在函数名和函数类型的前面加 static，例如：
static int function(int x, int y);

使用内部函数，可以使函数只局限于所在文件，如果在
不同的文件中有同名的内部函数，它们互不干扰。

通常把只由同一文件使用的函数和外部变量放在一个文件中，
冠以 static 使之局部化，其他文件不能使用。

在定义函数时冠以关键词 extern，则表明此函数是外部函数。如：
extern int function(int x, int y)
函数 function 可以为其他的文件调用，如果在定义函数时可省略 extern，
默认为外部函数。但是在需要调用该函数的文件中，需要用 extern 来说明
所用函数是外部函数。

本例完全可以用内部函数完成，只是借助这个简单的例子帮助了解
外部函数应该怎样使用。
*/

#include <stdio.h>
int main()
{
    // 必须用 extern 显式声明本文件中将要使用其他文件中定义的函数
    extern int multiply();
    extern int sum();

    int a, b;
    int result;
    printf("Please input a and b: ");
    scanf("%d %d", &a, &b);

    // 调用外部函数 multiply 求解 a 和 b 的乘积
    result = multiply(a, b);    
    printf("The result of multiply is: %d", result);
    result = sum(a, b);
    // 调用外部函数 sum 求解 a 和 b 的和
    printf("\nThe result of sum is: %d\n", result);
    return 0;
}