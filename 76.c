/*
时间：2020/12/19 20:29
编辑人：chongqiu00
题目： 编写一个函数，
输入 n 为偶数时，调用函数求 1/2+1/4+...+1/n,
当输入 n 为奇数时，调用函数 1/1+1/3+...+1/n
( 利用指针函数 )
*/

#include <stdio.h>

//定义一个函数指针
typedef void (*vi)(int n);

void call_fp(int n, vi fp);

void fp_1(int n);
void fp_2(int n);

int main (int argc, int* argv[])
{
   int n;
    printf("请输入一个正整数：");
    scanf("%d", &n);
    if (n%2)
    {
        call_fp(n, fp_2);
    }
    else
    {
        call_fp(n, fp_1);
    }
    return 0;
}

void call_fp(int n, vi fp)
{
   fp(n);
}

void fp_1(int n)
{
    int i;
    float sum = 0.0;
    for (i=2; i<n+1; i=i+2)
    {
        sum += 1.0/i;
    }
    printf("1/2+1/4+...+1/n=%f\n", sum);
}

void fp_2(int n)
{
    int i;
    float sum = 0.0;
    for (i=1; i<n+1; i=i+2)
    {
        sum += 1.0/i;
    }
    printf("1/1+1/3+...+1/n=%f\n", sum);
}

