/*
ʱ�䣺2020/12/18 13:15
�༭�ˣ�chongqiu00
��Ŀ21�����ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ����һ���ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬
    �ֶ����һ�����Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ�������� 10 ���������ٳ�ʱ����ֻʣ��һ�� �����ˡ����һ�칲ժ�˶��١� 

<����һ����ͨ����>
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