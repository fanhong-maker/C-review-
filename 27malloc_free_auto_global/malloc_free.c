//堆空间的开辟、使用和释放。使用stdlib.h中的malloc()开辟，使用free()释放。
//堆空间开辟的是一个连续的内存空间
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
        int* p = (int*)malloc(sizeof(int)*1000000000000);
        if(!p)
        {
                printf("开辟堆空间失败");
                return -1;
        }
        for (int i = 0; i< 10; i++)
        {
                p[i] = i;
        }
        for(int i = 0;i<10;i++)
        {
                printf("%d\n",*(p+i));
        }
        free(p);
        return 0;
}