/*

*/
#include <stdio.h>

#define COR_NUM 5
#define STU_NUM 10

float score[STU_NUM][COR_NUM];
float a_stu[COR_NUM], a_cor[STU_NUM];

void input_stu();
void avr_stu();
void avr_cor();
float highest(int *f_stu_no, int *f_cor_no);
float s_diff();

int main()
{
    int i, j, stu_no, cor_no;
    float h;
    stu_no = 0;
    cor_no = 1;
    input_stu();
    avr_stu();
    avr_cor();
    printf("\n 序号   课程1    课程2    课程3    课程4    课程5    平均分");
    for (i = 0; i < STU_NUM; i++)
    {
        printf("\n NO%2d", i+1);
        for (j = 0; j < COR_NUM; j++)
        {
            printf("%8.2f", score[i][j]);
        }
        printf("%8.2f", a_stu[i]);
    }
    printf("\n 课平均");
    for (j = 0; j < COR_NUM; j++)
    {
        printf("%8.2f", a_cor[j]);
    }
    h = highest(&stu_no, &cor_no);
    printf("\n\n最高分 %8.2f 是 %d 号学生的第 %d 门课\n", h, stu_no, cor_no);
    printf("方差 %8.2f\n", s_diff());

    return 0;
}

void input_stu()
{
    int i, j;
    for (i = 0; i < STU_NUM; i++)
    {
        printf("请输入学生%2d 的 5 个成绩：\n", i+1);
        for (j = 0; j < COR_NUM; j++)
        {
            scanf("%f", &score[i][j]);
        }
    }
}

void avr_stu()
{
    int i, j;
    float s;
    for (i = 0; i < STU_NUM; i++)
    {
        s = 0;
        for (j = 0; j < COR_NUM; j++)
        {
            s += score[i][j];
        }
        // 注意这里有隐式类型转换
        a_stu[i] = s/COR_NUM;
    }
}

void avr_cor()
{
    int i, j;
    float s;
    for (j = 0; j < COR_NUM; j++)
    {
        s = 0;
        for (i = 0; i < STU_NUM; i++)
        {
            s += score[i][j];
        }
        // 这里使用了强制类型转换
        a_cor[j] = s/(float)STU_NUM;
    }
}

float highest(int *f_stu_no, int *f_cor_no)
{
    float high;
    int i, j;
    high = score[0][0];
    for(i = 0; i < STU_NUM; i++)
    {
        for (j = 0; j < COR_NUM; j++)
        {
            if (score[i][j] > high)
            {
                high = score[i][j];
                *f_stu_no = i+1;
                *f_cor_no = j+1;
            }
        }
    }
    return high;
}

float s_diff()
{
    int i;
    float sumx, sumxn;
    sumx = 0.0f;
    sumxn = 0.0f;
    for (i = 0; i < STU_NUM; i++)
    {
        sumx += a_stu[i]*a_stu[i];
        sumxn += a_stu[i];
    }
    return (sumx/STU_NUM - (sumxn/STU_NUM)*(sumxn/STU_NUM));
}