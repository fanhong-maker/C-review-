//本案例主要说明do {}while(条件语句); 的使用
//do {}while();语句表示先执行一次代码体再进入while判断；
# include <stdio.h>
#define A_3(a) a*a*a
/*
int main01(void)
{
        //short int i = 0;
        //do {}while(i) 语句中先执行一次代码体中的代码，使得i等于1，进入判断为真，将循环
        //但注意这里不会是无限循环，因为我们定义的是一个short int类型的数据，其取值范围是-32768到32767
        //当i等于32767时再加一将溢出，则i等于-32768，则从-32768加一到0时循环停止！
        char i = 0;//i的取值范围为：-128到127
        do
        {
                printf("%d",i);
                i++;
        } while (i);
        //while{i}不会进入循环，因为i等于0表示假
        while(i)
        {
                printf("%d",i);
                i++;
        }
        return 0;
}
*/
//水仙花数的例子
int main(void)
{
        int i = 100 , x , m , y ,z;
        do
        {
                x = i / 100;
                m = i % 100;
                y = m / 10;
                z = m % 10;
                if (A_3(x) + A_3(y) + A_3(z) == i)
                {
                        printf("100-1000中的水仙花数为：%d\n",i);
                }
                i++;
        }while(i<1000);
        return 0;
}