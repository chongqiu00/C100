/*
ʱ�䣺2020/12/19 19:59
�༭�ˣ�chongqiu00
��Ŀ�� ����һ������
*/
#include <stdio.h>
#include <stdlib.h>
#define OVERLOW -1
typedef struct Node
{
    int data;
    struct Node* pNext;
}NODE, *pNODE;
pNODE CreateList(int n);

int main (int argc, int* argv[])
{
    pNODE list = CreateList(3);
    pNODE p = list->pNext;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->pNext;
    }

    return 0;
}

pNODE CreateList(int n)
{
    int val;
    pNODE pHead = (pNODE) malloc(sizeof(NODE));
    if (NULL == pHead)
    {
        printf("�ڴ����ʧ��!\n");
        exit(-1);
    }
    else
    {
          pNODE pTail = (pNODE) malloc(sizeof(NODE));
          if (NULL == pTail)
            {
              printf("�ڴ����ʧ��!\n");
              exit(-1);
            }
            else
            {
                pTail = pHead;
                for(;n>0;n--)
                {
                     pNODE pNew = (pNODE) malloc(sizeof(NODE));
                        if (NULL == pNew)
                            {
                              printf("�ڴ����ʧ��!\n");
                              exit(-1);
                            }
                            else
                            {
                                printf("������һ��������");
                                scanf("%d", &val);
                                pNew->data = val;
                                pTail->pNext = pNew;
                                pNew->pNext = NULL;
                                pTail = pNew;
                            }
                            
                }
                return pHead;    
            }
               
    }

    return NULL;
}


