//本代码介绍几个内存操作常用的几个函数,都包含于string.h标准库中
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
        int* p = (int*)malloc(sizeof(int)*10);
        //使用viod* memset(void* ptr, int vla，size_t len)以字节为单位对内存进行值的设置
        memset(p,0,40);
        for(int i = 0; i<10;i++)
        {
                printf("%d\n",p[i]);
        }
        return 0;
}