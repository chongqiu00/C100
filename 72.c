/*
时间：2020/12/19 19:59
编辑人：chongqiu00
题目： 创建一个链表。
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


