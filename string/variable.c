#include <stdio.h>
// 惯用的字符串声明方法
#define STR_LEN 80
char str[STR_LEN+1];
int main(void)
{
    /*
    * 下面是两种相似的声明，均可作为字符串
    * 但是两者不能互换
    * 1. 声明为数组时，就像任意数组中的元素，可以修改 dateArray 中
    *    的字符，dateArray 是数组名。
    * 2. 声明为指针时，datePtr 指向字符串字面量，
    * 	 字符串字面量是不可以修改的，datePtr 是变量，
    * 	 可以在程序执行期间指向其他字符串。
    * 如果希望可以修改字符串，那么就要建立字符数组来存储字符串
    */
    char dateArray[] = "June 14";
    char *datePtr = "June 14";

    return 0;
}