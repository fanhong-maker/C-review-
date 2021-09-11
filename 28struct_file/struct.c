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

        char title[128];

        char author[128];

        float price;

        struct Date date;

        char publisher[128];

};



void printbook(struct Book);	//打印书本信息（用.运算符）

struct Book inputbook(struct Book);	//录入书本信息（以结构体作为函数参数进行传递，用.运算符）

void getbook(struct Book*);	//录入书本信息（以指针作为函数参数进行传递，用.运算符）

void printbook1(struct Book*);



void printbook1(struct Book* book)

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



struct Book inputbook(struct Book book)

{

        printf("======开始录入======\n");

	puts("");

        printf("请输入书名：");

        scanf("%s",book.title);

        printf("请输入作者：");

        scanf("%s",book.author);

        printf("请输入价格：");

        scanf("%f",&book.price);

        printf("请输入出版日期：");

        scanf("%d-%d-%d",&book.date.year,&book.date.month,&book.date.day);

        printf("请输入出版社：");

        scanf("%s",book.publisher);

	puts("");

        printf("=====录入完毕=====\n");

	puts("");

        return book;

}

void printbook(struct Book book)

{

        printf("======打印中======\n");

	puts("");

        printf("书名：%s\n",book.title);

        printf("作者：%s\n",book.author);

        printf("价格：%.2f\n",book.price);

        printf("出版日期：%d-%d-%d\n",book.date.year,book.date.month,book.date.day);

        printf("出版社：%s\n",book.publisher);

	puts("");

        printf("======打印完毕======\n");

	puts("");

}

int main(void)

{ 

        //结构体的初始化

        struct Book book1 = {

                .title = {"《深度学习入门》"},

                .author = {"斋藤康毅"},

                .price = 59.00,

                .date = {2020,2,1},

                .publisher = {"人民邮电出版社"}

        };

        struct Book* b2;

	b2 = (struct Book*)malloc(sizeof(struct Book));

	if(b2 == NULL)

	{

		printf("内存分配失败");

		exit(1);

	}

        printbook(book1);

        getbook(b2);

        printbook1(b2);

	free(b2);

        return 0;

}