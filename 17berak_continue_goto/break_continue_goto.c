//本案例主要为了学习三个跳转语句：break、continue、goto
/*
break：遇到break时跳出其最接近的循环结构，不再执行未执行完的循环，一般与switch、while、for联合使用
continue：在一个循环结构中，遇到continue时结束本次循环，接着执行未执行完的循环
goto：表示跳转到任何位置，其语法结构为：goto FLAG;      FLAG:
其中除了while(1)和for(::)可以写死循环以外,也可以用goto写死循环
*/

//goto写死循环,可用再用goto跳出该死循环
#include<stdio.h>
int main(void)
{
        int i = 0;
        FLAG: 
        if (i==10)
        {
                goto FLAG1;
        }
        printf("%d\n",i++);
        goto FLAG;
        FLAG1:
        return 0;
}