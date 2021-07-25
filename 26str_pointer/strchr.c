//本代码实现在字符串str中查找字母ch出现的位置，成功返回字母ch的首地址，失败返回NULL
//等同于string库中的strchr
#include<stdio.h>
#include<string.h>
char* my_strchr(const char* str, const int val)
{
        while(*str)
        {
                if(*str == val)
                {
                        return str;
                }
                str++;
        }
        return NULL;
}
int main(void)
{
        char str[] = "hello world";
        char ch = 'l';
        char* p = NULL; 
        printf("%p\n",p);
        p = my_strchr(str,ch);
        printf("%s\n",p);
        return 0;
}