/*
直接调用 f1() 调用 f1()
间接调用 f1() 调用 f2()，f2() 调用 f1()
*/
// 递归法将整数转换为字符
#include <stdio.h>

/*
充分应用了递归的特性
*/
void i2ch(int n)
{
    int i;
    if ((i=n/10) != 0)
    {
        i2ch(i);
    }
    putchar(n%10 + '0');
}

int main()
{
    int number;
    printf("输入整数：");
    scanf("%d", &number);
    printf("输出是：");
    if (number < 0)
    {
        putchar('-');
        number = - number;
    }
    i2ch(number);
    putchar('\n');
    return 0;
}

