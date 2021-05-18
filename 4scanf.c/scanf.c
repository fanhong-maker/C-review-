//本代码通过买菜的案例展示stdio中的scanf函数的用法
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PRICE 3
int main(void)
{
        float weight;
        float sum;
        printf("请输入重量：\n");
        scanf("%f", &weight);    //scanf函数中默认带有\n
        //printf("%d\n", weight);
        sum = PRICE * weight;
        printf("总价为：%.2f\n", sum);
        return 0;
}