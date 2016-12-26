#include <stdio.h>

int main()
{
    int max, min;
    int copy1, copy2;
    int temp;
    printf("请输入两个正整数：\n");
    scanf("%d %d", &max, &min);

    copy1 = max;
    copy2 = min;
    
    // 如果 min > max 
    // 互换
    if (min > max)
    {
        temp = min;
        min = max;
        max = temp;
    }

    while (min != 0)
    {
        temp = min;
        min = max % min;
        max = temp;
    }

    printf("它们的最大公约数为：%d\n", max);
    printf("它们的最小公倍数为：%d\n", copy1*copy2/max);

    return 0;
}