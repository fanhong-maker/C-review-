//递归recursion：在函数内部调用函数本身，递归必须要用结束条件，
#include<stdio.h>
void recursion()
{
        static int i = 0;
        i++;
        printf("%d  ",i);
        while(i==100)return;
        recursion();
}
int factorial1(int num)
{
        int result = 1;
        while(!num)return result;
        result = num*factorial1(num-1);
}
int factorial(int num)
{
        int result;
        if (num > 0)
        {
                result = num * factorial(num - 1);
        }
        else
        {
                result = 1;
        }
        return result;
}
int main(void)
{
        int result = 0;
        int num = 3;
        //recursion();
        result = factorial1(num);
        printf("%d的阶乘是%d\n",num,result);
        return 0;
}
