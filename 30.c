/*
ʱ�䣺2020/12/19 14:40
�༭�ˣ�chongqiu00
��Ŀ30�� һ�� 5 λ�����ж����ǲ��ǻ�������
�� 12321 �ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ��
*/
#include <stdio.h>
#include <stdbool.h>

bool IsPalindromic(int number);

int main(int argc, int* argv[])
{
    int i;
    for (i=10000; i<100000; i++)
    {
        if (IsPalindromic(i))
        {
            printf("%d\t", i);
        }
    }
    return 0;
}

bool IsPalindromic(int number)
{
    int number_1 = number/10000;
    int number_2 = number/1000%10;
    int number_4 = number/10%10;
    int number_5 = number%10;
    if (number_1 == number_5 && number_2 == number_4)
    {
        return true;
    }
    else
    {
        return false;
    }
}