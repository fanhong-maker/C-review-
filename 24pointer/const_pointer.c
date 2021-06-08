//本代码用于学习用const修饰的指针
#include<stdio.h>

int main(void)
{
        int a = 10;
        int b = 20;
        int c = 30;
        printf("&a = %p\n",&a);
        a = 50;
        printf("&a = %p\n",&a);
        //const修饰指针类型：可修改指针变量的值，不可修改指针指向内存空间的值。
        const int* p1 = &a;
        p1 = &b;
        printf("*p1 = %d\n", *p1);

        //const修饰指针变量：可修改指针指向内存空间的值，不可修改指针变量的值。
        int* const p2 = &a;
        *p2 = c;
        printf("a = %d\n",a);

        //const修饰指针类型和指针变量：不可修改指针变量的值，不可修改指针指向内存空间的值。又称只读指针
        //但可用二级指针修改
        const int* const p3 = &a;
        printf("a = %d\n",*p3);
        return 0;
}