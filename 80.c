/*
ʱ�䣺2020/12/19 21:37
�༭�ˣ�chongqiu00
��Ŀ�� ��̲����һ�����ӣ���ֻ�������֡���һֻ���Ӱ��������ƾ�ݷ�Ϊ��ݣ�����һ����
��ֻ���ӰѶ��һ�����뺣�У�������һ�ݡ��ڶ�ֻ���Ӱ�ʣ�µ�������ƽ���ֳ���ݣ���
����һ������ͬ���Ѷ��һ�����뺣�У�������һ�ݣ����������ġ�����ֻ���Ӷ���������
�ģ��ʺ�̲��ԭ�������ж��ٸ����ӣ�
*/

#include <stdio.h>

int PeachCount(int n);
#define N 5
int main (int argc, int* argv[])
{
    printf("There were %d peaches.", PeachCount(N));

    return 0;
}

int PeachCount(int n)
{
    int sum = 1;
    //��׼����
    if (n == 1)
    {
        return sum = 1 * N + 1;
    }
    else//�ݹ�����
    {
        sum = PeachCount(n-1) * N + 1;
    }
    
}