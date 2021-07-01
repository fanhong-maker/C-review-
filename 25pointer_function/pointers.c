#include<stdio.h>
int main06(void)
{
        int a = 10;
        printf("%p\n",&a);
        a = 20;
        //和python中的变量不同，在这里定义一个变量a后，若对a的值进行改变，其实是在原来的内存地址中将10改为20；
        //而在python中，变量赋值 a=5 后再赋值 a=10，这里实际是新生成一个 int 值对象 10，再让 a 指向它，
        //而 5 被丢弃，不是改变 a 的值，相当于新生成了 a。
        //但python中的变量和c中的一样，不可通过传到子函数进行更改，在子函数中的值改变了，主函数中的变量值任然不变
        printf("%p\n",&a);      
        int b = 20;
        int* p = &a;
        int** pp = &p;
        int*** ppp = &pp;
        //*ppp==pp==&p
        printf("a = %d\n",a);
        printf("b = %d\n",b);
        *pp = &b;       //改变一级指针变量的值为&b
        **pp = 100;     //将p指针指向的变量的值改为100(这里指向的变量已变为b)
        printf("a = %d\n",a);
        printf("b = %d\n",b);
        
        return 0;
}