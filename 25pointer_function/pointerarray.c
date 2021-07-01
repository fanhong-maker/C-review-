#include <stdio.h>
int main03(void)
{
        int a = 10;
        int b = 20;
        int c = 30;
        //指针数组中存储的元素都是指针（地址）
        int* arr[] = {&a,&b,&c};
        //int* arr[] = {10,20,30};
        for(int i = 0; i < 3; i++)
        {
                printf("%d\n",*arr[i]);
                printf("%d\n",*(arr+i));    
        }
        printf("指针数组的大小：%d\n",sizeof(arr));
        //注意：数组元素所占内存空间的大小与数组类型相关，但对指针数组而言，数组内的元素都是指针类型变量，
        //故每个元素所占内存大小都是8位（64位操作系统下）
        printf("指针元素的大小：%d\n",sizeof(arr[0]));  
        return 0;
}
int main04(void)
{
        int a[] = {1,2,3};
        int b[] = {4,5,6};
        int c[] = {7,8,9};
        int* arr[] = {a,b,c};
        for ( int i = 0; i < sizeof(arr)/sizeof(arr[0]); i ++)
        {
                printf("%d\n",*arr[i]);
        }
        //指针数组是一个特殊的二维数组模型
        //指针数组对应于二级指针
        for(int i = 0; i < sizeof(arr)/sizeof(arr[0]);i++)
        {
                for (int j = 0; j < sizeof(a)/sizeof(a[0]); j++)
                {
                        //printf("%d  ",arr[i][j]);
                        //printf("%d  ",*(arr[i]+j));
                        printf("%d  ",*(*(arr+i)+j));
                }
                puts("");
        }
        return 0;
}
int main05(void)
{
        int a[] = {1,2,3};
        int b[] = {4,5,6};
        int c[] = {7,8,9};
        int* arr[] = {a,b,c};
        //指针数组和二级指针建立关系
        int** p = arr;
        printf("%d\n",sizeof(arr));
        for (int i = 0; i < sizeof(arr)/sizeof(arr[0]);i++)
        { 
                for(int j = 0; j < sizeof(a)/sizeof(a[0]);j++)
                {
                        //一级指针加偏移量相当于跳过元素，二级指针加偏移量相当于跳过一个一维数组
                        //printf("%d  ",*(*(p+i)+j));   //第一种取值方式
                        //printf("%d  ",p[i][j]);         //第二种取值方式   
                }
                puts("");
        }
        return 0; 
}
