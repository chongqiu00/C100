/*
ʱ�䣺2020/12/19 17:12
�༭�ˣ�chongqiu00
��Ŀ�� �������飬�������һ��Ԫ�ؽ�������С�������һ��Ԫ�ؽ�����������顣
*/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define OVERLOW -1
typedef int* pType;
typedef int Type;

pType CreateArry(int len);
int MinElem(pType arry, int len);
void TraverseArry(pType arry, int len);
void ExchangElem(pType pa, pType pb);
int get_int(void);

int main(int argc, int* argv[])
{
    int e;
    pType arry = CreateArry(10);
    TraverseArry(&arry[0], 10);
    e = MinElem(&arry[0], 10);
    ExchangElem(&arry[e], &arry[9]);
    TraverseArry(&arry[0], 10);
    return 0;
}

pType CreateArry(int len)
{
    int i;
    pType arry = (pType)malloc(sizeof(Type) * len);
    if (NULL == arry)
    {
        printf("�ڴ����ʧ�ܣ�\n");
        exit(OVERLOW);
    }
    else
    {
        for (i=0; i<len; i++)
        {
            printf("�������%d������\n",i+1);
            arry[i] = get_int();
        }
    }
    return arry;
}

int MinElem(pType arry, int len)
{
    int i;
    Type temp = arry[0];
    int point = 0;
    for (i=1; i<len; i++)
    {
        if (arry[i] < temp)
        {
            point = i;
        }
    }
    return point;
}

int get_int(void)
{
    char ch;
    int number;
    while ((scanf("%d", &number) != 1))
    {
        printf("����������ݷǷ�!\n");
        while ((ch = getchar()) != '\n')
        continue;
    }
    return number;
}

void TraverseArry(pType arry, int len)
{
    int i;
    for (i=0; i<len; i++)
    {
        printf("%d ", arry[i]);
    }
    printf("\n");
    return;
}

void ExchangElem(pType pa, pType pb)
{
    *pa = *pa ^ *pb;
    *pb = *pb ^ *pa;
    *pa = *pa ^ *pb;
}
