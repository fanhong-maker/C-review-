#include<stdio.h>
#include<stdlib.h>
int main(void)
{
        FILE* fp;
        FILE* fp1;
        char s[15];
        char  ch;
        if((fp = fopen("hello.txt","r")) == NULL)
        {
                printf("打开文件失败\n");
                exit(EXIT_FAILURE);
        }
        //fgets(s,13,fp);
        if((fp1 = fopen("world.txt","a")) == NULL)
        {
                printf("打开文件失败\n");
                exit(EXIT_FAILURE);
        }
        //fputs(s,fp1);
        //printf("%d",EOF);
        while(1)
        {
                ch = fgetc(fp);
                if(feof(fp))
                {
                        break;
                }
                fputc(ch, fp1);      
        }
        fclose(fp);
        fclose(fp1);
        return 0;
}