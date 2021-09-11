//结构体的定义：

/*struck 结构体名称

{

        结构体成员一；

        结构体成员二

        ....

}结构体变量名;*/

//也可 struck 结构体名 结构体变量名 

#include<stdio.h>

#include<stdlib.h>



struct Date

{

        size_t year;

        size_t month;

        size_t day;

};

struct Book

{

        char title[48];

        char author[48];

        float price;

        struct Date date;

        char publisher[48];

};



void getbook(struct Book*);	//录入书本信息（以指针作为函数参数进行传递，用.运算符）

void printbook(struct Book*);



void printbook(struct Book* book)

{

        printf("======打印中======\n");

	puts("");

        printf("书名：%s\n",book->title);

        printf("作者：%s\n",book->author);

        printf("价格：%.2f\n",book->price);

        printf("出版日期：%d-%d-%d\n",book->date.year,book->date.month,book->date.day);

        printf("出版社：%s\n",book->publisher);

	puts("");

        printf("======打印完毕======\n");

	puts("");

}

void getbook(struct Book* book)

{

        printf("======开始录入======\n");

	puts("");

        printf("请输入书名：");

        scanf("%s",(*book).title);

        printf("请输入作者：");

        scanf("%s",book->author);

        printf("请输入价格：");

        scanf("%f",&(*book).price);

        printf("请输入出版日期：");

        scanf("%d-%d-%d",&book->date.year,&(*book).date.month,&(*book).date.day);

        printf("请输入出版社：");

        scanf("%s",(*book).publisher);

	puts("");

        printf("=====录入完毕=====\n");

	puts("");

}



int main(void)

{ 

        struct Book* library;

	int i,flag;

	flag = 1;

	i = 0;

	while(flag == 1)

	{

		library = (struct Book*)realloc(library,sizeof(struct Book)*(i + 1));

		if(library == NULL)

		{	

			printf("内存分配失败\n");

			exit(1);

		}

		getbook(library + i);

		i++;

		printf("继续录入书籍信息请输入1，否则输入0\n");

		scanf("%d",&flag);

	}

	printf("录入完成！\n");

	for(int n = 0;n < i; n++)

	{

		printbook(library + n);

	}

	free(library);

        return 0;

}