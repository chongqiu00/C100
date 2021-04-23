/*
时间：2020/12/18 12:50
近期修改：2021/2/1 13:46
编辑人：chongqiu00
题目19：一个数如果恰好等于它的因子之和，这个数就称为“完数”。
    例如 6=1＋2＋3.编程找出 1000 以内的所有完数。 
*/

#include <stdio.h>
#include <stdbool.h>

bool IsPerfect(int number);
bool IsFactor(int number);

int main (int argv, char* argc[])
{
      int i;
      for (i=1; i<1000; i++)
      {
            if (IsPerfect(i))
            {
                printf("%d ", i);
            }
      }
      return 0;
}

bool IsPerfect(int number)
{
      int i;
      int sum=1;
      int temp = number;

      for (i=2; temp != 1; )
      {
            if (temp % i == 0)
            {
                temp /= i;
                sum += i;
            }
            else
            {
                i++;
            } 
      }

      if (number == sum)
      {
        return true;
      }
      else
      {
        return false;
      }
}

