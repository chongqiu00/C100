/*
时间：2021/2/2 21:01
编辑人：chongqiu00
题目25： 求 1+2!+3!+...+20! 的和

<方法二：普通方法>
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