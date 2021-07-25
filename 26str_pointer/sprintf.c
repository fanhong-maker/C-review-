/*=============非常重要=============*/
//本代码实现字符串格式化，对应于string.h中的sprintf函数
#include<stdio.h>
#include<string.h>
int main(void)
{
        char dest[100];
        int i = 1,j = 2, k = 3;
        int a, b, c;
        char str1[] = "1+2=3";
        char str[] = "hello world";
        sprintf(dest,"%d+%d=%d",i,j,k);
        sscanf(str1, "%d + %d = %d",&a,&b,&c);
        printf("%s\n",dest);
        printf("%d\n",a);
        printf("%d\n",b);
        printf("%d\n",c);
}