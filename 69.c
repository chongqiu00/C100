/*
ʱ�䣺2020/12/19 19:47
�༭�ˣ�chongqiu00
��Ŀ�� ��n����Χ��һȦ��˳���źš��ӵ�һ���˿�ʼ���� ���� 1 �� 3 ��������
������ 3 �����˳�Ȧ�ӣ���������µ���ԭ���ڼ��ŵ���λ��
*/

#include <stdio.h>
#define point 3
int main (int argc, int* argv[])
{

    int k = 1;
    int n;
    int i;
    int count = 0;
    printf("�����빲�м��ˣ�");
    scanf("%d", &n);
    int arry_people[n];

    for (i=0 ; i<n; i++)
    {
       arry_people[i] = 0;
    }
    
        for (i=0; i<n; i++)
        {
            if (3 != k && 0 == arry_people[i])
            {
                k++;
            }
            else if (3 == k && 0 == arry_people[i])
            {
                arry_people[i] = 1;
                k = 1;
                count++;
            }
            if (i == n-1)
            {
                i = 0;
            }
            if (count == n-1 && k == 1)
            {
                for (i=1; i<n; i++)
                    {
                        if (arry_people[i] == 0)
                         {
                             printf("�����ӵ��������ڵ�%dλ����\n", i+1);
                         }
                    }
                break;
            }
        }
    return 0;
}
/*
˼·��
��n����---> ����һ��һά���飬������n��������ȫ������Ϊ0.
����1~3---> �������k,��¼�����仯
����Ŀ����3--->��Ӧ������������Ϊ1��k��ֵ��������Ϊ1��
count��¼������3�ĸ�����
*/

    // int i,k,m,n,num[n],*p;
    // //��������ĳ��ȡ�
    // printf("please input the total of numbers:");
    // scanf("%d",&n);
    // p=num;
    // //����һ��ӵ��n��Ԫ�ص����顣
    // for(i=0;i<n;i++)
    //     *(p+i)=i+1;  
    // //i ��¼������k ��¼��������m ��¼Ԫ��Ϊ0�ĸ���
    // i = k = m = 0;
    // while(m<n-1)
    // {
    //     if(*(p+i)!=0) k++;
    //     if(k==3)
    //     {
    //         *(p+i)=0;
    //         k=0;
    //         m++;
    //     }
    //     i++;
    //     if(i==n) i=0;
    // }

    // while(*p==0) p++;

    // printf("%d is left\n",*p);
    