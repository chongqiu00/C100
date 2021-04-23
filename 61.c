/*
时间：2020/12/20 8:10
编辑人：chongqiu00
题目： 打印出杨辉三角形（要求打印出 10 行如下图） 

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
 
*/
#include <stdio.h>

int main (int argc, int* argv[])
{
    int i, j;
    int arry[11];
    printf("1\n");
    printf("1\t1\n");
    arry[0] = 1;
    arry[1] = 1;

    for (i=2; i<10; i++)
    {
        printf("%d\t", arry[0]);
        for (j=i-1; j>=1; j--)
        {
            arry[j] = arry[j] + arry[j-1];
            printf("%d\t", arry[j]);
        }
        printf("%d\n", arry[i]=1);
    }
    return 0;
}