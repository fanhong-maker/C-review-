//本代码以查找字符串中是否有相应的字符，来学习以指针作为返回参数
//本代码以查找字符串中是否有相应的字符串，来学习以指针作为返回参数
#include<stdio.h>
#include<string.h>
char* find_char(char* str, char ch)
{
        printf("%c\n",'\0');
        while (*str != '\0')
        {
                if(*str == ch)
                {
                        return str;
                }
                str++;
        }
        return NULL;
}
char* find_str(char* str, char* str1)
{
        char* p1 = str; //遍历字符串str的指针
        char* p2 = str; //记录指针，记录第一次比对成功的指针
        char* p3 = str1; //遍历str1的指针
        while(*p1)
        {
                p2 = p1;
                //单目运算符都是对最近的一个变量操作
                //以下两种while的区别在于，第一种判断完p1和p3会继续加一，第二种不会继续加一。
                // while(*p1++ == *p3++);
                // p3--;
                while(*p1 == *p3 && *p1 != '\0')
                {
                        p1++;
                        p3++;
                }
                if(*p3 == '\0')
                {
                        return p2;
                }
                p3 = str1;
                p1 = p2;
                p1++;
        }
        return NULL;
}
int main()
{
        char str[] = "hello worldllea";
        char str1[] = "lea";
        //char* p = find_char(str,'m');
        char* p = find_str(str,str1);
        if (p==NULL)
        {
                printf("NOT FIND!\n");
        }
        else
        {
                printf("%s\n",p);
        }
        return 0;
}