/*
ʱ�䣺2020/12/18 14:25
�༭�ˣ�chongqiu00
��Ŀ24�� ��һ�������У� 2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ 20 ��֮�͡�
*/

#include <stdio.h>

int main (int argc, int* argv[])
{
    float b = 2.0;
    float a = 1.0;
    float b_a = 2.0;

    int n = 3;
    while (1 != n)
    {
        b = a + b;
        a++;
        b_a += b/a;
        n--;
    }
    printf("b_a sum %f\n", b_a);

    return 0;
}