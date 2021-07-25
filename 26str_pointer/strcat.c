//本代码实现字符串的追加，和字符串的有限追加，分别对应于string.h中的strcat和strncat函数
#include <stdio.h>
#include <string.h>
 
//字符串的追加
void my_strcat(char*dest, char* str)
{
        //while(*dest)dest++;  //等同于while(*dest++);dest--;
        while(*dest++);
        dest--;
        while(*dest++ = *str++);
}
//字符串有限追加
void my_strncat(char*dest ,char*str ,size_t num)
{
        while(*dest)dest++;
        while((*dest++ = *str++) && --num);
}
int main(void)
{
        char dest[100] = "hello";
        char str[] = " world";
        //调用库函数
        //strcat(dest,str);
        //自己实现字符串追加
        //my_strcat(dest, str);
        //调用库函数
        //strncat(dest, str, 2);
        //自己实现有限字符串的追加
        my_strncat(dest, str, 1);
        printf("===%s===\n",dest);
        return 0;
}