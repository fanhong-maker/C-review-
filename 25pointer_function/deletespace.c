//本案例是删除字符串中的空格

#include<stdio.h>
// void deletespace(char* ch)
// {
//         char ch1[100] = {0};
//         int i = 0;
//         int j = 0;
//         while (*ch != '\0')
//         {
//                 if (*ch != ' ') 
//                 {
//                         ch1[i] = ch[j];
//                         printf("%d  ",i);
//                         //*p1++ = *ch;
//                         //printf("%c ",*--p1);
//                         i++;
//                 }
//                 ch++;
//         } 
//         j = 0;
//         j = 0;
//         while(ch1 != 0)
//         {
//                 ch[j] = ch1[i];
//         }
// }
void deletespace(char* ch)
{
        char* p = ch;
        // int a = p;
        // int b = ch;
        while (*ch != '\0')
        {
                if(*ch != ' ')
                {
                        *p = *ch;
                        p++;
                }
                ch++;
        }
         *p = '\0';

}
int main09()
{
        char ch[] = "h  e ll o  wo rl d";
        deletespace(ch);
        printf("%s\n",ch);
        return 0;
}