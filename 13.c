/*
ʱ�䣺2020/12/18 11:43
�����޸ģ�2021/1/21 15:11
�༭�ˣ�chongqiu00
��Ŀ13�� ��ӡ�����еġ�ˮ�ɻ���������ν��ˮ�ɻ�������ָһ����λ�������λ���������͵��ڸ�������
       ���磺 153 ��һ����ˮ�ɻ���������Ϊ 153=1 �����η��� 5 �����η��� 3 �����η���
*/

#include <stdio.h>
#include <math.h>

typedef int bool;
#define true 1
#define false 0

bool IsNarcissistic(int number);

int main (int argv, char* argc[])
{
    int range;
    for (range=101; range<1000; range++)
    {
        //printf("%d ", range);
       
        if (IsNarcissistic(range))
        {
            printf("%d ", range);
        }
    }
    return 0;
}

bool IsNarcissistic(int number)
{
    int a, b, c;
    //���
    a = number / 100;//��
    b = number / 10 % 10;//ʮ
    c = number % 100 % 10; //��

    //ȷ������
    if (pow(a, 3) + pow(b, 3) + pow(c, 3) == number)
   // if (a*a*a + b*b*b + c*c*c == number)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*
����1��
ͷ�ļ���
#include <math.h>
����ԭ�ͣ�
double pow(double x, double y);
�βΣ�
��xΪ�׵�y�η���
����ֵ��
�践��ֵΪ ret���� ret = x^y��

ʹ�� GCC ����ʱ�����-lm��

����2��
���á�/�� �� ��%�� ����һ�������Ĳ�֡�
 */
