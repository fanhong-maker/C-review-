//本案例主要学习字符数组与字符串之间的异同
#include<stdio.h>
//字符串与字符数组定义
int main01(void)
{
        //定义字符数组
        char a[5] = {'h','e','l','l','o'};      //当字符个数小于定义的字符数组大小时，剩余位置补零，
        //字符
        char ch = 'a';
        //字符串 字符串的结束标志为 '\0' 或数字 0 ，既是'\0'等同于数字 0，但不等同于'0'!!!!
        char *str1 = "hello";
        char str2[] = "hello";  //等同于 char str2[] = {'h','e','l','l','o','\0'}; 或char str2[6] = {'h','e','l','l','o'};
        printf("%d\n", sizeof(a));     //其中char类型的大小为1个字节，则整个字符数组的大小为5
        printf("%s\n", a);
        printf("%s\n", str1);
        printf("%s\n", str2);
        return 0;
}
//字符串键盘获取
int main02(void)
{
        char a[11];
        scanf("%s",a);
        printf("%s\n",a);
        return 0;
}
//字符串的拼接
int main03(void)
{
        char a1[] = "hello";
        char a2[] = "world";
        char a3[20];
        int i = 0 , j = 0;
        while (a1[i] != '\0')
        {
                a3[i] = a1[i];
                i++;
        }
        while (a2[j] != '\0')
        {
                a3[i+j] = a2[j]; 
                j++;
        }
        a3[i+j] = 0;    //='\0' 
        printf("%s\n",a3);
        // for (int i = 0; i<20; i++)
        // {
        //         printf("%c\n",a3[i]);
        // }
        return 0;
}