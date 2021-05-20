//以比较两数大小案例表述三目运算符的用法，并用三目运算符实现三只小猪称体重
#include <stdio.h>
#define MAX(a,b) a>b?a:b        //宏定义可用于定义常量、表达式、函数
// ?: 三目运算符 表达式1?表达式2:表达式3，如果表达式1为真则取表达式2，否则取表达式3
//比较两个数的大小
int main01(void)
{
        float a,b,c;
        printf("请输入两个数：\n");
        scanf("%f,%f",&a,&b);
        c = a > b ? a : b;
        printf("大的值为：%.2f",c);
        return 0;
}
//三只小猪比体重
int main(void)
{
        int a,b,c,d;
        float a1 = 1.2 ,a2 = -5.3;
        printf("请输入三只小猪的体重：\n");
        scanf("%d,%d,%d",&a,&b,&c);
        d = a>b ? (a>c ? a:c) : (b>c ? b:c);
        printf("最重的体重为：%d\n",d);
        printf("%d\n",MAX(a,b));
        printf("%f",a1+a2);
}
