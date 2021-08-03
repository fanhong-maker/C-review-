#include<stdio.h>
#include<stdlib.h>
void fun(int** p)
{
        printf("%p\n",p);
        printf("%p\n",&p);
        *p = (int*)malloc(sizeof(int)*10);
        printf("%p\n",*p);

}
int main()
{
        int* p = NULL;  //空指针可以被无限free(),野指针不行
        printf("%p\n",p);
        printf("%p\n",&p);
        fun(&p);
        printf("%p\n",p);
        printf("%p\n",&p);
        for(int i = 0; i < 10; i++)
        {
                p[i] = i;
        }
        free(p);
        return 0;
}