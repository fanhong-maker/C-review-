#include<stdio.h>
int main(void)
{
       int i = 2;
       int n = 2;
       while(i--)printf("%d  ",i);//while(i--)先判断在减减，相当于循环了10次
       puts("");
       while(--n)printf("%d  ",n);//while(--i)先减减再判断，相当于只循环了9次
}