/*
ʱ�䣺2020/12/19 16:46
�༭�ˣ�chongqiu00
��Ŀ52�� ѧϰʹ�ð�λ�� | ��

0 | 0 = 0; 
0 | 1 = 1; 
1 | 0 = 1��
1 | 1 = 1;
�������������� ĳλ�� | 1 = 1��
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


// //С���ɣ����Խ���A'ת��Ϊ��a��

// #include <stdio.h>

// int main (int argc, int* argv)
// {
//     char ch = 'A';
//     ch = ch | 32;
//     printf("%c", ch);
//     return 0;
// }
