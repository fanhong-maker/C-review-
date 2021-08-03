//一般定义的函数默认为全局函数，可在整个项目中使用，未调用时存储在代码区，调用时储存在栈区
//静态函数：如，static void funcation(pram1,pram2){}，
//作用域：只可在定义的文件内使用，存储在代码区
//生命周期：程序开始到程序结束（与全局函数的生命周期相同）
//静态函数可以和全局函数重名，采用就近原则
#include <stdio.h>
static void fun()
{
        printf("hello world");
}
int main()
{
        fun();
        return 0;
}
