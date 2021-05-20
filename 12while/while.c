//本案例通过逢7过的小游戏来复习while语句的使用
#include <stdio.h>

int main(void)
{
        int i = 1 , the_max = 100;
        while(i<=100)
        {
                if(i%7==0||i/10==7||i%10==7)
                {
                        printf("过！\n");
                }
                else
                {
                        printf("%d\n",i);
                }
                i++;
        }
        return 0;
}