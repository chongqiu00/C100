/*
ʱ�䣺2020/12/19 23:22
�༭�ˣ�chongqiu00
��Ŀ�� ĳ����˾���ù��õ绰�������ݣ���������λ���������ڴ��ݹ������Ǽ��ܵģ����ܹ������£�
ÿλ���ֶ����� 5,Ȼ���úͳ��� 10 ��������������֣��ٽ���һλ�͵���λ�������ڶ�λ�͵���λ������
*/

#include <stdio.h>

int main (int argc, int* argv[])
{
    int number;
    printf("��������Ҫ���ܵ���λ���ݣ�");
    scanf("%d", &number);

    //�ֽ����λ����
    int number_1 = number / 1000;
    int number_2 = number / 100 %10;
    int number_3 = number / 10 % 10;
    int number_4 = number % 10;

    //+5
    number_1 += 5;
    number_2 += 5;
    number_3 += 5;
    number_4 += 5;

    //%10
    number_1 %= 10;
    number_2 %= 10;
    number_3 %= 10;
    number_4 %= 10;

    //1,4������2��3����
    number_1 = number_1 ^ number_4;
    number_4 = number_4 ^ number_1;
    number_1 = number_1 ^ number_4;

    number_2 = number_2 ^ number_3;
    number_3 = number_3 ^ number_2;
    number_2 = number_2 ^ number_3;

    printf("%d%d%d%d\n", number_1, number_2, number_3, number_4);




    return 0;
}

/*
���ۣ�
for(i=0;i<=n/2;i++) 
    {
      a[i] = a[i] ^ a[n/2-i];
      a[n/2-i] = a[n/2-i] ^ a[i];
      a[i] = a[i] ^ a[n/2-i];
    }
��������a[0] + a[1] + a[2] + a[3] + a[4] + ... +a[n-4] + a[n-3] + a[n-2] + a[n-1]+ a[n]
a[0] �� a[n]
a[1] �� a[n-1]
a[2] �� a[n-2]
a[3] �� a[n-3]
a[4] �� a[n-4]��ÿ��ѭ��ȡ����ֵ��
*/