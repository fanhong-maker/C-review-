//本代码以三只小猪称体重的案例来练习if判断语句
#include <stdio.h>
//if 常用的语句有三种
//if(表达式){}
//if(表达式){}  else{}
//if(表达式一){}  else if(表达式二){} else{}
int main(void)
{
        float a,b,c;
        printf("请分别输入三只小猪的重量:\n");
        scanf("%f,%f,%f",&a,&b,&c);
        if (a<=b)
        {
                if (a<=c)
                {
                        printf("第一只小猪最轻，体重为：%.2f\n",a);
                }
                else
                {
                        printf("第三只小猪最轻，体重为：%.2f\n",c);
                }
        }
        else 
        {
                if(b>=c)
                {
                        printf("第三只小猪最轻，体重为：%.2f\n",c);
                }   
                else
                {
                        printf("第二只小猪最轻，体重为：%.2f\n",b);
                }
        }
        return 0;
}


