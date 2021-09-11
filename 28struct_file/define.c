//宏定义：宏定义其实就是机械的进行替换，将前面的名称与后面的参数进行替换
// # 运算符和 ## 运算符
//在宏定义中 一个 # 代表将 # 后的参数变为字符串 如：#define STR(x) #x
//在宏定义中 两个 # 代表将 ## 前后的参数相连接 如：#define TOGETHER(X,Y) X##Y
#include<stdio.h>
#define STR(x) # x
#define TOGETHER(X,Y) X##Y
#define PI 3.14
#define R 3
#define S PI * R * R//宏定义可以嵌套
#define SQUARE(X) X*X//这种写法是错误的若调用时写为SQUARE(X+1),则将替换为 X+1*X+1,结果将错误
//#define SQUARE(X) (X)*(X) //这才是正确的宏定义写法
int main(void)
{
        int x = 5;
        printf("%s\n",STR(asdd15));
        printf(STR(FANHONG = %d\n),TOGETHER(5,20));
        printf("圆的面积为：%.2f\n",S);
        printf("5的平方为：%d\n",SQUARE(5));
        printf("6的平方为：%d\n",SQUARE(5+1));//错误案例
        return 0;
}