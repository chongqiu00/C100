/*
ʱ�䣺2021/2/2 21:01
�༭�ˣ�chongqiu00
��Ŀ25�� �� 1+2!+3!+...+20! �ĺ�

<����������ͨ����>
*/

#include <stdio.h>

int Facorial(int number);

int main (int argv, char* argc[])

{
      int range;
      long sum = 0;

      for (range=1; range<21; range++)
      {
            sum += Facorial(range);
      }

      printf("1+2!+3!+...+20!=%ld\n", sum);

      return 0;
}

int Facorial(int number)
{
      int range;
      long facorial = 1;

      for (range=2; range<=number; range++)
      {
            facorial *= range;
      }

      return facorial;
}