/*
ʱ�䣺2020/12/20 7:47
�༭�ˣ�chongqiu00
��Ŀ27�� ���õݹ麯�����÷�ʽ����������� 5 ���ַ������෴˳���ӡ����
*/

#include <stdio.h>

int main(int argc, int* argv[])
{
    int i=5;
    void palin(int n);
    printf("����������ַ�:");
    palin(i);
    printf("\n");
    return 0;
}

void palin(n)
int n;
{
    char next;
    if(n<=1)
    {
        next=getchar();
        printf("��������ַ����������Ϊ:");
        putchar(next);//������һ��
    } 
    else
    {
        next=getchar();
        palin(n-1);
        putchar(next);
    }
}