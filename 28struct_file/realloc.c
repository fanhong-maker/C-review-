#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int *ptr = NULL;
	int num = 0;
	int i = 0;
	while(num != -1)
	{
		printf("请输入一个数字： ");
		scanf("%d",&num);
		i++;
		ptr = realloc(ptr,sizeof(int)*i);
		if(ptr == NULL)exit(1);
		ptr[i-1] = num;
	}
	if(num == -1)
	{
		for(int n =  0; n < i; n++)
		{
			printf("%d  ",ptr[n]);
		}
		puts("");
	}
	free(ptr);
	return 0;
}