/*
ʱ�䣺2021/1/21 14:40
�༭�ˣ�chongqiu00
��Ŀ11����һ�����ӣ��ӳ������ 3 ������ÿ���¶���һ�����ӣ�С���ӳ����������º�ÿ��������һ�����ӣ�
�������Ӷ���������ÿ���µ���������Ϊ���٣�
�£�1   2   3   4   5   6
����1   1   2   3   5   8

<������>

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