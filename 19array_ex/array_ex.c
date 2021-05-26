//本代码有两个案例
//第一个案例通过找10只小猪最大体重来学习巩固数组的相关知识点
//第二个案例将一个数组倒置
#include<stdio.h>
#define SIZE 10
 int main01(void)
 {
        int arr[SIZE];
        int max = 0;
        for (int i = 0; i < SIZE; i++)
        {
                scanf("%d",&arr[i]);
        }
        for (int j = 0; j < SIZE; j++)
        {
                if(max < arr[j])
                {
                        max = arr[j];
                }
        }
        printf("最重的小猪体重是：%d\n",max);
        return 0;
 }
int main(void)
{
        int arr1[] = {1,2,3,4,5,6,7,8,9,10};
        int temp;
        for (int i = 0, j = sizeof(arr1)/sizeof(arr1[0])-1; i < j; i++,j--)
        {
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
        }
        for (int p = 0; p < sizeof(arr1)/sizeof(arr1[0]); p++)
        {
                printf("%d\n",arr1[p]);
        }
        return 0;
}