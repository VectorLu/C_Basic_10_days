/*
char *gets(char *str);
从 stdin 中读字符串，结果存放在 str 指向的字符数组中
一直堵到新行符或 EOF 为止。
新行符不作为读入串的内容，读入的新行符变成 NULL 值，
由此结束字符串，如果成功，gets() 返回 str；
如失败，返回空指针。
*/
#include <stdio.h>
#define MAX 100
#define LEN 80
static char text[MAX][LEN];

int main()
{
    register int t, i, j;

    for(t = 0; t < MAX; t++)
    {
        printf("%d: ", t);
        // gets() 函数不做越界检查，所以一行不能超过
        // LEN-1 即 79 个字符
        gets(text[t]);
        // 空行退出
        if(!text[t][0]){break;} 
    }

    // 按行，逐个字符输入字符串
    for (i = 0; i < t; i++)
    {
        for (j = 0; text[i][j]; j++)
        {
            putchar(text[i][j]);
        }
        putchar('\n');
    }
    return 0;
}