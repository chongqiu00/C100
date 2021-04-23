/*将一个正整数分解质因数。例如：输入 90,打印出 90=2*3*3*5*/
//显示次幂

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char* argv[])
{
      int number;
      int count = 0;

      printf("请输入一个将要分解的质因数：\n");
      scanf("%d", &number);

      int tmp = number;

      for ( int i=2; i<=number; )
      {
            if ( tmp % i == 0 )
            {
                  tmp = tmp / i;
                  count++;
                  printf("%d ", i);
                  i = 2;
            }
            else
            {
                  
                  i++;
            }
      }
      return 0;
}


