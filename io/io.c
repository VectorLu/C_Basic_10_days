#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // 行的输入／输出
    // 输出后，自动添加一个换行符
    puts("Hi!");

    // 更加通用的版本
    // 不会自动写入换行符
    FILE *fp;
    fp = fopen("hello.txt", "a");
    if (fp == NULL)
    {
        printf("Can't open the file.");
        exit(0);
    }
    else
    {
        fputs("Hi, fputs!\n", fp);
        fclose(fp);
    }

    return 0;
}