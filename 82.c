/*
ʱ�䣺2020/12/19 22:45
�༭�ˣ�chongqiu00
��Ŀ�� �˽���ת��Ϊʮ����
*/

#include <stdio.h>

int main (int argc, int* argv[])
{
    int number;
    int n;
    int sum = 0;
    printf("please enter one octonary number:");
    scanf("%d", &number);
    printf("octonary number %d ", number);

    n = number % 10;
    sum = n;
    number /= 10;

    while (0 != number)
    {
        n = number % 10;
        sum += n * 8;
        number /= 10;
    }

    printf("change decimalism number %d\n", sum);
    return 0;
}