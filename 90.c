/*
ʱ�䣺2020/12/19 23:22
�༭�ˣ�chongqiu00
��Ŀ�� �������
*/

#include <stdio.h>

#define M 5

int main(int argc, int* argv[])
{
    int a[M]={1,2,3,4,5};
    int i,j,t;
    i=0;
    j=M-1;
    while(i<j) 
    {
        t=*(a+i);
        *(a+i)=*(a+j);
        *(a+j)=t;
        i++;
        j--;
    }
    for(i=0; i<5; i++)
    {
        printf("%d ",*(a+i));
    } 
    return 0;
} 

//���鵹�����