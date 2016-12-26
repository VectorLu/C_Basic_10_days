/*
标准库函数 exit() 终止程序的执行
当函数中出现 exit() 时，该函数会立即结束程序
强制返回操作系统

输入月数，打印非闰年的该月有几天

exit() 函数的一般形式为：
void exit(int return_code);
0 值一般表示正常结束
非 0 值则表示某种错误
该函数包含在头文件 <stdlib.h> 中
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 定义变量 month 和 day 存放月数和天数
    int month;
    int day;

    printf("Please input the month number: ");
    scanf("%d", &month);
    switch (month)
    {
        case 1:
        case 3: 
        case 5: 
        case 7:
        case 8: 
        case 10: 
        case 12: 
            day = 31;
            break;

        case 4: 
        case 6:
        case 9:
        case 11: 
            day = 30;
            break;
        
        case 2: 
            day = 28;
            break;

        // 如果读者输入的数字不是 1-12，则会跳出程序
        default:
            exit(0);
            break;
    }
    printf("\n %d month has %d days\n", month, day);
    return 0;
}


