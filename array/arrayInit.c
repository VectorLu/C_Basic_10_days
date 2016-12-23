#include <stdio.h>

int main()
{
    // 整形数组的初始化
    int arrayInt[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // 如果初始化式比数组短，那么数组中剩余的元素赋值为 0
    int a[10] = {1, 2, 3, 4};
    // initial value of a is {1, 2, 3, 4, 0, 0, 0, 0, 0, 0}

    // 利用这一特性，可以很容易地把数组初始化为全 0
    // 初始化式完全为空是非法的，所以要在大括号中放上一个 0
    int arrayLazy[10] = {0};
    int i; 
    int mix[10] = {5, 1, 9, [4] = 3, 7, 2, [8] = 6};

    // 字符型数组的初始化
    // 无尺寸数组，C 自动完成计算数组大小的工作
    char arrayChar1[] = "How are you?";
    char arrayChar2[13] = "How are you?";
    char arrayChar3[13] = {'H', 'o', 'w',
    ' ', 'a', 'r', 'e', ' ', 'y', 'o', 'u', '!', '\0'};

    int array2D[4][4] = {
        {12, 18, 6, 25},
        {23, 10, 32, 16},
        {25, 63, 1, 63},
        {0, 0, 27, 98}
    };

    // 对于二维无尺寸数组的初始化，
    // 数组第二个下标的尺寸是必须给出的
    int array2Dx6[][2] = {
        {1, 50},
        {45, 2},
        {2, 0},
        {12, 32},
        {42, 33},
        {15, 18}
    };

    for (i = 0; i < 10; i++)
    {
        printf("%d ", arrayLazy[i]);
    }
    printf("\n");
    
    for (i = 0; i < 10; i++)
    {
        printf("%d ", mix[i]);
    }
    printf("\n");

    return 0;
}