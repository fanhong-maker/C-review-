//本代码验证了string.h中的strncpy()函数只复制到'\0'
//且使用strnpcy和strcpy从arr1复制到arr2时，若两个空间的地址有重合将会进行覆盖，复制结果错误
#include<stdio.h>
#include<string.h>
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
int main()
{
        char arr1[] = "helloworld";
        char dest[100];
        dest[15] = 'f';
        strncpy(&arr1[2],arr1,5);
        printf("%s\n",&arr1[2]);
        // for(int i = 0;i<15;i++)
        // {
        //         printf("%c",arr1[i]);
        // }
        return 0;
}