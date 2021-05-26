//本案例通过猜数字（0-100）来学习for(;;)循环
//现阶段死循环可有两种写法：1.for(;;){} 2.while(1){} ,代码体中无循环出口
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
        //产生随机数
        //1.添加头文件 stdio.h和time.h
        //2.添加随机数种子
        //3.引入随机数
        srand((unsigned int)time(NULL));
        int value = rand()%100;
        int num;
        printf("请输入0-100当中的一个数字\n");
        for(;;)
        {
                scanf("%d",&num);
                if (num>value)
                {
                        printf("输入数字较大\n");
                }
                else if (num<value)
                {
                        printf("输入数字较小\n");
                }
                else
                {
                        printf("恭喜答对\n");
                        break;
                }
        }
        return 0;
}