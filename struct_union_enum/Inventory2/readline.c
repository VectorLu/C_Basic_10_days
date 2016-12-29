//
//  readline.c
//  inventory
//
//  Created by rooooooot on 12/28/16.
//  Copyright © 2016 VectorLu. All rights reserved.
//

#include <ctype.h>
#include <stdio.h>
#include "readline.h"

int vl_read_line(char str[], int n)
{
    int ch, i = 0;
    
    // 在开始往字符串中存储字符的时候跳过空字符
    while(isspace(ch = getchar())){;}
    
    while(ch!='\n' && ch!=EOF)
    {
        if (i < n){str[i++] = ch;}
        ch = getchar();
    }
    // str 中最多有 n+1 个元素
    str[i] = '\0';
    return i;
}
