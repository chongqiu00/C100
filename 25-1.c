/*
ʱ�䣺2020/12/18 14:38
�༭�ˣ�chongqiu00
��Ŀ25�� �� 1+2!+3!+...+20! �ĺ�

<����һ���ݹ�>
*/
#include <stdio.h>

int Factorial(int number);

int main(int argc, int* argv[])
{
    int i;
    long sum = 0;
    for (i=1; i<21; i++)
    {
        sum += Factorial(i);
    }
    printf("1+2!+3!+...+20!=%ld\n", sum);
    return 0;
}

int Factorial(int number)
{
    long total=1;
    if (1 == number)
    {
        return total;
    }
    else
    {
        total = number*Factorial(number-1);
    }
    
}