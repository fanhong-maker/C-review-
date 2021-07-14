//本代码通过实现查找字符串内是否有相应的字符串来练练手，复习指针。
#include <stdio.h>

char* findstr(char* ch, char* ch1)
{
        char* p1 = ch;
        char* p2 = ch1;
        while(*ch != '\0')
        {
                p1 = ch;
                while(*ch == *p2 && *ch != '\0')
                {
                        ch++;
                        p2++;
                }
                if(*p2 == '\0')
                {
                        return p1;
                }
                p2 = ch1;
                ch = p1;
                ch++;
        }
        return NULL;
}
int main(void)
{
        char str1[] = "llo";
        char arr[] = "hello world";
        char* a = findstr(arr,str1);
        if (a == NULL)
        {
                printf("不存在该字符！\n");
        }
        else
        {
                printf("%s\n",a);
                printf("%c\n",*a);
        }
        return 0;
}