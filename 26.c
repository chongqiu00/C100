/*
ʱ�䣺2020/12/18 14:38
�༭�ˣ�chongqiu00
��Ŀ26�� ���õݹ鷽���� 5!��
*/

#include <stdio.h>

int Factorial(int number);

int main (int argc, int* argv[])
{
    printf("5!=%d\n",Factorial(5));
    return 0;
}

int Factorial(int number)
{
    int total=1;
    if (1 == number)
    {
        return total;
    }
    else
    {
        total = number*Factorial(number-1);
    }
    
}