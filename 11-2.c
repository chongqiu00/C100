/*
时间：2021/1/21 14:40
编辑人：chongqiu00
题目11：有一对兔子，从出生后第 3 个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，
假如兔子都不死，问每个月的兔子总数为多少？
月：1   2   3   4   5   6
数：1   1   2   3   5   8

<方法二>

*/
#include <stdio.h>

int Fibonacci(int cout);
void get_int(int* number);

int main (void)
{
    int month;
    printf("pease enter cout:");
    get_int(&month);
    printf("%d = %d\n",month, Fibonacci(8));
    return 0;
}

int Fibonacci(int cout)
{
    int number = 1;
    if (1 == cout || 2 == cout)
    {
        return number;
    }
    else
    {
        number = Fibonacci(cout - 1) + Fibonacci(cout - 2);
    }
    
    return number;
}

void get_int(int* number)
{
    while (1 != scanf("%d", number))
    {
        printf("input is illeglity, please enter again.");
        while (getchar() != '\n')
        {
            continue;
        }
    }
    return;
}