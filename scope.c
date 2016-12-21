/*
切记，全局变量和局部变量同名时（特别是和形式参数重名时，这种
错误非常隐蔽）全局变量会被局部变量屏蔽
*/

#include <stdio.h>

int count;  // count 是全局变量
void func1();   // 函数声明
void func2();

int main()
{
    count = 100;
    func1();
    
    return 0;
}

void func1()
{
    int temp;      // temp 是局部变量
    temp = count;
    func2();
    printf("    count is %d\n", count); 
    func2();
}

void func2()
{
    int count;      // 定义局部变量 count 
    for (count = 1; count <= 20; count++)
    {
        printf(".");    // 打印出 "."
    }
    printf("\n");
}