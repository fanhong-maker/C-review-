//本代码用于学习typedef的学习
//typedef:用于封装类型常于结构体一起使用，如 typedef unsigned int uni;typedef int* PTRINT;
//不同于 #define, #define是直接替换，如 #define int integer ,是将 int 直接替换为integer
#include<stdio.h>
#include<string.h>
typedef int INTEGER, *PTRINT;
//typedef 与结构体联合使用
typedef struct Date
{
        int year;
        int month;
        int day;
        char str[5];
}DATE, *PDATE;
int main(void)
{
        int c = 10;
        //int* a,*b;      //等价于typedef int* PTRINT; PTRINT a,b;
        PTRINT a,b;
        a = &c;
        b = a;
        DATE date;
        PDATE pdate = &date;
        date.year = 2021;
        date.month = 9;
        date.day = 7;
        strcpy(date.str,"love");
        printf("%d-%d-%d\n",pdate->year,pdate->month,pdate->day);
        printf("%s\n",pdate->str);
        printf("%p\n",b);
        printf("%p\n",a);
        printf("%p\n",&c);
}