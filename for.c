/*
for(expression1, expression2, expression3)
{
    // 循环体
}

expression1: 循环控制变量的初始化；
expression2: 关系表达式或逻辑表达式，循环控制条件；
expression3: 赋值表达式，改变循环控制变量
*/

// 画菱形
#include <stdio.h>
int main()
{
    int i, j, k;

    // row 0-4
    for (i = 0; i <= 4; i++)
    {
        // 4 - i space
        for (j = 0; j <= 3-i; j++)
        {
            printf(" ");
        }

        // 2i + 1 "*"
        for (k = 0; k <= 2*i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    //row 5-8
    for (i = 0; i <= 3; i++)
    {
        // i space
        for (j = 0; j <= i; j++)
        {
            printf(" ");
        }

        // 7 - 2i "*"
        for (k = 0; k <= 6-2*i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    //
    return 0;
}