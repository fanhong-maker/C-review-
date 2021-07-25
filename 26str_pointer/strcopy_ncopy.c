//本代码实现字符串的拷贝和字符串有限拷贝，分别对应于string库中的strcpy和strncpy
#include<stdio.h>
#include<string.h>
//字符串拷贝
void my_strcpy(char* dest, const char* str)
{
        while(*dest++ = *str++); //字符串拷贝操作
        return;
}
//字符串有限拷贝
void my_strncpy(char* dest, const char*str, size_t num)  //size_t等同于unsigned int
{
        int i = 0;
        while((*dest++ = *str++) && --num);
        //while(i < num)
        // {
        //         *dest++ = *str++;
        //         i++; 
        // }
}
int main(void)
{
        char str[] = "hello world!";
        char dest[100] = {0};
        //my_strcpy(dest,str);
        my_strncpy(dest, str, 1);
        printf("%s\n",dest);
        return 0;
}