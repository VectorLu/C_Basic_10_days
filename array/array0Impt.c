// Name: reverse.c
// Purpose: Reverses a series of numbers.

// 宏和数组联合使用非常有效，如果以后要改变数组的大小，
// 只需要编辑 N 的定义并且重新编译程序就可以了，
// 甚至连提示也仍然是正确的。
#include <stdio.h>

#define N 10

int main(void)
{
	int a[N], i;
	
	printf("Enter %d numbers: ", N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("In reverse order:");
	for (i = N-1; i >= 0; i--)
	{ 	
		printf(" %d", a[i]);
	}
	printf("\n");
	
	return 0;
}