/*
时间：2020/12/20 11:11
编辑人：chongqiu00
题目：  一个偶数总能表示为两个素数之和。
*/

#include <stdio.h>
#include <stdbool.h>

int Prime(int* prime, int number);
bool IsPrime(int number);

int main (int argc, int* argv[])
{
    int i, j, k, z;
    int count;

    for (i=2; i<100; i=i+2)
    {
        int prime[i];
        count = Prime(prime, i);

        // for (z=0; z<count; z++)
        // printf("%d ",prime[z]);
        // printf("\n");

        for (j=0; j<count-1; j++)
        {
            for (k=j+1; k<count-j; k++)
            {
                if (i == prime[j] + prime[k])
                {
                    printf("%d=%d+%d\n", i, prime[j], prime[k]);
                }
            }
        }
    } 
    
    return 0;
}

int Prime(int* prime, int number)
{
    int i, j=1;
    prime[0] = 1;
    for (i=3; i<number; i++)
    {
        if (IsPrime(i))
        {
            prime[j] = i;
            j++;
        }
    }
    return j;
}

bool IsPrime(int number)
{
    int i;
    
    for (i=2; i<number; i++)
    {
        if (number%i == 0)
        {
            return false;
        }
    }
    return true;
}