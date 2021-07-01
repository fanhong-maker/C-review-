#include<stdio.h>

void swap1(int a, int b)
{
        int temp = a;
        a = b;
        b = temp;
}
void swap2(int* a, int* b)
{
        int temp = *a;
        *a = *b;
        *b = temp;
}
int main08(void)
{
        int a = 10;
        int b = 20;
        //变量值传递，形参不影响实参的值
        swap1(a,b);
        printf("a = %d\n",a);
        printf("b = %d\n",b);
        //地址传递，形参可以改变实参的值 
        swap2(&a,&b);
        printf("a = %d\n",a);
        printf("b = %d\n",b);
        return 0;
}