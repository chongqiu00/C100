/*
ʱ�䣺2020/12/17 21:31
�����޸ģ�2021/1/18 14:40
�༭�ˣ�chongqiu00
��Ŀ2��
��ҵ���ŵĽ������������ɡ����� (I)���ڻ���� 10 ��Ԫʱ��������� 10%��������� 10 ��Ԫ������ 20 ��Ԫ
ʱ������ 10 ��Ԫ�Ĳ��ְ� 10%��ɣ����� 10 ��Ԫ�Ĳ��֣��ɿ���� 7.5%��20 �� 40 ��֮��ʱ������ 20 ��Ԫ�Ĳ��֣�
����� 5%��40 �� 60 ��֮��ʱ���� 40 ��Ԫ�Ĳ��֣������ 3%��60 �� 100 ��֮��ʱ������ 60 ��Ԫ�Ĳ��֣������
1.5%������ 100 ��Ԫʱ������ 100 ��Ԫ�Ĳ��ְ� 1%��ɣ��Ӽ������뵱������ I����Ӧ���Ž���������
*/

#include <stdio.h>

float* get_number(float* profit);//get a float number.

int main (int argc, char* argv[])
{
  float profit;
  float bonus;
  int n;
  printf("please enter your profit��");
  get_number(&profit);
  printf("profit = %f\n", profit);
  
  n = profit / 100000;
  //printf("n = %d\n", n);
  switch(n)
  {
    case 0: bonus = profit + profit * 0.1;  break;
    case 1: bonus = profit + 100000 * 0.1 + (profit - 100000) * 0.075;  break;
    case 2: 
    case 3: bonus = profit + 100000 * 0.1 + 100000 * 0.075 + (profit - 200000) * 0.05;  break;
    case 4: 
    case 5: bonus = profit + 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (profit - 400000) * 0.03;  break;
    case 6: 
    case 7:
    case 8:
    case 9: bonus = profit + 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (profit - 600000) * 0.015;  break;
    default:  bonus = profit + 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (profit - 1000000) * 0.01; 
  }

  printf("your bonus is %f.", bonus);
  return 0;
}

float* get_number(float* profit)
{
  while (1 != (scanf("%f", profit)) )
  {
    printf("this is illegality!please enter number again.\n");
    while(getchar() != '\n')
    continue;
  }
  return profit;
}
/*
�ܽ᣺
���֧ѡ�����switch��
һ����ʽ��
switch (���ʽ)
{
    case �������ʽ1�� ���1��
    case ������ʾʽ2�� ���2��
    case �������ʽ3�� ���3��
    case ������ʾʽ4�� ���4��
    ... ...
    case �������ʽ1�� ���1��
    default: ���n+1;
}

ע�⣺
1��switch (���ʽ)�еı��ʽ���������ͻ�ö�����͡�
2����case��ĸ��������ʽ��ֵ������ȣ����������ͻ��
3��ÿһ��case�������ж������䣬����ʹ��{...}������������
4����case��default�Ӿ���Ⱥ�˳����Ա䶯��������Ӱ�����ִ�н����
5�������ʽ��ֵ = �������ʽ1����ִ�����1����û��breakʱ��ִ�б��ʽ2�е����2,�ظ��������̣�֪������break����default��������
5��default�Ӿ����ʡ�Բ��á�dafault�е�breakҲ����ʡ�Բ�д��
6�����ʽ���������ͱ���ͳ������ʽ����������һ�¡�
7���������ʽ������ΪС����
*/