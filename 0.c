/*��һ���������ֽ������������磺���� 90,��ӡ�� 90=2*3*3*5*/
//��ʾ����

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char* argv[])
{
      int number;
      int count = 0;

      printf("������һ����Ҫ�ֽ����������\n");
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


