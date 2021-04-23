/*
时间：2020/12/18 11:54
近期修改：2021/1/22 0:32
编辑人：chongqiu00
题目14： 将一个正整数分解质因数。例如：输入 90,打印出 90=2*3*3*5 。
*/

//方式一：不显示出次幂形式
#include <stdio.h>

void ResolvePrime(int number);

int main (int argc, int* argv[])
{
    int number;
    printf("please enter number:");
    scanf("%d", &number);

    ResolvePrime(number);
    
    return 0;
}

void ResolvePrime(int number)
{
    int i;
    printf("%d=", number);
    for (i = 2; i < number; )
    {
        if (number % i)
        {
            i++;
            continue;
        }
        else
        {
            number /= i;
            printf("%d*", i);
            i = 2;
        }

    }
    printf("%d", number);

    return;
}

//方式二：显示出次幂形式
#include <stdio.h>

void ResolvePrimer(int number);
void get_int(int* number);

int main (int argv, char* argc[])
{
    int number;
    get_int(&number);
    printf("number = %d\n", number);
    ResolvePrimer(number);
    return 0;
}

void get_int(int*  number)
{
    while(1 != (scanf("%d", number)))
    {
        printf("you input nnumber is illeglity, please enter number again.\n");
        while ('\n' != getchar())
        {
            continue;
        }
    }
    return;
}

void ResolvePrimer(int number)
{
    int range;
    int count = 0;
    int temp = number;
    
    for (range=2 ; range<=number; )
    {
        if (0 == temp % range)
        {
            temp /= range;
            count++;
        }
        else
        {
            if (count == 1 && temp != 1)
            {
                printf("%d*", range);
            }else if(count>1 && temp != 1)
            {
                printf("%d^%d*", range, count);
            }else if (count == 1 && temp == 1)
            {
                printf("%d\n", range);
            }else if (count>1 && temp == 1)
            {
                printf("%d^%d\n", range, count);
            }
            count = 0;
            range++;
        }
    }
    return;
}

