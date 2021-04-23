/*
时间：2020/12/18 12:20
近期修改：2021/1/22 0:37
编辑人：chongqiu00
题目15： 利用条件运算符的嵌套来完成此题：
      学习成绩 >=90分的同学用 A 表示， 60-89 分之间的用 B 表示， 60 分以下的用 C表示。
*/

#include <stdio.h>

void get_int(int* number);
char get_class(int number);

int main (int argv, char* argc[])
{
    int score;
    get_int(&score);
    printf("your class is %c.", get_class(score));

    return 0;
}

void get_int(int* number)
{
    while (1 != (scanf("%d", number)))
    {
        printf("you input is illeglity, please enter number again!\n");
        while ('\n' != getchar())
        {
            continue;
        }
    }
    while (*number<0 || *number>100)
    {
        printf("your input is not 0~100, please enter number again!\n");
        while (1 != (scanf("%d", number)))
        {
            printf("you input is illeglity, please enter number again!\n");
            while ('\n' != getchar())
            {
                continue;
            }
        }
    }
    return;
}

char get_class(int number)
{
    char ch;
    if (number<=60)
    {
        ch = 'C';
    }else if (number>60 && number<90)
    {
        ch = 'B';
    }else if (number>=90)
    {
        ch = 'A';
    }
    return ch;
}