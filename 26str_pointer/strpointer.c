#include<stdio.h>
int main(void)
{
        char str1[] = "hello";
        char str2[] = "world";
        //指向常量的指针,只可修改地址，不可修改指针指向的值
        const char* p1 = str1;
        //常量指针，只可修改指针所指向的值，不可修改地址
        char* const p2 = str2;
        //p1[0] = 'a'; //err
        p1 = str2;
        p2[0] = 'a'; 
        printf("%s\n",str2);
        return 0;
}