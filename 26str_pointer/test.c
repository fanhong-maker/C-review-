#include<stdio.h>
int function(int* a,int* b)
{
        for(int i = 0; i<4; i++)
        {
                printf("aaaaaa\n");
                printf("%d\n",*a++);
        }
}
int main00(void)
{
        int arr[2][2]={{1,2},{3,4}};
        printf("%d\n",sizeof(arr));
        printf("%d\n",sizeof(arr[1]));
        printf("%d\n",sizeof(arr[1][1]));
        for(int i = 0; i<sizeof(arr[0])/sizeof(int); i++)
        {
                for(int j=0; j<sizeof(arr)/sizeof(arr[0]);j++)
                {
                        printf("%d   ",arr[i][j]);
                }
                printf("\n");
        }
        function(arr[],arr[][]);
        return 0;
        
}