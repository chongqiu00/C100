/*
时间：2020/12/19 23:22
编辑人：chongqiu00
题目： 读结果。
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

//数组倒序输出