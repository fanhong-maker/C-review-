//指针禾数组：本案例用于展示指针和数组之间的异同
#include<stdio.h>
void bubblesort(int arr[], int lenth);
int main01(void)
{
        //=======数组和指针的相同点======//
        //数组名是一个常量，不允许赋值，里面存入数组第一个元素的地址
        unsigned int arr[] = {1,2,3,4,5,7,8,'a','b','c'};
        //定义了一个指向数组的指针
        unsigned int* p = arr;
        //第一种访问数组的方法
        printf("通过下标访问数组\n");
        for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
        {
                //printf("%d\t",arr[i]);
                printf("%d\t",*(arr+i));
        }
        printf("\n");
        //第二种访问数组的方法
        printf("第一种通过指针访问数组\n");
        for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
        {
                printf("%d\t",p[i]);
        }
        printf("\n");
        printf("第二种通过指针访问数组\n");
        for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
        {
                //printf("%d\t",*(p+i));
                printf("%d\t",*(p++));  //用p++遍历数组到最后p将变成野指针
        }
        printf("\n");
        int step = p - arr;  //两指针相减得到指针的偏移量,为int类型
        printf("%d\n",step);
        //通过上述案例可以看出，对数组的访问起始就是通过首地址加偏移量进行访问
        //如arr[2],既是常量arr中所存的内存地址加两个偏移量
        //arr[-1]将引起数组越界，相当于在数组arr的首地址减一引起越界，但合适使用指针p[-2]将不会引起数组越界，因为指针p是一个变量
        //偏移量：对int类型的数组来说一个偏移量等于在原地址上增加了4（sizeof(int),四个字节）个地址。既是p+1等价于指针变量p的地址值增加了4
        //同理对于char类型的数组来说一个偏移量等于在原地址上增加了1个地址
        //============数组和指针的不同点============//
        //p是变量，arr是常量
        //p是一个指针为8个字节(64位操作系统)大小，arr是一个常量为40个字节大小
        printf("指针类型大小%d\n",sizeof(p));
        printf("数组大小%d\n",sizeof(arr));
        //============用指针完成冒泡排序============//
        int arr1[] = {2, 5, 8, 7, 10, 1, 6, 3, 4, 9};
        int lenth = sizeof(arr1)/sizeof(arr[1]);
        bubblesort(arr1, lenth);
        for(int i = 0;i<lenth;i++)
        {
                printf("%d\t",arr1[i]);
        }
        printf("\n");
        return 0;
}
void bubblesort(int* p, int lenth)      //数组作为函数参数将退化为指针，丢失数组的精度
{
/*         printf("%d\n",sizeof(arr));
        for (int i = 0; i < lenth -1; i++)
        {
                for(int j = 0; j < lenth-i-1; j++)
                {
                        if(arr[j]>arr[j+1])
                        {
                                int temp;
                                temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j+1] = temp;
                        }
                        
                }
        } */
        for (int i = 0; i < lenth -1; i++)
        {
                for(int j = 0; j < lenth-i-1; j++)
                {
                        if(*(p+j)>*(p+j+1))
                        {
                                int temp;
                                temp = *(p+j);
                                *(p+j) = *(p+j+1);
                                *(p+j+1) = temp;
                        }
                        
                }
        } 
}
