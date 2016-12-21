// 将数组 array 中各个参数按照逆序存放
#include <stdio.h>

void inv(int *x, int n);

int main()
{
    int i;
    int array[10] = {1, 3, 9, 11, 0, 8, 5, 6, 14, 98};
    printf("原始数组是：\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    inv(array, 10);
    printf("按相反次序存放后的数组为：\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

// 没有辅助数组的倒置
void inv(int *x, int n)
{
    int *p, *i, *j;
    int temp;

    // 无论是奇数还是偶数，总是小于该数的一半
    // 因为奇数个元素，中间的元素不用替换
    // 偶数个元素，中间两个元素需要互换
    int m = (n-1)/2;
    i = x; j = x + n - 1; p = x + m;
    for (; i <= p; i++, j--)
    {
        temp = *i;
        *i = *j;
        *j = temp;
    }
}