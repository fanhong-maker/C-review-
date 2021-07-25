//主函数的形参
//一般函数的参数在函数调用时传入该函数，而主函数的参数在生成应用程序后调用的
//main函数是操作系统调用的，argc表示函数参数的数量；
//argv数组的每个成员都是char*类型的，表示命令行参数的字符串数组
#include<stdio.h>

int main(int argc,char* argv[])
{
        int i;
        if(argc < 3)
        {
                printf("loss pramaters");
                return -1;
        }
        for(i=0; i<argc; i++)
        {
                printf("%s\n",argv[i]);
        }
        return 0;
}