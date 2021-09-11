//汉诺塔的递归思想
//假若现在第一针有64盘，须将其移动到第三针，则可将步骤分解为
/*1.将前63个盘移动到第二针上
  2.将第64盘移动到第三针上
  3.将第二针上的63盘移动到第三针上
  步骤一又可分解为：
  1.将第一针前62个盘移动到第3针上
  2.将第63盘移动到第二针上
  3.将第一针上的62盘移动到第二针上
  步骤三又可分解为：
  1.将第二针的62个盘移动到第1针上
  2.将第63盘移动到第三针上
  3.将第一针上的62盘移动到第三针上
*/
//具体代码实现如下
#include<stdio.h>
int hanoi(int,char,char,char);
int hanoi(int num,char a,char b,char c)
{       
        if(num == 1)
        {
                printf("%c--->%c\n",a,c);
        }
        else
        {
                hanoi(num-1,a,c,b);
                printf("%c--->%c\n",a,c);
                hanoi(num-1,b,a,c);
        }
}
int main(void)
{
        int num;
        printf("几层汉诺塔：");
        scanf("%d",&num);
        hanoi(num,'a','b','c');
        return 0;
}