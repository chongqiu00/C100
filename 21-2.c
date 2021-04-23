/*
时间：2021/2/2 13:30
编辑人：chongqiu00
题目21：猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个第二天早上又将剩下的桃子吃掉一半，
    又多吃了一个。以后每天早上都吃了前一天剩下的一半零一个。到第 10 天早上想再吃时，见只剩下一个 桃子了。求第一天共摘了多少。 

<方法二：递归>
*/

#include <stdio.h>

int Peach(int day);

int main (int argv, char* argc[])
{
      printf("peach have %d\n", Peach(10));
      return 0;
}

int Peach(int day)
{
      int number = 1;

      if (1 == day)
      {
            return number;
      }
      else
      {
            number = ( Peach(day-1) + 1 ) * 2;
      }
      
}

