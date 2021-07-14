#include<stdio.h>
int main09(void)
{
        char arr[] = "qae";
        char* p = arr;
        printf("%c\n",*p++);
        printf("%c\n",*p);
        return 0;
}