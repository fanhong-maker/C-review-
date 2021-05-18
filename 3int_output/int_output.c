//本案例用来说明整型（int）数据类型的输出规则
#include <stdio.h>

int main(void)
{
        //无符号：unsigned 有符号：signed
        int a = 10;     //可以省略signed
        
        printf("有符号十进制输出为：%d\n",a);
        printf("八进制输出为：%o\n",a);
        printf("十六进制输出(小写字母)：%x\n",a);
        printf("十六进制输出(大写字母)：%X\n",a);
        printf("无符号十进制输出为：%u\n",a);

        //定义八进制数据以0开头，定义十六进制开头以0X(0x)开头，在c语言中不能直接定义二进制
        int b = 0123;   //八进制,其中单个数值小于8
        int c = 0x123;  //十六进制 ，其中单个数值小于16
        printf("%d\n",b);
        printf("%o\n",b);
        printf("%X\n",b);

        printf("%d\n",c);
        printf("%o\n",c);
        printf("%x\n",c);


        return 0;
}