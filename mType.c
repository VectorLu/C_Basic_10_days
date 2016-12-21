/*
存储类型，从变量值存在的时间角度来划分：
静态存储变量
动态存储变量
*/

// 给出年、月、日，计算该日是该
// 该年的第几天
#include <stdio.h>
int sum_day(int month, int day);
int leap(int year);
int main()
{
    int year, month, day;
    int days;
    printf("请输入日期（年，月，日）：");
    scanf("%d %d %d", & year, &month, &day);
    printf("%d 年 %d 月 %d 日", year, month, day);
    days = sum_day(month, day);
    if (leap(year) && month >= 3)
    {days++;}
    printf("是该年的第 %d 天.\n", days);

    return 0;
}

static int day_tab[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 
30, 31, 30, 31};

int sum_day(int month, int day)
{
    int i;
    
    for (i = 1; i < month; i++)
    {
        day += day_tab[i];
    }
    return day;
}

int leap(int year)
{
    int leap;
    leap = (year%4==0 && year%100!=0) || (year%400==0);
    return leap;
}