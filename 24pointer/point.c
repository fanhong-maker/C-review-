//指针
//在内存中的0-255的地址中，为系统占用，不允许访问操作！！
#include <stdio.h>
int main01(void)
{
        //&是取地址符号，是升维的
        //*是取值符号，是降维度的，如取一维指针，则取出来的值为该指针指向地址的数据或变量
        //在定义指针类型时一定要和变量的类型对应上
        int a = 100;
        //指针变量p存储变量a的地址
        int* p = &a;

        printf("a = %d\n",a);
        printf("a的地址为： %p\n",p);
        printf("a的地址为： %p\n",&a);
        printf("*p的地址为：%p\n",&*p);
        printf("*p的值为： %d\n",*p);

        //任何指针类型在内存中的大小为无符号整型，在64位操作系统中为8个字节，在32位操作系统中占4个字节
        printf("地址字节大小： %d\n",sizeof(p));
        printf("指针类型大小： %d\n",sizeof(int*));
        printf("指针类型大小： %d\n",sizeof(float*));
        printf("指针类型大小： %d\n",sizeof(char*));
        //用指针可以间接改变变量的值
        *p = 10;
        printf("a = %d\n",a);
        printf("*p = %d\n",*p);

        return 0;
}