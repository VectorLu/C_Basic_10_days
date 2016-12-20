// 矩阵的转置
#include <stdio.h>
#define N 3

// 转置函数声明
void convert(int element[N][N]);

int main()
{
    // 定义一个二维数组
    int matrix[N][N];
    int i, j;

    // 给数组赋初值
    printf("输入数组元素：\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%5d", &matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n原数组是：\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }

    // 对数组进行转置
    convert(matrix);
    printf("转置数组是：\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// 转置函数定义
void convert(int element[N][N])
{
    int i, j, t;
    for (i = 0; i < N; i++)
    {
        for (j = j+1; j < N; j++)
        {
            t = element[i][j];
            element[i][j] = element[j][i];
            element[j][i] = t;
        }
    }
}