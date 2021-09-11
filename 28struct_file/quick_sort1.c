#include<stdio.h>
void quicksort(int*,int,int);
void quicksort(int *p, int left, int right)
{
        int i = left;
        int j = right;
        int temp;
        int pvoid = (right + left)/2;
        while(i<=j)
        {
                while(p[i] < p[pvoid])
                {
                        i++;
                }
                while(p[j] > p[pvoid])
                {
                        j--;
                }
                if(i<=j)
                {
                        temp = p[i];
                        p[i] = p[j];
                        p[j] = temp;
                        i++;
                        j--;
                }
        }
        if(i < right)
        {
                quicksort(p, i, right);
        }
        if(j > left)
        {
                quicksort(p, left, j);
        }
}
int main()
{
        int list[] = {1,8,98,56,6,3,0,2,89,100,56};
        int right = sizeof(list)/sizeof(int)-1;
        int left = 0;
        quicksort(list, left, right);
        for (int i = 0;i < sizeof(list)/sizeof(int);i++)
        {
                printf("%d  ",list[i]);
        }
        return 0;
}