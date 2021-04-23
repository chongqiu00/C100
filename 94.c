/*
时间：2020/12/18 22:24
编辑人：chongqiu00
题目： 时间函数举例 4.
一个猜数游戏，判断一个人反应快慢。（版主初学时编的）
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, int* argv[])
{
    char c;
    clock_t start,end;
    time_t a,b;
    double var;
    int i,guess;
    srand(time(NULL));
    printf("do you want to play it.('y' or 'n') \n");
loop:
    while((c=getchar())=='y')
    {
        i=rand()%100;
        printf("i=%d\n", i);
        printf("\nplease input number you guess:\n");
        //开始计时
        start=clock();
        a=time(NULL);
        scanf("%d",&guess);
        while(guess!=i)
        {
             if(guess>i)
            {
                printf("please input a little smaller.\n");
                scanf("%d",&guess);
            }
            else
            {
                 printf("please input a little bigger.\n");
                 scanf("%d",&guess);
             }
        }
        //结束计时
        end=clock();
        b=time(NULL);
        printf("It took you %6.3f seconds\n",var=(double)(end-start)/18.2);
        printf("it took you %6.3f seconds\n\n",difftime(b,a));
        if(var<15)
        printf("You are very clever!\n\n");
        else if(var<25)
        printf("you are normal!\n\n");
            else
            printf("you are stupid! \n\n");
        printf("Congradulations!\n\n");
        printf("The number you guess is %d",i);
    }
    
    printf("\ndo you want to try it again?(\"yy\".or.\"n\")\n");
    if((c=getchar())=='y')
    goto loop;

} 