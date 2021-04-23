/*
时间：2020/12/19 15:49
编辑人：chongqiu00
题目55： 学习使用按位取反 ~。 

 ~0=1;
 ~1=0; 
*/

#include <stdio.h>

int main (int argc, int* argv[])
{
    int a,b;
    a=234;
    b=~a;
    printf("The a's 1 complement(decimal) is %d \n",b);
    a=~a;
    printf("The a's 1 complement(hexidecimal) is %x \n",a);    
    return 0;
}