/*
ʱ�䣺2020/12/18 12:20
�����޸ģ�2021/1/22 0:37
�༭�ˣ�chongqiu00
��Ŀ15�� ���������������Ƕ������ɴ��⣺
      ѧϰ�ɼ� >=90�ֵ�ͬѧ�� A ��ʾ�� 60-89 ��֮����� B ��ʾ�� 60 �����µ��� C��ʾ��
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