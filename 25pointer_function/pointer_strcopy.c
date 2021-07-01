#include<stdio.h>
void strcopy(char arr[],char ch[])
{
        while(*arr++ = *ch++);  //while进行判断是在进行*arr++ = *ch++ 赋值操作后将被赋值的值用于判断
        //上面这一行代码等价于下面的代码
        // while(*ch)
        // {
        //         *arr = *ch;
        //         arr++;
        //         ch++;
        // }
        // arr = 0;
}
int main02()
{
        char ch[] = "hello wrold";
        char arr[100];
        strcopy(arr, ch);
        printf("%s\n",arr);
        return 0;
}
