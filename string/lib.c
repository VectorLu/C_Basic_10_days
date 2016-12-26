#include <stdlib.h>
#include <stdio.h>
size_t vlStrLen(const char *s);
char *vlStrCat(char *s1, const char *s2);

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
