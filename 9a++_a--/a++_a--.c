#include <stdio.h>

int main(void)
{
        int a = 10 , b = 20 , c = 10 , d = 20 , e = 10 , f = 20;
        int sum1,sum2;
        a++;    //后自加，在进行运算之后再进行自身加一操作
        ++b;    //前自加，在进行运算之前先进行自身加一操作
        printf("a = %d\nb = %d\n",a,b);
        c--;    //后自减，在进行运算之后再进行自身减一操作
        --d;    //前自减，在进行运算之前先进行自身减一操作
        printf("a = %d\nb = %d\n",c,d);
        sum1 = (e++) - f;
        sum2 = (++e) - f;
        printf("sum1 = %d\nsum2 = %d\n",sum1,sum2); 
        return 0;
}