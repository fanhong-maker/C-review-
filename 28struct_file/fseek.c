//本代码用于学习文件任意位置读取
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Stu
{
        char name[40];
        char ID[10];
        int score;
        char m;
};
int main(void)
{
        struct Stu *read;
        struct Stu sb;
        FILE *fp1;
        FILE *fp2;
        char name[40];
        char ID[10];
        int score;
        read = (struct Stu*)malloc(sizeof(struct Stu));
        read->m = '\n';
        fp1 = fopen("students.txt","w"); 
        if(fp1 == NULL)
        {
                printf("文件打开失败\n");
                exit(EXIT_FAILURE);
        }
        for(int i = 1; i < 4; i++)
        {
                printf("请输入第%d位同学的信息\n",i);
                printf("姓名：");
                scanf("%s",name);
                printf("学号：");
                scanf("%s",ID);
                printf("成绩：");
                scanf("%d",&score);
                strcpy(read->name,name);
                strcpy(read->ID,ID);
                read->score = score;
                fwrite(read, sizeof(struct Stu), 1, fp1);
        }
        fclose(fp1);
        fp1 = fopen("students.txt","r"); 
        if(fp1 == NULL)
        {
                printf("文件打开失败\n");
                exit(EXIT_FAILURE);
        }
        //feek()函数功能是设置文件读取的位置，SEEK_SET表示从文件开头读取，SEEK_END表示从文件某位读取
        //SEEK_CUR表示从当前位置开始读取，整数 1 设置偏移量
        fseek(fp1,sizeof(struct Stu),SEEK_SET);
        fread(&sb, sizeof(struct Stu), 1, fp1);
        printf("%s(%s)的成绩是：%d\n",sb.name,sb.ID,sb.score);
        return 0;
}