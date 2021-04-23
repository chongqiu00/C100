/*
打印正三角和倒三角

*/

#include <stdio.h>

int main (int argc, char* argv[])
{
    int ii, ji;
    //正三角
    for (ii=1; ii<5; ii++)//行
    {
        //空格输出
        ji = 4 - ii;
        while ( ji )
        {
            printf(" ");
            ji--;
        }
        //星号输出
        ji = 2*ii - 1;
        while ( ji )
        {
            printf("*");
            ji--;
        }
        printf("\n");
    }

    //倒三角
    for (ii=1; ii<5; ii++)
    {
        //打印空格
        ji = ii - 1;
        while ( ji ){
            printf(" ");
            ji--;
        }
        //打印星号
        ji = -2*ii + 9;
        while ( ji ){
            printf("*");
            ji--;
        }
        printf("\n");
    }
    return 0;
}