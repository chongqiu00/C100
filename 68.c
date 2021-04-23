/*
时间：2020/12/20 8:27
编辑人：chongqiu00
题目68： 有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面的m个数
*/

#include <stdio.h>

int main (int argc, int* argv[])
{
    int n, m;
    int i, j=0;
    printf("请输入整数n=:");
    scanf("%d", &n);
    printf("请输入后移位m=:");
    scanf("%d", &m);

    int arry_int[n];
    int arry_int_temp[m];
    //对此数组赋值
    for (i=0; i<n; i++)
    {
        printf("arry_int[%d]=",i);
        scanf("%d", &arry_int[i]);
    }

    //暂存前m位整数
    for (i=0; i<m; i++)
    {
        arry_int_temp[i] = arry_int[i];
    }

    //将n位数组第m位开始前移动m位
    for (i=m; i<n; i++)
    {
        arry_int[j] = arry_int[i];
        j++;
    }
    
    //将n位数组后m位填充
    j = 0;
    for (i=n-m; i<n; i++)
    {
        arry_int[i] = arry_int_temp[j];
        j++;
    }

    //遍历
    for (i=0; i<n; i++)
    {
        printf("%d ", arry_int[i]);
    }

    return 0;
}