//快速排序：通过一趟排序将待排序数据分割成独立的两部分，其中一部分的所有元素均比另一部分的元素小
//然后分别对这两部分继续进行排序，重复上述步骤直到排序完成
#include<stdio.h>
void quick_sort(int list[],int left,int right)
{
        int i = left;
        int j = right;
        int temp;
        int pivot = (left + right)/2;
        while(i < j)
        {
                while(list[i]<list[pivot])
                {
                        i++;
                }
                while(list[j]>list[pivot])
                {
                        j--;
                }
                if(i <= j)
                {
                        temp = list[i];
                        list[i] = list[j];
                        list[j] = temp;
                        i++;
                        j--;
                }
        }
        if(j > left)
        {
                quick_sort(list, left, j);
        }
        if(i < right)
        {
                quick_sort(list, i, right);
        }
}
int main(void)
{
        int list[] = {1,8,98,56,6,3,0,2,89,100,56};
        int right = sizeof(list)/sizeof(int)-1;
        int left = 0;
        quick_sort(list, left, right);
        for (int i = 0;i < sizeof(list)/sizeof(int);i++)
        {
                printf("%d  ",list[i]);
        }
        return 0;
}