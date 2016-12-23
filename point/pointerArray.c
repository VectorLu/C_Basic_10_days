/*
在一个已排好序的字符串数组中，
插入一个键盘输入的字符串，
使其继续保持有序。

使用指针数组是因为它适合于指向若干个字符串，
使字符串的处理更加方便。
一个数组，其元素均为指针类型数据，称为指针数组。
定义一个含有 10 个 char 类型指针的数组
char *(point[10]);
由于 [] 的优先级比 * 高，所以定义可以写成：
char *point[10];

注意于指向一维数组的指针变量相区分： 
char (*arrayPointer)[10]
*/

#include <stdio.h>
#include <string.h>
#include <stdio.h>

int main()
{
    int binary(char *ptr[], char *str, int n);
    void insert(char *ptr[], char *str, int n, int i);
    
    char *temp, *ptr1[6];
    int i;
    printf("请为字符形指针数组赋初值：\n");
    for (i = 0; i < 5; i++)
    {
        ptr1[i] = (char *)malloc(20);   // 为指针分配地址后
         
    }
    printf("Original string:\n");
    return 0;
}