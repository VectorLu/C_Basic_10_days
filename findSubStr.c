#include <stdio.h>

int findSubStr(char *s1, char *s2);

int main()
{
    // 一个简单的检测函数
    if (findSubStr("C is fun", "is") != -1)
    {
        printf("Substring is found.\n");
    }

    return 0;
}

int findSubStr(char *s1, char *s2)
{
    register int t;
    char *p, *p2;

    for (t=0; s1[t]; t++)
    {
        p = &s1[t];
        p2 = s2;

        while (*p2 && *p2==*p)
        {
            p++;
            p2++;
        }

        if (! *p2)
        {return t;}
    }

    return -1;
}