/*
ʱ�䣺2020/12/20 7:20
�����޸ģ�2021/2/2 14:29
�༭�ˣ�chongqiu00
��Ŀ23�� ��ӡʹ�á�*����һ�����Ρ�
*/

#include <stdio.h>

int main (int argv, char* argc[])
{
      int line;
      int tab;
      int tu;

      for (line=1; line<6; line++)
      {
            for (tab=5-line; tab>0; tab--)
            {
                  printf(" ");
            }
            for (tu=2*line-1; tu>0; tu--)
            {
                  printf("*");
            }
            printf("\n");
      }

      for (line=1; line<5; line++)
      {
            for (tab=line; tab>0; tab--)
            {
                  printf(" ");
            }
            for (tu=-2*line+9; tu>0; tu--)
            {
                  printf("*");
            }
            printf("\n");            
      }

      
      return 0;
}

