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

void printbook(struct Book);
struct Book inputbook(struct Book);
struct Book inputbook(struct Book book)
{
        printf("======开始录入======\n");
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
        printf("=====录入完毕=====\n");
        return book;
}
void printbook(struct Book book)
{
        printf("======打印中======\n");
        printf("书名：%s\n",book.title);
        printf("作者：%s\n",book.author);
        printf("价格：%.2f\n",book.price);
        printf("出版日期：%d-%d-%d\n",book.date.year,book.date.month,book.date.day);
        printf("出版社：%s\n",book.publisher);
        printf("======打印完毕======\n");
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
        struct Book book2;
        printbook(book1);
        book2 = inputbook(book2);
        printbook(book2);
        return 0;
}