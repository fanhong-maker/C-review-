//本代码通过字符串的追加来学习指针作为函数传递参数
//三种不同的实现方式
#include<stdio.h>
void strcat1(char* p1,char* p2)
{
        int i = 0;
        int j = 0;
        while(p1[i] != '\0')
        {
                i++;
        }
        while(p2[j] != '\0')
        {
                p1[i+j] = p2[j];
                j++;
        }
        //p1[i+j] = '\0';
}
void strcat2(char* ch1,char* ch2)
{
        while (*ch1 != '\0')ch1++;
        while (*ch2 != '\0')
        {
                *ch1 = *ch2;
                ch1++;
                ch2++;
        }    
}

void strcat3(char* ch1,char* ch2)
{
        while (*ch1 != '\0')ch1++;
        while(*ch1++ = *ch2++);
}
int main07(void)
{
        char ch1[100] = "hello";
        char ch2[] = "world";
        //strcat1(ch1,ch2);
        //strcat2(ch1,ch2);
        strcat3(ch1,ch2);
        printf("%s\n",ch1);
        return 0;
}