//万能指针的学习

#include<stdio.h>
int main03(void)
{
        //万能指针可以接收任意类型变量的内存地址，
        //但不可以通过万能指针改变变量的值，而需要找到对应的指针类型
        int a = 10;
        void* p = &a;
        *(int*)p = 100;
        printf("万能指针占用的内存字节大小：%d\n",sizeof(void*));
        printf("*p的内存地址：%p\n",p);
        printf("a的值：%d\n",*(int*)p);
        return 0;
}