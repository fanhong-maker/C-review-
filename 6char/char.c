//
#include <stdio.h>

int main(void)
{
        //char 变量名 = '值'  表示定义一个字符类型的变量，其中值只能为一个字符，char类型定义的变量本身就是一个1字节大小的整型
        //char类型的字符对应ASCII码，其中字符0对应48，字符A对应65，字符a对应的是97，其中小写字母和大写字母相差32
        char ch;
        printf("请输入一个字符：\n");
        scanf("%c",&ch);
        printf("输入的字符为：%c\n",ch);
        printf("对应的ASCII码为：%d\n",ch);
        printf("转化为大写字母为：%c\n",ch-32);
        printf("字符型的大小为：%d\n",sizeof(ch));
        return 0;
}