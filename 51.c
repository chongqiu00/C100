/*
ʱ�䣺2020/12/19 16:47
�༭�ˣ�chongqiu00
��Ŀ51�� ѧϰʹ�ð�λ�� &��

0 & 0 = 0; 
0 & 1 = 0; 
1 & 0 = 0��
1 & 1 = 1;
�����������㡣ĳλ�� & 0 = 0��
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



// //С���ɣ����Խ���a'ת��Ϊ��A��

// #include <stdio.h>

// int main (int argc, int* argv)
// {
//     char ch = 'a';
//     ch = ch & 223;
//     printf("%c", ch);
//     return 0;
// }
