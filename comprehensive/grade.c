#include <stdio.h>

#define COR_NUM 5
#define STU_NUM 10

float score[STU_NUM][COR_NUM];
float a_stu[COR_NUM], a_cor[STU_NUM];

void input_stu();
void avr_stu();
void avr_cor();
float highest(int *r, int *c);
float s_diff();

int main()
{
    int i, j, r, c;
    float h;
    r = 0;
    c = 1;
    input_stu();
    avr_stu();
    avr_cor();
    printf("\n 序号   课程1    课程2    课程3    课程4    课程5    平均分");
    for (i = 0; i < STU_NUM; i++)
    {
        printf("\n NO%2d", i+1);
        for (j = 0; j < COR_NUM; j++)
        {
            printf("%8.2f")
        }
    }
    return 0;
}