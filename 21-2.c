/*
ʱ�䣺2021/2/2 13:30
�༭�ˣ�chongqiu00
��Ŀ21�����ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ����һ���ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬
    �ֶ����һ�����Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ�������� 10 ���������ٳ�ʱ����ֻʣ��һ�� �����ˡ����һ�칲ժ�˶��١� 

<���������ݹ�>
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

