/*
二维数组定义的一般形式
type-specifier var_name[size][size];
eg.
int array[5][10]
第一个下标代表行，第二个下标代表列。
这意味着按照物理存储顺序访问数组元素时，
右边的下标比左边的下标的变化快一些。

奇数魔方阵的排列规律：
1. 将 1 放在第一行中间的一列；
2. 从 2 开始直到 n*n 为止，各数依次按照下列规则存放；
每个数字存放的行比前一个数的行数减一，列数加一；
3. 如果上一个数的行数为 1，则下一个数的行数为 n (即最下一行)
4. 当上一个数的列数为 n 时，则下一个数的行数为 1
5. 如果按照上面的规则确定的位置上已经有数，或者上一个数是第 1 行第 n 列时，
则把下一个数放在上一个数下面。

本例从第 1 行，第 1 列开始存放数，最大阶数为 15
*/

#include <stdio.h>

int main()
{
    int array[16][16];
    int i, j, k, m, n;

    // 变量初始化
    m = 1;
    while(m == 1)
    {
        printf("请输入 n(0<n<=15，n 是奇数)\n");
        scanf("%d", &n);
        // 判断 n 是否为大于 0 小于 15 的奇数
        if((n>0) && (n<=15) && (n%2!=0))
        {
            printf("矩阵阶数是 %d\n", n);
            m = 0;
        }
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            array[i][j] = 0;
        }
    }

    // 建立魔方阵
    j = n/2 + 1;
    array[1][j] = 1;
    for (k = 2; k <= n*n; k++)
    {
        i = i - 1;      // 行数减少 1
        j = j + 1;      // 列数增加 1
        if ((i<1) && (j>n))
        {
            i += 2;     // 行数减少 2
            j--;        // 列数减少 1
        }
        else
        {
            if (i < 1)  // 如果行数小于 1，则跳转到第 n 行
            {
                i = n;
            }
            if (j > n)  // 如果列数大于 n，则到第 1 列
            {
                j = 1;
            }
        }
        if (array[i][j] == 0)
        {
            array[i][j] = k;
        }
        else
        {
            i +=2; 
            j--;
            array[i][j] = k;
        }
    }

    // 输出魔方阵
    for (i = 1; i <= n; i++)
    {
       for(j = 1; j <= n; j++)
       {
           printf("%5d", array[i][j]);
       }
       printf("\n");
    }    
}

