/*
时间：2020/12/19 14:40
编辑人：chongqiu00
题目30： 一个 5 位数，判断它是不是回文数。
即 12321 是回文数，个位与万位相同，十位与千位相同。
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