/*
ʱ�䣺2020/12/20 0:23
�༭�ˣ�chongqiu00
��Ŀ�� �ж�һ�������ܱ�����9����
*/

#include <stdio.h>
#include <stdbool.h>
bool issushu(int n);
int istolat(int n);
int main(void)
{
    int i, t;
    int k = 0;
    for (i = 11; i<10000; i++)
    {
        if(issushu(i)){
             t = istolat(i);
             if (t != 0)
             {
                 k = 1;
                printf("����%d���Ա�%d��9������\n", i, t);}
             }
           
    }

    if (k == 0)
    {
        printf("11~9999֮��û�з���Ҫ����ֵ��\n");
    }
    return 0;
}
bool issushu(int n)
{
    int i, k = 0;
    for (i=2; i<n; i++)
        if(n%i == 0) k = 1;
    if (k == 0) return true;
    else return false;
}
int istolat(int n)
{
    int k = 0;
    while (n%9 == 0) {
        n /= 9;
        k++;}
    return k;
}

//������û�н����