/*
ʱ�䣺2020/12/18 11:19
�༭�ˣ�chongqiu00
��Ŀ11����һ�����ӣ��ӳ������ 3 ������ÿ���¶���һ�����ӣ�С���ӳ����������º�ÿ��������һ�����ӣ�
�������Ӷ���������ÿ���µ���������Ϊ���٣�
�£�1   2   3   4   5   6
����1   1   2   3   5   8

<����һ>
*/

#include <stdio.h>

int main (int argc, int* argv[])
{
    int month;
    int count;
    int a, b;
    int temp;
    a = b = 1;

    printf("please enter month:");
    scanf("%d", &month);

    if ( 1 == month || 2 == month)
    {
       count = 1;
    }
    else 
    {
        month -= 2;
        while (month)
        {
            temp = a + b;
            a = b;
            b = temp;
            month--;
        }
    }

    printf("rabbit have %d", b);
    return 0;
}

/*
�ܽ᣺
��ÿ�����Ӷ����Ĺ��ɡ�
��ʵ�ʾ���쳲���������{1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ... };
�ӵ����ʼ���е�ͨ���ǣ�a(n) = a(n-1) + a(n-2);
*/