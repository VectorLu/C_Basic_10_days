/*
sin(x) = x - x^3/3! + x^5/5! -... 
*/

#include <stdio.h>
#include <math.h>

int main()
{
    // 用 s 表示多项式的值，用 t 表示每一项的值
    double s, t, x;
    int n;
    printf("Please input x: ");
    scanf("%lf", &x);

    // 赋初值
    t = x;
    n = 1;
    s = x;

    // 进行叠加运算
    do 
    {
        n += 2;
        t = t * (-x*x)/((float)(n-1))/(float)(n);
        s += t;
    }while(fabs(t) >= 1e-8);
    printf("sin(%lf) = %lf\n", x, s);
    return 0;
}