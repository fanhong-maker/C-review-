#include<stdio.h>
int main(void)
{
        char arr[] = "qae";
        char* p = arr;
        printf("%c\n",*p++);
        printf("%c\n",*p);
        return 0;
}