/*
ʱ�䣺2020/12/18 12:37
�༭�ˣ�chongqiu00
��Ŀ20�� һ��� 100 �׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻
      �����£������ڵ� 10 �����ʱ������������ �ף��� 10 �η�����ߣ� 
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