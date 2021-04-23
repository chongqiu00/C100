/*
时间：2020/12/18 17:38
编辑人：chongqiu00
题目36： 求 100 之内的素数
*/

#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int number);

int main (int argc, int* argv[])
{
    int i;
    for (i=1; i<101; i++)
    {
        if (IsPrime(i))
        {
            printf("%d\t", i);
        }
    }
    return 0;
}

bool IsPrime(int number)
{
    int i;
    for (i=2; i<number; i++)
    {
        if (0 == number%i)
        {
            return false;
        }
    }
    return true;
}