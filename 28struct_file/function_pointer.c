//函数指针：是一种指向函数的指针，类似于指向数组、指向数字的指针，是一种数据类型
//定义格式：int (*p)(); 所指函数的返回值类型 (指针变量)(所指函数的参数类型)
//回调函数：将函数指针作为函数的参数调用
//以及将函数指针作为函数返回值
#include<stdio.h>
int add(int,int);
int sub(int,int);
int calc(int (*)(int,int),int,int);//函数指针作为函数的参数
int (*selet(char))(int,int);//函数指针作为函数的返回值

int add(int num1, int num2)
{
	return num1 + num2;
}
int sub(int num1, int num2)
{
	return num1 - num2;
}
int calc(int (*fp)(int,int),int num1,int num2)
{
	return (*fp)(num1,num2);
}
int (*selet(char op))(int,int)
{
	switch (op)
	{
		case '+':return add;
		case '-':return sub;
	}	
}
int main(void)
{
	int num1,num2;
	char op;
	int (*fp)(int,int);
	printf("palese input a format(like 1+3)：");
	scanf("%d%c%d",&num1,&op,&num2);
	fp = selet(op);
	printf("3 + 5 = %d\n",calc(add,3,5));
	printf("3 - 5 = %d\n",calc(sub,3,5));
	printf("%d %c %d = %d\n",num1,op,num2,calc(fp,num1,num2));
	return 0;
}
