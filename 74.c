/*
时间：2020/12/19 20:05
编辑人：chongqiu00
题目： 连接两个链表。
*/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct Node
{
    int data;
    struct Node* pNext;
}NODE, *pNODE;
pNODE CreateList(int n);

int main (int argc, int* argv[])
{
    int i;

    pNODE list_1 = CreateList(3);
    pNODE list_2 = CreateList(3);
    pNODE p = list_1;
    pNODE p_1 = list_1;
    pNODE q = list_2->pNext;
    pNODE P = list_1->pNext;

    while (NULL != p)
    {
        p_1 = p;
        p = p->pNext;
    }

    p_1->pNext = q;

   while (NULL != P)
    {
        printf("%d ", P->data);
        P = P->pNext;
    }
    
    return 0;
}

pNODE CreateList(int n)
{
    int val;
    pNODE pHead = (pNODE) malloc(sizeof(NODE));
    if (NULL == pHead)
    {
        printf("内存分配失败!\n");
        exit(-1);
    }
    else
    {
          pNODE pTail = (pNODE) malloc(sizeof(NODE));
          if (NULL == pTail)
            {
              printf("内存分配失败!\n");
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
                              printf("内存分配失败!\n");
                              exit(-1);
                            }
                            else
                            {
                                printf("请输入一个整数：");
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
