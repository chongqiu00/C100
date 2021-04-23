/*
ʱ�䣺2020/12/18 12:50
�����޸ģ�2021/2/1 13:46
�༭�ˣ�chongqiu00
��Ŀ19��һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ����������
    ���� 6=1��2��3.����ҳ� 1000 ���ڵ����������� 
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

