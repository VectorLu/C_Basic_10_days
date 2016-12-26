/*
 * 存储字符串的最佳方式是什么？
 */

#include <stdio.h>

char planets2D[][8] = {
    "Mercury", "Venus", "Earth",
    "Mars", "Jupiter", "Saturn",
    "Uranus", "Neptune", "Pluto"
};

// 参差不齐的字符串数组
// 字符串中不再浪费任何字符
// [] 的优先级比 * 高
char *planetsPtr[] = {
    "Mercury", "Venus", "Earth",
    "Mars", "Jupiter", "Saturn",
    "Uranus", "Neptune", "Pluto"
};

int main(int argc, char *argv[])
{
    int i = 0;
    for (; i < 9; i++)
    {
        if (planetsPtr[i][0] == 'M')
        {
            printf("%s begins with M\n", planetsPtr[i]);
        }
    }

    for (i = 1; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    char **strPP;
    for (strPP = &argv[1]; *strPP != NULL; strPP++)
    {
        printf("%s\n", *strPP);
    }

    return 0;
}



