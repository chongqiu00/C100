/*
时间：2020/12/18 12:39
近期修改：2021/1/24 21:51
编辑人：chongqiu00
题目18： 求 s=a+aa+aaa+aaaa+aa...a的值，其中 a 是一个数字。
      例如 2+22+222+2222+22222(此时共有 5 个数相加 )，几个数 相加有键盘控制。
*/

#include <stdio.h>

void get_int(int* number);
int add(int number, int count);

int main (int argv, char* argc[])
{
    int number, count;

    printf("please enter a number:");
    get_int(&number);
    printf("please enter count:");
    get_int(&count);
    printf("sum=%d\n", add(number, count));

    return 0;
}

void get_int(int* number)
{
    while (1 != (scanf("%d", number)))
    {
        printf("your input is illeglity!please enter again!\n");
        while ( '\n' != getchar() )
        {
            continue;
        }
    }
    return;
}

int add(int number, int count)
{
    int temp = number;
    int sum = 0;
    int i = number;

    while(0 != count)
    {
        sum += i;
        i = i*10 + temp;
        count--;
    }
    return sum;
}
/*
为了消除最后项的'+',使用‘\b’.
转义字符‘\b’是退格(BS) ，将当前位置移到前一列。
*/