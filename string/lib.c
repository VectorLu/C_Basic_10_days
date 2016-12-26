#include <stdlib.h>
#include <stdio.h>
size_t vlStrLen(const char *s);
char *vlStrCat(char *s1, const char *s2);
int vlStrCmp(const char *s1, const char *s2);

size_t vlStrLen(const char *s)
{
    const char *p = s;
    while (*p++)
    {;}
    return (p-s);
}

char *vlStrCat(char *s1, const char *s2)
{
    char *p = s1;
    while(*p != '\0')
    {p++;}

    // use the side effect of =
    while(*p++ = *s2++)
    {;}

    return s1;
}

int vlStrCmp(const char *s1, const char *s2)
{
    int i = 0;
    for (; s1[i]==s2[i]; i++)
    {
        if (s1[i] == '\0')
        {return 0;}
    }
    return (s1[i] - s2[i]);
}