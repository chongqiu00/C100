/*
时间：2020/12/18 17:50
编辑人：chongqiu00
题目37： 对 10 个数进行排序
*/

//见第五题代码

// 冒泡
#include <stdio.h>

int main (int argv, char* argc[])
{
      int arry[10] = {12, 24, 11, 67, 2436, 6, 456, 0, 7, 746};

      int i, j;

      for (i=1; i<10; i++)
      {
            for (j=0; j<9; j++)
            {
                  if (arry[i] < arry[j])
                  {
                        arry[i] = arry[i] ^ arry[j];
                        arry[j] = arry[j] ^ arry[i];
                        arry[i] = arry[i] ^ arry[j];
                   }
            }
      }

      for (i=0; i<10; i++)
      {
            printf("%d ", arry[i]);
      }

      return 0;
}