/*
修改时间：2021/1/18 19:26
编辑人：chongqiu00
题目5： 输入三个整数 x,y,z，请把这三个数由小到大输出。（子函数中动态分配内存）
*/

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

//function status
#define OK 1
#define ERROR 0

//user-defined
typedef int Status;
typedef int Elemtype;
typedef void (*pFun)(Elemtype*);

//functions
Elemtype* InitTriplet(int len, pFun pScanf);
Status BubbleSort(Elemtype* Triplet, int len);
Status TraverseTriplet(Elemtype* Triplet, int len, pFun pPrintf);

//pointer function
void scanf_int(Elemtype* p);
void printf_int(Elemtype* p);

int main(int argv, char* argc[])
{
  
    Elemtype* arry = InitTriplet(3, scanf_int);
    printf("Init Triple successful!\n");

    if (1 == BubbleSort(arry, 3))
    {
        printf("BubbleSort successful!\n");
    }
    if (1 == TraverseTriplet(arry, 3, printf_int))
    {
        printf("\ntraverse successful!\n");
    }

    return 0;
}

Elemtype* InitTriplet(int len, pFun pScanf)
{
    int i;
    Elemtype* Triplet = (Elemtype*) malloc(len * sizeof(Elemtype));
    if (NULL == Triplet)
    {
        printf("memory allocation fail!\nprocedure quit.\n");
        exit(-1);
    }
    Elemtype* p = Triplet;
    printf("please enter 3 number:\n");
    for (i=0; i<len; i++)
    {
        pScanf(p);
        p++;
    }
    return Triplet;
}

Status TraverseTriplet(Elemtype* Triplet, int len, pFun pPrintf)
{
    int i;
    Elemtype* p = Triplet;
    for (i=0; i<len; i++)
    {
        pPrintf(p);
        p++;
    }
    return OK;
}

Status BubbleSort(Elemtype* Triplet, int len)
{
    int i, j;
    for (i=0; i<len-1; i++)
    {
        for (j=1; j<len; j++)
        {
            if (Triplet[i]>Triplet[j])
            {
                Triplet[i] = Triplet[i] ^ Triplet[j];
                Triplet[j] = Triplet[j] ^ Triplet[i];
                Triplet[i] = Triplet[i] ^ Triplet[j];
            }
        }
    }
    return OK;
}

void scanf_int(Elemtype* p)
{
    scanf("%d", p);
    return;
}

void printf_int(Elemtype* p)
{
    printf("%d ", *p);
    return;
}

