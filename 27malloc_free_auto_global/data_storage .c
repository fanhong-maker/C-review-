//本代码分别打印各种数据的地址，根据地址学习数据存储区域
#include<stdio.h>
//未初始化的全局变量
int a1;
//初始化的全局变量
int a2 = 10;
//未初始化的静态全局变量
static int a3;
//初始化的静态全局变量
static int a4 = 10;
//全局常量
const int a5 = 20;     //安全的常量，不可被修改，储存在数据区的常量区
int main()
{
        //局部变量
        int a6 = 10;
        //未初始化静态局部变量
        int a7 = 80;
        //初始化静态局部变量
        static int a8 = 80;
        //局部常量
        const int a9 = 100;  //不安全的常量，可被指针修改
        //常量指针
        char*p1 = "hello";   //安全的常量，不可被修改，储存在数据区的常量区
        //数组
        int arr[] = {0,1,2};
        //指针变量
        int* p2 = arr;

        printf("未初始化的全局变量:%p\n",&a1);
        printf("初始化的全局变量:%p\n",&a2);
        printf("未初始化的静态全局变量:%p\n",&a3);
        printf("初始化的静态全局变量:%p\n",&a4);
        printf("全局常量:%p\n",&a5);
        printf("局部变量:%p\n",&a6);
        printf("未初始化静态局部变量:%p\n",&a7);
        printf("初始化的静态局部变量:%p\n",&a8);
        printf("局部常量:%p\n",&a9);
        printf("指针常量:%p\n",p1);
        printf("数组:%p\n",&a8);
        printf("指针变量:%p\n",&p2);

        return 0;
}