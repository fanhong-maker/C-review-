//本案例以求解5个学生成绩的总分数，各科的总分数、平均分数为例来学习二维数组
#include<stdio.h>
#define R 5
#define C 3
int main(void)
{
        //二维数组定义：数据类型 数组名[行][列];
        //三维数组定义：数据类型 数组名[层][行][列];
        //int arr[5][3] = {{60,89,78},{90,80,88},{45,50,30},{80,95,98},{100,98,99}};
        //int arr[][3] = {{60,89,78},{90,80,88},{45,50,30},{80,95,98},{100,98,99}};
        int arr[R][C];
        int sum1 = 0, sum11 = 0;
        float average1, average11;
        for (int i = 0; i < 5; i++)
        {
                printf("请输入第%d个学生的成绩：\n", i+1);
                for (int j = 0; j < 3; j++)
                {
                        scanf("%d", &arr[i][j]);
                }
        }
        for (int i = 0; i < 5; i++)
        {
                for (int j = 0; j < 3; j++)
                {
                        sum1 = sum1+arr[i][j];
                        average1 = sum1/3;
                }
                printf("第%d个学生的总成绩：%d\t平均成绩：%.2f\n", i+1 , sum1 , average1);
                sum1 = 0;
                average1 =0;
        }
        for (int m = 0; m < 3; m++)
        {
                for(int n = 0; n < 5; n++)
                {
                        sum11 = sum11+arr[n][m];
                        average11 = sum11/5;
                }
                printf("第%d科的总成绩：%d\t平均成绩：%.2f\n", m+1 , sum11 , average11);
                sum11 = 0;
                average11 = 0;
        }
        printf("%d\n",sizeof(char));
        return 0;
}