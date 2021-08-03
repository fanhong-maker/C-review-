//本代码介绍几个内存操作常用的几个函数,都包含于string.h标准库中
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
        int* p1 = (int*)malloc(sizeof(int)*10);
        int arr[] = {0,1,2,3,4,5,6,7,8,9};
        int arr1[] = {0,1,2,3,4};
        //使用viod* memset(void* ptr, int vla，size_t n)以字节为单位对内存进行值的设置
        memset(p1,0,40);
        for(int i = 0; i<10;i++)
        {
                printf("%d  ",p1[i]);
        }
        puts("");
        //使用void* memcpy(void* dest,void* scr,size_t n)以字节为单位复制src内存中的n个字节数据到dest的内存中
        memcpy(p1,arr,40);
        for(int i = 0; i<10;i++)
        {
                printf("%d  ",p1[i]);
        }
        puts("");
        //使用void* memmove(void* dest,void* scr,size_t n)以字节为单位复制src内存中的n个字节数据到dest的内存中
        //与memcpy不同的是：memmove在dest和scr地址有重叠的情况复制也不发生错误，缺点是执行时间比较长
        //memmove将要复制的数据复制一份到第三个内存空间，再将第三个内存空间的数据复制到dest
        memcpy(&arr[5],&arr[3],20);
        for(int i = 0; i<10;i++)
        {
                printf("%d  ",arr[i]);
        }
        puts("");
        //使用void* memcmp(void* dest,void* scr,size_t n)以字节为单位比较src内存中的n个字节数据和dest的内存中n个字节数据
        //是否相等，相等输出0，不相等输出正数或负数，正数表示dest大于scr,负数表示小于
        int a = memcmp(arr,arr1,5);
        printf("%d\n",a);
        return 0;
}