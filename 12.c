/*
ʱ�䣺2020/12/18 11:35
�����޸ģ�2021/1/21 14:49
�༭�ˣ�chongqiu00
��Ŀ12�� �ж� 101-200 ֮���ж��ٸ����������������������
*/

#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int numer);
int main (int argv, char* argc[])
{
    int range;

    for (range=101; range<201; range++)
    {
        if (IsPrime(range))
        {
            printf("%d ", range);
        }
    }

    return 0;
}

bool IsPrime(int number)
{
    int range;
    int i = 0;
    for (range=2; range<number; range++)
    {
        if (0 == number%range)
        {
            i = 1;
            return false;
        }
    }
    return true;
}


/*
���ۣ�
������ֻ��������1���Լ�����
*/