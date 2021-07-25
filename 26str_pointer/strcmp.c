//本代码实现两字符串的比较和部分字符串的比较
#include<stdio.h>
#include<string.h>
//字符串的比较
int my_strcmp(const char* str1, const char* str2)
{
        while(*str1 == *str2)
        {
                if((!*str1) && (!*str2))return 0;
                str1++;
                str2++;
        }
        return *str1 -*str2;
}
//部分字符串的比较
int my_strncmp(const char* str1, const char* str2,  size_t num)
{
        while((*str1==*str2) && (num--))
        {
                if((*str1 == '\0') && (*str2 == '\0'))return 0;
                str1++;
                str2++;
        }
        return *str1 -*str2;
}
int main(void)
{
        int value;
        char str1[] = "hello world";
        char str2[] = "hello world ";
        //调用string.h实现
        //value = strcmp(str1,str2);
        //value = strncmp(str1,str2,3);
        //自己实现
        value = my_strcmp(str1,str2);
        //value = my_strncmp(str1,str2,11);
        if(!my_strcmp(str1,str2))
        {
                printf("相同\n");
        }
        else
        {
                printf("不相同\n");
        }
        if(value == 0)
        {
                printf("%s和%s两字符串相等",str1,str2);
        }
        else
        {
                printf("%s和%s两字符串不相等",str1,str2);

        }
        return 0;
}