//本代码实现某一字符串在另一个较长字符串中出现的次数
#include<stdio.h>
int str_count(char* ch1, char* ch2, const int len)
{
        int i = 0;
        int count=0;
        char* p1 = ch1;
        char* p2 = ch1;
        char* dest1 = ch2;
        //char* dest2 = ch2;
        while(*p1 != '\0')
        {
                p2 = p1;
                while(*p1 == *dest1 && *p1 != '\0')
                {
                        i++;
                        p1++;
                        dest1++;
                } 
                printf("i=%d\n",i);
                if(i == len)
                {
                        count++;
                        //p2+=len-1;
                }
                i = 0;
                dest1 = ch2;
                p1 = p2;
                p1++;
        }
        return count;
}
int main(void)
{
        int count, len;
        char str1[] = "aaaaaasddfghasdzxcasdqweasdrtyasdvbn";
        char str2[] = "asd";
        len = sizeof(str2)-1;
        printf("%d\n",len);
        count = str_count(str1,str2,len);
        printf("%s出现的次数为：%d\n",str2,count);
        return 0;
}