//字符串转换为整型、浮点型、长整型，使用stdlib.h库中的atoi(),atof,atol
//atoi从负号或数字开始查找，直到遇到非数字或'\0'停止，返回值为所查到的整型数据,未查找到返回0
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
        char str[] = "0    -123-456aaaa";
        int i = atoi(str);
        printf("%d\n",i);
        return 0;
}
