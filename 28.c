/*
ʱ�䣺2020/12/18 14:40
�༭�ˣ�chongqiu00
��Ŀ28�� 
��5��������һ���ʵ�����˶����ꣿ
��˵�ȵ�4���˴�2�ꡣ�ʵ�4������������˵�ȵ�3���˴�2�ꡣ
�ʵ������ˣ���˵�ȵ�2�˴����ꡣ�ʵ�2���ˣ�˵�ȵ�һ���˴����ꡣ
����ʵ�һ���ˣ���˵��10�ꡣ���ʵ�����˶��
*/

#include <stdio.h>
int Age(int people);

int main (void)
{
    printf("five people's age is %d\n", Age(5));
    return 0;
}

int Age(int people)
{
    int age = 10;
    if (1 == people)
    {
        return age;
    }
    else
    {
        age = Age(people-1) + 2;
    }
    
}