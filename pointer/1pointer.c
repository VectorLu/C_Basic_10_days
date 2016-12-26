// 输入 x, y 和 z 三个整数，按大小顺序输出

#include <stdio.h>

void swap(int *pt1, int *pt2);
void exchange(int *q1, int *q2, int *q3);

int main()
{
    int x, y, z, *p1, *p2, *p3;
    printf("请输入三个整数：");
    scanf("%d %d %d", &x, &y, &z);
    p1 = &x; p2 = &y; p3 = &z;
    exchange(p1, p2, p3);
    printf("按大小排序后的三个整数位：");
    printf("%d %d %d\n", x, y, z);

    return 0;
}

void swap(int *pt1, int *pt2)
{
    int p;
    p = *pt1; *pt1 = *pt2; *pt2 = p;
}

void exchange(int *q1, int *q2, int *q3)
{
    if (*q1 < *q2){swap(q1, q2);}
    if (*q1 < *q3){swap(q1, q3);}
    if (*q2 < *q3){swap(q2, q3);}
}
