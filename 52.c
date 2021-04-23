/*
时间：2020/12/19 16:46
编辑人：chongqiu00
题目52： 学习使用按位或 | 。

0 | 0 = 0; 
0 | 1 = 1; 
1 | 0 = 1；
1 | 1 = 1;
可以用于置数， 某位数 | 1 = 1；
*/

#include <stdio.h>

int main(int argc, int* argv[])
{
    int a,b;
    a=077;
    b=a|3;
    printf("The a & b(decimal) is %d \n",b);
    b|=7; 
    printf("The a & b(decimal) is %d \n",b);
    return 0;
} 


// //小技巧：可以将‘A'转化为’a‘

// #include <stdio.h>

// int main (int argc, int* argv)
// {
//     char ch = 'A';
//     ch = ch | 32;
//     printf("%c", ch);
//     return 0;
// }
