/*
时间：2020/12/19 15:49
编辑人：chongqiu00
题目53： 学习使用按位异或 ^。 

1 ^ 1 = 0;
1 ^ 0 = 1;
0 ^ 1 = 1;
0 ^ 0 = 0;
相同为0. 不同为1.

*/

#include <stdio.h>

int main(int argc, int* argv[])
{
    int a,b;
    a=077;//八进制表示
    b=a^3;
    printf("The a & b(decimal) is %d \n",b);
    b^=7;
    printf("The a & b(decimal) is %d \n",b);

    return 0;
}

// //小技巧：可以进行两个变量值的互换
// #include <stdio.h>

// int main (int argc, int* argv[])
// {
//     int number_1 = 0;
//     int number_2 = 1;
//     printf("before: number_1=%d number_2=%d\n", number_1, number_2);

//     number_1 = number_1 ^ number_2;
//     number_2 = number_2 ^ number_1;
//     number_1 = number_1 ^ number_2;

//     printf(" after: number_1=%d number_2=%d\n", number_1, number_2);

//     return 0;
// }