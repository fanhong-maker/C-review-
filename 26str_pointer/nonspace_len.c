//本代码实现一个字符串中除了空格其余字符的长度
#include<stdio.h>
int nonspace_len(char* ch)
{
        int count = 0;
        char* p = ch;
        while(*p)
        {
                if(*p == ' ')
                {
                        p++;
                }
                else
                {
                        count++;
                        p++;
                }
        }
        return count;
}
int main(void)
{
        int len;
        char* str1 =  "hello world, fanhong love miaosijia!";
        len = nonspace_len(str1);
        printf("长度为：%d\n",len);
        return 0;
}