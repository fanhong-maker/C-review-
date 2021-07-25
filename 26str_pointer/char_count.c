//本代码实现计算一长字符串中各个字符出现的次数
//设计思路1为：先找出该字符串中包含的不重复的字符，在计算这些字符在字符串中出现的次数。
//设计思路2为：分析得字符都包含在ASCALL中，既是0-127的范围中，直接建立一个127（0w为空字符）Int类型的数组count
//索引下标即是对应的字符（如97对应'a'），索引值对应出现次数
#include<stdio.h>
/*#############################################
                    思路一
#############################################*/
char* find_char(char* str, char* ch)
{
        char* p1 = str;
        char* p2 = ch;
        char* dest = ch;
        while(*p1 != '\0')
        {
                while(*p1 != *p2 && *p2 != '\0')
                {
                        p2++;
                }     
                if(*p2 == '\0')
                {
                        *dest = *p1;
                        dest++;
                }  
                p2 = ch;
                p1++; 
        } 
        return dest;
}
int* count_char1(char* str,char* ch)
{
        char* p1 = ch;
        char* p2 = str;
        int count[127];
        int* p = count;
        int i = 0;
        int t = 0;
        while(*p1 != '\0')
        {
                while(*p2)
                {
                        if(*p1 == *p2)
                        {
                                t++;
                        }
                        p2++;
                }
                p1++;
                p2 = str;
                count[i] = t;
                t = 0;
                i++;
        }
        printf("%d\n",count[2]);
        return p;
}
int main(void)
{
        int i = 0;
        int *count;
        char* str = "@hello world, fanhong love miaosijia forever!";
        char ch1[127] = "";     //定义一个空的字符串数组
        find_char(str, ch1);
        printf("%s\n",ch1);
        count = count_char1(str,ch1);
        while(ch1[i])
        {
                printf("%c出现的次数为：%d\n",ch1[i],count[i]);
                i++;
        }
        return 0; 
}

/*#############################################
                    思路二
#############################################*/
int count_char2(char* str,int* num)
{
        if (str == NULL)
        {
                return 1;
                printf("输入的字符串为空字符");
        }
        char* p1 = str;  
        int* p2 = num;  
        while(*p1)
        {
                p2[*p1]++;
                p1++;
        }
        return 0;
}
int main0102(void)
{
        int i = 0;
        int count[127] = {0};   //定义一个空的int类型数组
        char* str = "@hello world, fanhong love miaosijia forever!";
        count_char2(str,count);
        while(i != 127)
        {
                if(count[i] != 0)
                {
                        printf("%c出现的次数为：%d\n",i,count[i]);
                }
                i++;
        }
        
}
