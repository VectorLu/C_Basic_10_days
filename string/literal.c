#include <stdio.h>
// 把字符串当作数组的操作
char digit_to_hex_char(int digit)
{
    // 把 0-15 的数转换成等价的 16 进制数
    return "012345689ABCDEF"[digit];
}
int main(void)
{
    /*
     * 字符串拼接
     * 当两个或更多个字符串相邻时
     * 仅用空白字符分割（不用逗号）
     * 编译器会把它们合并成一个字符串
     * 执行结果：
     * When you come to a fork in the road, take it. --Yogi Berra
     */
    printf("When you come to a fork in the road, "
    "take it. " "--Yogi Berra\n");
    printf("%c\n", digit_to_hex_char(12));
    
    return 0;
}
