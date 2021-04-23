/*
时间：2020/12/19 16:47
编辑人：chongqiu00
题目51： 学习使用按位与 &。

0 & 0 = 0; 
0 & 1 = 0; 
1 & 0 = 0；
1 & 1 = 1;
可以用于清零。某位数 & 0 = 0；
*/


#include <stdio.h>

int main (int argc, int* argv)
{
    int a,b;
    a=077;
    b=a&3;
    printf("The a & b(decimal) is %d \n",b);
    b&=7;
    printf("The a & b(decimal) is %d \n",b);

    return 0;
}



// //小技巧：可以将‘a'转化为’A‘

// #include <stdio.h>

// int main (int argc, int* argv)
// {
//     char ch = 'a';
//     ch = ch & 223;
//     printf("%c", ch);
//     return 0;
// }
