//本案例通过实现时钟功能和九九乘法表来学习for循环
#include<stdio.h>
#include<Windows.h>

//时钟功能
int main01(void)
{
        int i , j , k;
        for(i = 0 ; i < 24 ; i++)
        {
                for(j = 0 ; j < 60 ; j++)
                {
                        for(k = 0 ; k < 60 ; k++)
                        {
                                system("cls");
                                printf("%02d:%02d:%02d",i,j,k);
                                Sleep(990);
                        }
                }
        }
}

//九九乘法表
int main02(void)
{
        int x , y, z;
        for(x = 1 ; x < 10 ; x++)
        {
                for(y = 1 ; y < x + 1 ; y++)
                {
                        printf("%d * %d = %d\t", y , x ,x*y);
                }
                printf("\n");
        }
}