//本代码通过实现图书馆录入书籍信息和打印已经录入书籍的信息来学习单链表中插入元素（尾插法）
//单链表：由信息域和指针域组成，头指针指向第一个信息域（指针值为第一个信息域的地址），最后一个指针指向NULL


#include<stdio.h>
#include<stdlib.h>

struct Book
{
	char title[48];
	char author[48];
	float price;
	struct Book *nest;
};
void getbook(struct Book**);
void printbook(struct Book*);
void releaselibrary(struct Book*);//释放所有开辟的堆空间
void getbook(struct Book** library)
{
	struct Book* book;
	static struct Book* temp;
	book = (struct Book*)malloc(sizeof(struct Book));
	if(book == NULL)
	{
		printf("开辟堆空间失败！\n");
		exit(1);
	}
	printf("======请输入书籍信息======\n");
	printf("请输入书名：");
	scanf("%s",book->title);
	printf("请输入作者：");
	scanf("%s",book->author);
	printf("请输入价格：");
	scanf("%f",&(book->price));
	if(*library == NULL)
	{
		*library = book;
		book->nest = NULL;
	}
	else
	{
		temp->nest = book;
		book->nest = NULL;
	}
	temp = book;
}
void printbook(struct Book* library)
{
	int count = 1;
	while(library != NULL)
	{
		printf("BOOK%d\n",count);
		printf("书名：%s\n",library->title);
		printf("作者：%s\n",library->author);
		printf("售价：%.2f\n",library->price);
		library = library->nest;
		count++;
	}
}
void releaselibrary(struct Book* library)
{
	struct Book* temp;
	while(library != NULL)
	{
		temp = library;
		library = (library)->nest;
		free(temp);
	}
}
int main(void)
{
	struct Book *library = NULL; 
	char a;
	while(1)
	{
		printf("是否录入书籍（是为Y，否为N）\n");
		do{
			scanf("%c",&a);
		}while((a != 'Y') && (a != 'N'));
		if (a == 'Y')
		{
			getbook(&library);
		}
		else if(a=='N')
		{
			break;
		}
	}
	printbook(library);
	releaselibrary(library);
	return 0;
} 