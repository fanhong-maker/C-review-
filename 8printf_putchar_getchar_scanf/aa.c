#include <stdio.h>

int main()
{
        int a1 = 10,a2 = 3;
        float b1 = 10, b2 = 3;
        float a3;
        char a[] = "i love you";
        char b[10];
        char ch = 'd';
        printf("输出字符串为：%s\n",a);
        putchar(ch);
        putchar('\n');
        scanf("%s",&b);
        printf(b);
        a3 = a1/a2;     //整型变量和整型变量相除得到的依然是整型变量
        printf("a1/a2 = %d",a3);
        printf("b1/b2 = %f",b1/b2);     //浮点型和整形得到浮点型（双精度）
}