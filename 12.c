/*
时间：2020/12/18 11:35
近期修改：2021/1/21 14:49
编辑人：chongqiu00
题目12： 判断 101-200 之间有多少个素数，并输出所有素数。
*/

#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int numer);
int main (int argv, char* argc[])
{
    int range;

    for (range=101; range<201; range++)
    {
        if (IsPrime(range))
        {
            printf("%d ", range);
        }
    }

    return 0;
}

bool IsPrime(int number)
{
    int range;
    int i = 0;
    for (range=2; range<number; range++)
    {
        if (0 == number%range)
        {
            i = 1;
            return false;
        }
    }
    return true;
}


/*
结论；
素数是只可以整除1和自己本身。
*/