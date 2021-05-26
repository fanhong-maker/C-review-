//冒泡排序
#include<stdio.h>

int main(void)
{
        int temp,arr[] = {10,-19,89,100,8,-189,200,8,3,1};
        for (int j = 0; j < sizeof(arr)/sizeof(arr[1])-1; j++)
        {
                for(int i = 0; i < sizeof(arr)/sizeof(arr[1])-1-j; i++)
                {
                        //从小到大
                        // if(arr[i] > arr[i+1])
                        // {
                        //         temp = arr[i];
                        //         arr[i] = arr[i+1];
                        //         arr[i+1] = temp;
                        // }
                        //从大到小
                        if(arr[i] < arr[i+1])
                        {
                                temp = arr[i];
                                arr[i] = arr[i+1];
                                arr[i+1] = temp;
                        }
                }
        }
        for(int p = 0; p < sizeof(arr)/sizeof(arr[1]); p++)
        {
                printf("%d\n",arr[p]);
        }
        return 0;
}


