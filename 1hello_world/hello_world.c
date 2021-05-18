//两个正斜杠表示行注释
/*
这是一个块注释
可以注释多行
*/

//stdio.h std是一个标准库 io表示输入输出(input output) .h头文件
//<>表示导入系统文件，""表示导入自定义文件
#include <stdio.h>
#include <stdlib.h>

//int 数据类型：整型 在函数中表示函数返回值
//main 程序的主函数 程序有且只有一个主函数 ()里面表示函数的参数,可有多个参数，多个参数用逗号分隔

int main(void)
{
        int a = 2, b = 2, c;
        c = a+b;
        printf("%d\n",c);
        //{} 函数体 代码体
        //printf 是由stdio.h系统库提供的函数，表示在标准输出设备打印[字符串]
        //; 表示一条语句结束
        //"" 称为字符串
        //ctrl+k+c表示选中行注释，ctrl+k+u表示取消对选中行的注释
        printf("hello world\n");
        printf("i love you\n");
        printf("22");
        //return 出现在main中表示程序结束，出现在其他函数中表示函数结束
        //0 表示函数的返回值，要和函数返回值类型对应
        system("pause");
        return 0;
} 

