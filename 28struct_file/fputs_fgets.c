#include <stdio.h>
#include <stdlib.h>

int main ()
{
      FILE *fp1;
      FILE *fp2;
      char str[40];
      long i;
      
      fp1 = fopen("hello.txt","w");
      fp2 = fopen("hello1.txt","w");
      if(fp1 == NULL) 
      {
         perror("打开文件时发生错误");
         return(-1);
      }
      fputs("i love msj",fp1);
      i = ftell(fp1);
      printf("%ld",i);
      fclose(fp1);
      fp1 = fopen("hello.txt","r");
      if(fp1 == NULL) 
      {
         perror("打开文件时发生错误");
         return(-1);
      }
      fgets(str,20,fp1);
      fputs(str,fp2);
      fclose(fp1);
      fclose(fp2);
      return(0);
}