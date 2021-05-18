//本代码主要展示int、short、long、longlong这几种整型数据类型的区别及其相对应的输出占位符

#include <stdio.h>

int main(void)
{
        int a = 10;
        short b = 20;
        long c = 30;
        long long d = 40;

        printf("整型变量输出:%d\n",a);          //%d表是一个占位符，表示输出一个整型数值
        printf("整型变量输出:%hd\n",b);         //%hd表是一个占位符，表示输出一个短整型数值
        printf("整型变量输出:%ld\n",c);         //%ld表是一个占位符，表示输出一个长整型数值
        printf("整型变量输出:%lld\n",d);        //%lld表是一个占位符，表示输出一个长长整型数值

        //sizeof关键字不是函数，不需要头文件，其功能是用于计算数据类型在内存中的字节（BYTE）大小
        //sizeof(数据类型) sizeof(变量名)
        printf("整型的占用字节数：%d\n",sizeof(a));
        printf("短整型的占用字节数：%d\n",sizeof(b));
        printf("长整型的占用字节数：%d\n",sizeof(c));
        printf("长长整型的占用字节数：%d\n",sizeof(d));

        return 0;
}