/*
ʱ�䣺2020/12/19 15:49
�༭�ˣ�chongqiu00
��Ŀ53�� ѧϰʹ�ð�λ��� ^�� 

1 ^ 1 = 0;
1 ^ 0 = 1;
0 ^ 1 = 1;
0 ^ 0 = 0;
��ͬΪ0. ��ͬΪ1.

*/

#include <stdio.h>

int main(int argc, int* argv[])
{
    int a,b;
    a=077;//�˽��Ʊ�ʾ
    b=a^3;
    printf("The a & b(decimal) is %d \n",b);
    b^=7;
    printf("The a & b(decimal) is %d \n",b);

    return 0;
}

// //С���ɣ����Խ�����������ֵ�Ļ���
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