//本代码实现在字符串str1中找出str2,对应于string中的strstr函数
#include<stdio.h>
#include<string.h>
char* my_strstr(const char *str1,const char *str2)
{
        char* dest = str1;
        char* p1 = str1;
        char* p2 = str2;
        while(*p1)
        {
                dest = p1;
                while((*p1 == *p2) && *p1)
                {
                        p1++;
                        p2++;
                }
                if(!*p2)return dest;
                p1 = dest;
                p2 = str2;
                p1++;
        }
        return NULL;
}
int main(void)
{
        char str1[] = "hello world";
        char str2[] = "ld ";
        char*p = my_strstr(str1,str2);
        printf("%s\n",str1);
        if (!p)
        {
                printf("not found");
        }
        else
        {
                printf("%s\n",p); 
        }
        return 0;
}