//本案例通过学生成绩评级来学习switch(表达式){case 常量表达式：语句1; default:语句n;}
/*先计算表达式的值，再逐个和 case 后的常量表达式比较，若不等则继续往下比较，若一直不等，
则执行 default 后的语句；若等于某一个常量表达式，则从这个表达式后的语句开始执行，
并执行后面所有 case 后的语句。与 if 语句的不同：if 语句中若判断为真则只执行这个判断后的语句，
执行完就跳出 if 语句，不会执行其他 if 语句；而 switch 语句不会在执行判断为真后的语句之后跳出循环，
而是继续执行后面所有 case 后的语句。在每一 case 语句之后增加 break 语句，使每一次执行之后均可跳出 switch 语句，
从而避免输出不应有的结果*/
#include <stdio.h>

int main(void)
{
        int score;
        printf("请输入您的成绩：\n");
        scanf("%d",&score);
        switch (score/10)
        {
                case 10:printf("成绩为优秀！\n");
                break;
                case 9:printf("成绩为优秀！\n");
                break;
                case 8:printf("成绩为良好！\n");
                break;
                case 6:printf("成绩为及格！\n");
                break;
                default:printf("成绩不及格!\n");
        }
        return 0;
}