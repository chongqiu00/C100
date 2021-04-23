/*
时间：2020/12/18 8:56
编辑人：chongqiu00
题目6： 用 *号输出字母 C的图案。 
*/

#include <stdio.h>

int main (int argc, int* argv[])
{
    int i, j;
    printf("**********\n");
    for ( i = 0; i < 8; i++ )
    {
        printf("*\n");
    }
    printf("**********\n");
    return 0;
}