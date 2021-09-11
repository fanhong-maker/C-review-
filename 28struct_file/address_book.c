//本代码实现通讯录新增联系人、删除联系人、查找已有联系人、更改已有联系人、显示通讯录、退出通讯录的功能
//还有内存池的知识点
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1024

int num = 0;
struct Address_book
{
	char name[40];
	char address[40];
	char telephone[14];
	struct Address_book* next;
};
struct Address_book *pool = NULL;

void addperson(struct Address_book**);
void findperson(struct Address_book*);
void changeperson(struct Address_book*);
void delperson(struct Address_book**);
void displaycontast(struct Address_book*);
void relesebook(struct Address_book*);

void addperson(struct Address_book** head)
{
	struct Address_book* current;
	struct Address_book* personmg;
	current = *head;
	if(pool != NULL)
	{
		num--;
		personmg = pool;
		pool = pool->next;
	}
	else
	{
		personmg = (struct Address_book*)malloc(sizeof(struct Address_book));
		if(personmg == NULL)
		{
			printf("内存申请失败！");
			exit(1);
		}
	}
	printf("请输入姓名：");
	scanf("%s", personmg->name);
	printf("请输入电话：");
	scanf("%s", personmg->telephone);
	printf("请输入地址：");
	scanf("%s", personmg->address);
	if(current == NULL)
	{
		*head = personmg;
		personmg->next = NULL;
	}
	else
	{
		*head = personmg;
		personmg->next = current;
	}
}
void findperson(struct Address_book* head)
{
	char personmg[40];
	printf("请输入要查找的信息（姓名或地址）：");
	scanf("%s",personmg);
	struct Address_book* current;
	current = head;
	while(current != NULL)
	{
		if(strcmp(current->name, personmg) == 0 || strcmp(current->address, personmg) == 0)
		{
			printf("查找结果为：\n");
			printf("姓名：%s\n",current->name);
			printf("电话：%s\n",current->telephone);
			printf("地址：%s\n",current->address);	
		}
		current = current->next;	
	}
}

void changeperson(struct Address_book* head)

{
	printf("请输入需更改信息的联系人（输入q取消）：");
	char name[40];
	scanf("%s",name);
	struct Address_book* current;
	current = head;
	if(name == "q")
	{
		printf("取消信息修改\n");
	}
	else
	{
		while(current != NULL)
		{
			if(strcmp(name, current->name) == 0)
			{
				printf("姓名：%s\n",current->name);
				printf("电话：%s\n",current->telephone);
				printf("地址：%s\n",current->address);	
				printf("请输入新的电话：");
				scanf("%s",current->telephone);
				printf("请输入新的地址：");
				scanf("%s",current->address);
			}
			current = current->next;	
		}
		printf("修改成功！\n");
	}
}

void delperson(struct Address_book** head)
{
        printf("请输入需要删除的联系人：");
        char name[40];
	scanf("%s",name);
	struct Address_book* current;
	struct Address_book* temp;
	struct Address_book* last = NULL;
	current = *head;
        printf("%s\n",name);
	while(current != NULL && strcmp(name, current->name) != 0)
	{
		last = current;
		current = current->next;
	}
	if(current == NULL)
	{
		printf("查无此人！\n");
	}
	else
	{
		if(last == NULL)
		{
			*head = current->next;
		}
		else
		{
			last->next = current->next;
			if(num < 1024)
			{
				num++;
				if(pool = NULL)
				{
					pool = current;
					pool->next = NULL;
				}
				else
				{
					temp = pool;
					pool = current;
					pool->next = temp;
				}
			}
			else
			{
				free(current);
			}
		}
	}
//	while(current != null)
//	{
//		while(strcmp(name, current->name) == 0)
//		{
//			if(last == current)
//			{
//				*head = current->next
//			}
//			else
//			{
//				last = current->next;
//				free(current);
//			}
//		}
//		last = current;
//		current = current->next;
//	}
	printf("联系人删除成功\n");
}
void displaycontast(struct Address_book* head)
{
	int count = 1;
	struct Address_book* current;
	current = head;
	if(current == NULL)
	{
		printf("通讯录为空！\n");
	}
	while (current != NULL)
	{
		printf("第%d个联系人的信息为:\n",count);
		printf("姓名：%s\n",current->name);
		printf("地址：%s\n",current->address);
		printf("电话：%s\n",current->telephone);
		current = current->next;
		count++;				
	}
}
void relesebook(struct Address_book *head)
{
	struct Address_book* temp,*current;
	current = head;
	while(current !=NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
        printf("已退出通讯录\n");
}
void relesepool(struct Address_book *head)
{
	struct Address_book* temp,*current;
	current = head;
	while(current !=NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	printf("内存池释放完毕！\n");
}
int main(void)
{
	enum function{add = 1, change, del, find, dis, relese}getfun;
	printf("===欢迎来到通讯录===\n");
	struct Address_book* head;
	head = NULL;
	while(1)
	{
		printf("输入选者的功能\n");
		printf("---添加联系人功能输入1---\n");
		printf("---更改联系人功能输入2---\n");
		printf("---显示联系人功能输入3---\n");
		printf("---删除联系人功能输入4---\n");
		printf("---查找联系人功能输入5---\n");
		printf("---退出通讯录功能输入6---\n");
                scanf("%d",&getfun);
		getchar();
                //printf("%c\n",getfun);
		switch (getfun)
		{
			case 1:
				addperson(&head);
				puts("");
				break;
			case 2:
				changeperson(head);
				puts("");
				break;
			case 3:
				displaycontast(head);
				puts("");
				break;
			case 4:
				delperson(&head);
				puts("");
				break;
			case 5:
				findperson(head);
				puts("");
				break;
			case 6:
				relesebook(head);
				relesepool(pool);
				puts("");
				return 0;
			default:
				printf("无此项功能，请重新输入！\n");
		}
	}
}