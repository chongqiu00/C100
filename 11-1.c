/*
时间：2020/12/18 11:19
编辑人：chongqiu00
题目11：有一对兔子，从出生后第 3 个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，
假如兔子都不死，问每个月的兔子总数为多少？
月：1   2   3   4   5   6
数：1   1   2   3   5   8

<方法一>
*/

#include <stdio.h>

int main (int argc, int* argv[])
{
    int month;
    int count;
    int a, b;
    int temp;
    a = b = 1;

    printf("please enter month:");
    scanf("%d", &month);

    if ( 1 == month || 2 == month)
    {
       count = 1;
    }
    else 
    {
        month -= 2;
        while (month)
        {
            temp = a + b;
            a = b;
            b = temp;
            month--;
        }
    }

    printf("rabbit have %d", b);
    return 0;
}

/*
总结：
找每月兔子对数的规律。
其实质就是斐波那契数列{1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ... };
从第三项开始数列的通项是：a(n) = a(n-1) + a(n-2);
*/