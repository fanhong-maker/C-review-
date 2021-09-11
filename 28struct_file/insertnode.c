//本代码实现单链表的数字有序插入，并打印
#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int value;
	struct Node* next;
};
void freenode(struct Node *head)
{
	struct Node* temp;
	struct Node* current = head;
	while(current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
void delete(struct Node **head, int value)
{
        struct Node *current;
        struct Node *last;
        current = *head;
	last = current;
	//这里要特别注意，curent != NULL 只能写在 current->value != value 的前面，否则后者将出现段吐核错误
        while ((current != NULL) && (current->value != value))
        {
                last = current;
                current = current->next;
        }
        if(current == NULL)
        {
                printf("例表中找不到输入数字！\n");
                return;
        }
        else
        {
                if(current == *head)
                {
                        *head = current->next;
                }
                else
                {
                        last->next = current->next;
                }
                free(current);
        }
}
void insertnode(struct Node **head, int value)
{
	struct Node* new;
	struct Node* current ;
	struct Node* last;
	last = NULL;
	current = *head;
	while((current != NULL) && (current->value < value))
	{
		last = current;	
		current = current->next;
	}
	new = (struct Node*)malloc(sizeof(struct Node));
	if(new == NULL)
	{
		printf("创建内存失败！\n");
		exit(1);
	}
	new->value = value;
	new->next = current;
	if(last == NULL)
	{
		*head = new;
	}
	else
	{
		last->next = new;
	}
}
void printlist(struct Node *head)
{
	struct Node *p;
        p = head;
	while(p != NULL)
	{
		printf("%d  ",p->value);
		p = p->next;
	}
	puts("");
}
int main(void)
{
	int value;
	int value1;
	struct Node* head = NULL;
	while(1)
	{
		printf("请输入一个整数（输入-1代表输入结束）\n");
		scanf("%d",&value);
		if(value == -1)
		{
			break;
		}
		insertnode(&head, value);
		printlist(head);
	}
        while(1)
	{
		printf("请输入一个需删除的整数（输入-1代表输入结束）\n");
		scanf("%d",&value1);
		if(value1 == -1)
		{
			break;
		}
                delete(&head,value1);
		printlist(head);
	}
	freenode(head);
	return 0;
}