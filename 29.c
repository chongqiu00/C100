/*
ʱ�䣺2020/12/20 7:55
�༭�ˣ�chongqiu00
��Ŀ29�� ��һ�������� 5 λ����������
Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡� 
1. ���������
ѧ��ֽ�� ÿһλ�������½��ͣ� (������һ�ּ򵥵��㷨��ʦר�� 002 �������ṩ )
*/

//��ʽһ����ʽ�����ס�����������
//��ʽһ
#include <stdio.h>

int main (int argc, int* argv[])
{
    long a, b, c, d, e, x;
    scanf("%ld",&x);

    a=x/10000;/* �ֽ����λ */
    b=x%10000/1000;/* �ֽ��ǧλ */
    c=x%1000/100;/* �ֽ����λ */
    d=x%100/10;/* �ֽ��ʮλ */
    e=x%10;/* �ֽ����λ */
    
    if (a!=0) printf("there are 5, %ld %ld %ld %ld %ld\n",e,d,c,b,a); 
    else if (b!=0) printf("there are 4, %ld %ld %ld %ld\n",e,d,c,b);
    else if (c!=0) printf(" there are 3,%ld %ld %ld\n",e,d,c);
    else if (d!=0) printf("there are 2, %ld %ld\n",e,d);
    else if (e!=0) printf(" there are 1,%ld\n",e); 

    return 0;
}


// //��ʽ��
// #include <stdio.h>

// void get_int(int* number);
// void digit_reverse_number(int number);

// int main (int argv, char* argc[])
// {
//       int number;

//       get_int(&number);
//       digit_reverse_number(number);
    
//       return 0;
// }

// void get_int(int* number)
// {
//       while(1 != (scanf("%d", number)))
//       {
//             printf("this is illeglity!please enter input!\n");
//             while ('\n' != getchar())
//             {
//                   continue;
//             }
//       }

//       if (*number < 0 || *number > 99999 )
//       {
//             printf("please enter number 1~99999, please enter again!\n");
//             while(1 != (scanf("%d", number)))
//             {
//                   printf("this is illeglity!please enter input!\n");
//                   while ('\n' != getchar())
//                   {
//                          continue;
//                   }
//             }
//       }
// }

// void digit_reverse_number(int number)
// {
//       if (number < 10)
//       {
//             printf("digit = 1; %d", number);
//       }
//       else if (number < 100)
//       {
//             printf("digit = 2; %d %d", number%10, number/10);
//       }
//       else if (number < 1000)
//       {
//             printf("digit = 3; %d %d %d", number%100%10, number/10%10, number/100);
//       }
//       else if (number < 10000)
//       {
//             printf("digit = 4; %d %d %d %d", number%1000%100%10, number%1000%100/10, number%1000/100, number/1000);
//       }
//       else
//       {
//             printf("digit = 5; %d %d %d %d %d", number%10000%1000%100%10, number%10000%1000%100/10, number%10000%1000/100, number%10000/1000, number/10000);
//       }

//       return;
// }


