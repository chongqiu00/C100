/*
ʱ�䣺2020/12/20 8:27
�༭�ˣ�chongqiu00
��Ŀ68�� ��n��������ʹ��ǰ�����˳�������m��λ�ã����m���������ǰ���m����
*/

#include <stdio.h>

int main (int argc, int* argv[])
{
    int n, m;
    int i, j=0;
    printf("����������n=:");
    scanf("%d", &n);
    printf("���������λm=:");
    scanf("%d", &m);

    int arry_int[n];
    int arry_int_temp[m];
    //�Դ����鸳ֵ
    for (i=0; i<n; i++)
    {
        printf("arry_int[%d]=",i);
        scanf("%d", &arry_int[i]);
    }

    //�ݴ�ǰmλ����
    for (i=0; i<m; i++)
    {
        arry_int_temp[i] = arry_int[i];
    }

    //��nλ�����mλ��ʼǰ�ƶ�mλ
    for (i=m; i<n; i++)
    {
        arry_int[j] = arry_int[i];
        j++;
    }
    
    //��nλ�����mλ���
    j = 0;
    for (i=n-m; i<n; i++)
    {
        arry_int[i] = arry_int_temp[j];
        j++;
    }

    //����
    for (i=0; i<n; i++)
    {
        printf("%d ", arry_int[i]);
    }

    return 0;
}