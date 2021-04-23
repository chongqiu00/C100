/*
时间：2020/12/18 14:38
编辑人：chongqiu00
题目26： 利用递归方法求 5!。
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