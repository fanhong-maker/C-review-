//gets、puts、fgets、fputs函数的学习,这四个函数都是stdio中的
#include<stdio.h>
#include<string.h>

int main01(void)
{
        //gets语法结构：gets(地址)
        //gets 与 scanf 的区别：两个都是以'\n'为结束，但gets可以接收空格，scanf不可(scanf也以空格为结束)
        //可以通过正则表达式使得scanf也可获取空格，scanf(%[^\n],arr)
        //由于scanf()和gets()无法知道字符串的大小，必须读到换行符或文件结尾才接受输入，因此容易导致字符数组越界
        char arr[100];
        gets(arr);
        puts(arr);      //puts会自动在字符串后加\n
        return 0;
}
int main02(void)
{
        //fgets()可以接收空格
        //fgets()获取字符串少于元素个数会有\n，大于等于没有\n
        char arr[10];
        fgets(arr,sizeof(arr),stdin);   //stdin指针表示从键盘获取
        puts(arr);
        return 0;
}int main(void)
{
        //strlen(s)是strin.h中的一个函数，用于计算字符串的长度（不包括\0）
        char arr[100] = "fan hong";
        fputs(arr,stdout);  //stdout指针表示打印到屏幕
        printf("字符串长度:%d\n",strlen(arr));
        printf("数组大小:%d\n",sizeof(arr));
        return 0;
}