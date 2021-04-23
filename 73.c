/*
时间：2020/12/19 20:02
编辑人：chongqiu00
题目： 反向输出一个链表。
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node* pNext;
}NODE, *pNODE;
pNODE CreateList(int n);
void TraverseList(pNODE pHead);

int main (int argc, int* argv[])
{
    pNODE list = CreateList(5);
    TraverseList(list);
    return 0;
}
pNODE CreateList(int n)
{
    int i;
    pNODE pHead;
    pNODE ptr;
    pNODE pTail = (pNODE)malloc(sizeof(NODE));
    if (NULL == pTail) exit(-1);
    pTail->pNext = NULL;
    ptr = pTail;
    for (i=0; i<n; i++)
    {
        printf("请输入第%d个节点的数值：", i+1);
        scanf("%d", &ptr->data);
        pHead = (pNODE)malloc(sizeof(NODE));
        if (NULL == pHead) exit(-1);
        pHead->pNext = ptr;
        ptr = pHead;
    }
    //pHead = ptr=ptr->pNext;
    return pHead;
}
void TraverseList(pNODE pHead)
{
    pNODE p = pHead->pNext;
    while (NULL != p)
    {
        printf("%d ", p->data);
        p = p->pNext;
    }
    return;
}
/*
总结：
首先我们是制造出来一个指向NULL的结点，这个结点即为此单链表的尾结点，（在创建的过程中，我们是从尾节点开始赋值的）
这样我们制造出来的单链表就可以直接通过指针不等于NULL遍历。
1，创建一个节点，作为此单链表的尾节点，再定义一个跟随节点，进行上下节点的传递工作。
2，循环实现创建多个节点
3，每次循环，对节点赋值后，创建一个新节点，这个新节点指向我们刚刚为之赋值的节点，跟随节点等于新创建的这个节点。
4，循坏结束后，跟随节点即为这个单链表的头节点啊！！！

*/