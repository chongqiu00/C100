/*
ʱ�䣺2020/12/18 12:39
�����޸ģ�2021/1/24 21:51
�༭�ˣ�chongqiu00
��Ŀ18�� �� s=a+aa+aaa+aaaa+aa...a��ֵ������ a ��һ�����֡�
      ���� 2+22+222+2222+22222(��ʱ���� 5 ������� )�������� ����м��̿��ơ�
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
Ϊ������������'+',ʹ�á�\b��.
ת���ַ���\b�����˸�(BS) ������ǰλ���Ƶ�ǰһ�С�
*/