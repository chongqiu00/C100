/*
ʱ�䣺2020/12/4 17:20
�༭�ˣ�chongqiu00 
��Ŀ3��һ�������������� 100 ����һ����ȫƽ�������ټ��� 168 ����һ����ȫƽ���������ʸ����Ƕ��٣�(��Χ��0����1000)
*/

#include <stdio.h>
#include <math.h>
int main (int argv, char* argc[])
{
 int number, x, y;
 for (number=1; number<1000; number++)
 {
   x = sqrt(number + 100);
   y = sqrt(number + 268);//����

   if (x*x == number+100 && y*y == number+268)//����
   {
     printf("%d ", number);
   }

 }
  return 0;
}
/*
���н����
21 261
*/

/*
�ܽ᣺
#include <math.h>
sqrt();��ƽ��

*/