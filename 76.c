/*
ʱ�䣺2020/12/19 20:29
�༭�ˣ�chongqiu00
��Ŀ�� ��дһ��������
���� n Ϊż��ʱ�����ú����� 1/2+1/4+...+1/n,
������ n Ϊ����ʱ�����ú��� 1/1+1/3+...+1/n
( ����ָ�뺯�� )
*/

#include <stdio.h>

//����һ������ָ��
typedef void (*vi)(int n);

void call_fp(int n, vi fp);

void fp_1(int n);
void fp_2(int n);

int main (int argc, int* argv[])
{
   int n;
    printf("������һ����������");
    scanf("%d", &n);
    if (n%2)
    {
        call_fp(n, fp_2);
    }
    else
    {
        call_fp(n, fp_1);
    }
    return 0;
}

void call_fp(int n, vi fp)
{
   fp(n);
}

void fp_1(int n)
{
    int i;
    float sum = 0.0;
    for (i=2; i<n+1; i=i+2)
    {
        sum += 1.0/i;
    }
    printf("1/2+1/4+...+1/n=%f\n", sum);
}

void fp_2(int n)
{
    int i;
    float sum = 0.0;
    for (i=1; i<n+1; i=i+2)
    {
        sum += 1.0/i;
    }
    printf("1/1+1/3+...+1/n=%f\n", sum);
}

