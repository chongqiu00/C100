/*
ʱ�䣺2020/12/19 20:02
�༭�ˣ�chongqiu00
��Ŀ�� �������һ������
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
        printf("�������%d���ڵ����ֵ��", i+1);
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
�ܽ᣺
�����������������һ��ָ��NULL�Ľ�㣬�����㼴Ϊ�˵������β��㣬���ڴ����Ĺ����У������Ǵ�β�ڵ㿪ʼ��ֵ�ģ�
����������������ĵ�����Ϳ���ֱ��ͨ��ָ�벻����NULL������
1������һ���ڵ㣬��Ϊ�˵������β�ڵ㣬�ٶ���һ������ڵ㣬�������½ڵ�Ĵ��ݹ�����
2��ѭ��ʵ�ִ�������ڵ�
3��ÿ��ѭ�����Խڵ㸳ֵ�󣬴���һ���½ڵ㣬����½ڵ�ָ�����Ǹո�Ϊ֮��ֵ�Ľڵ㣬����ڵ�����´���������ڵ㡣
4��ѭ�������󣬸���ڵ㼴Ϊ����������ͷ�ڵ㰡������

*/