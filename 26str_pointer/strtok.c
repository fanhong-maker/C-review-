//本代码实现字符串的分割，用string.h中的strtok函数
//原字符串的改动是切分符原位置均更改为 '\0'，所以内容都还在，
#include<stdio.h>
#include<string.h>

int main(void)
{
        char str[] = "www.fanhong.com";
        char* token = strtok(str,".");//此时str = "www\0fanhong\0com"
        while(token)
        {
                printf("%s\n",token);
                token = strtok(NULL,".");
        }
        
        for(int i = 0; i < sizeof(str); i++)
        {
                printf("%c",str[i]);
        }
        return 0;
}