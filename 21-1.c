/*
时间：2020/12/18 13:15
编辑人：chongqiu00
题目21：猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个第二天早上又将剩下的桃子吃掉一半，
    又多吃了一个。以后每天早上都吃了前一天剩下的一半零一个。到第 10 天早上想再吃时，见只剩下一个 桃子了。求第一天共摘了多少。 

<方法一：普通方法>
*/

#include <stdio.h>

int count(int day);

int main (int argc, int* argv[])
{
    printf("frist day has peach %d", count(10));
    return 0;
}

int count(int day)
{
    int sum = 1;
    while (1 != day)
    {
        sum = (sum + 1) * 2;
        day--;
    }
    return sum;
}