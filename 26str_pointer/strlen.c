//本代码将字符串指针作为参数传递给函数，实现字符串字符长度计算
#include<stdio.h>
int strlenth(const char *p)
{
        int i = 0;
        if(p == NULL)
        {
                return 0;
        }
        //p[0] = 'm';
        while(*(p+i))i++;
        return i;
}
int main(void)
{
        char str[] = "hello world";  //可修改单个字母
        char *str1 = "hello world";  //不可修改单个字母
        int len;
        len = strlenth(str);
        //len = strlenth(str1);
        printf("%d\n",len);
        return 0;
}