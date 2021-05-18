//本代码主要展示单精度浮点型和双精度浮点型的性质与区别
#include <stdio.h>

int main(void)
{
        //整型数据由符号位和数值位组成
        //浮点型由符号位，指数位，小数位组成
        int a = 2;
        //传统的赋值方式
        float b = 3.f;
        double c = 8;
        printf("%d\n",a);
        printf("%f\n",b);
        printf("%lf\n",c);
        printf("%d\n",sizeof(a));
        printf("%d\n",sizeof(b));
        printf("%d\n",sizeof(c));
        //%p是一个占位符，表示输出一个变量对应的内存编号（无符号十六进制整型数表示）
        printf("%p\n",a);
        printf("%p\n",b);
        printf("%p\n",c);
        //科学赋值方式
        float d = 3.4e2;
        float e = 3.8e-2;
        printf("%f\n",d);
        printf("%f\n",e);
        //%e是一个占位符，表示以科学计数法打印
        printf("%.2e\n",d);
        printf("%.2e\n",e);
}