//本代码为学习指针字符串，通过本代码学习用指针定义的字符串和用数组定义的字符串之间的异同
//
#include<stdio.h>
int main01(void)
{
        char* p1 = "hello world";
        char arr[] = "hello world";
        char* p2 = "hello world";
        //都能正确输出"hello world",但是arr可通过索引修改某个元素的值，而p1不可以
        //这是因为arr是栈区字符串，而p1和p2是数据区常量区字符串
        printf("%s\n",p1);
        printf("%s\n",arr);
        arr[2] = 'm';
        printf("%s\n",arr);
        //p1和p2存储的地址信息一样，因为p1和p2是数据区常量区字符串
        printf("%p\n",p1);
        printf("%p\n",p1);
}
int main(void)
{
        char str1[] = "hello";
        char str2[] = "world";
        char str3[] = "love";
        //同上字符串数组arr1中的单个字符可修改，字符串数组arr2中的单个字符不可修改，原因同上
        //既是arr2只可访问不可修改
        char* arr1[] = {str1,str2,str3};
        char* arr2[] = {"hello","world","love"};
        char** p = arr2;
        char*** p1 = &p;
        *(*(*p1)) = 'm';
        printf("%s",arr2[0]);
        printf("%p\n",arr1[0]);
        printf("%p\n",arr1);
        printf("%p\n",&arr1);
        arr1[0][0] = 'a';
        printf("%p\n",arr1[0]);
        printf("%p\n",arr1);
        //arr2[0][0] = 'a'; err,不可修改
        //arr1和arr2中的字符串都可修改
        arr1[0] = "worl5656464";
        arr2[0] = "worl22";
        printf("%p\n",arr1[0]);
        printf("%p\n",arr1);
        printf("%c\n",**arr1);
        printf("%c\n",**arr2);
        return 0;
}