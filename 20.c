/*
时间：2020/12/18 12:37
编辑人：chongqiu00
题目20： 一球从 100 米高度自由落下，每次落地后反跳回原高度的一半；
      再落下，求它在第 10 次落地时，共经过多少 米？第 10 次反弹多高？ 
*/

#include <stdio.h>
int main (int argc, int* argv[])
{
    int i;
    float sum_high = 100.0, high = 100.0;
    for ( i = 0; i < 2 ; i++ )
    {
        high /= 2;
        sum_high += high*2;
    }
    high /= 2;
    printf("sum_high=%f high=%f", sum_high, high);
    return 0;
}