//本代码实现字符串反转
#include<stdio.h>
#include<string.h>
//用数组下标实现
void str_reversed1(char* str,int len)
{
        char temp;
        for (int i = 0; i < len/2; i++)
        {
                temp = str[i];
                str[i] = str[len-i-1];
                str[len-i-1] = temp;
        }
        return;
}
//用指针实现
void str_reversed2(char* str,int len)
{
        char* p1 = str;
        char* p2 = str + len -1;
        char temp;
        while(p1 < p2)
        //for (int i = 0; i < len/2; i++)
        {
                temp = *p1;
                *p1 = *p2;
                *p2 = temp;
                p1++;
                p2--;
        }
        return;
}
int main(void)
{
        int len;
        int i = 0;
        char str[] = "hello world!";
        char* str1 = "hello world!";
        len = strlen(str);
        printf("%d\n",strlen(str1));
        printf("%s\n",str);
        //printf("%d\n",sizeof(char*));
        str_reversed2(str,len);
        printf("%s\n",str);
        return 0;
}