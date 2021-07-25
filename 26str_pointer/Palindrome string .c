//判断是否为回文字符串
#include<stdio.h>
#include<string.h>
int palindrome_str(char* str)
{
        char* p1 = str;
        int len = strlen(str);
        char* p2 = str + len - 1;
        while(p1 < p2)
        {
                if(*p1 != *p2)return 1;
                p1++;
                p2--;
        }
        return 0;
}
int main(void)
{
        int result;
        char str[] = "asdfadfdsa";
        result = palindrome_str(str);
        if(result == 0)printf("%s is palindrome string.",str);
        else if(result == 1)printf("%s is not palindrome string.",str);
        return 0;
}