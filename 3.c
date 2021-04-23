/*
时间：2020/12/4 17:20
编辑人：chongqiu00 
题目3：一个整数，它加上 100 后是一个完全平方数，再加上 168 又是一个完全平方数，请问该数是多少？(范围是0——1000)
*/

#include <stdio.h>
#include <math.h>
int main (int argv, char* argc[])
{
 int number, x, y;
 for (number=1; number<1000; number++)
 {
   x = sqrt(number + 100);
   y = sqrt(number + 268);//正向

   if (x*x == number+100 && y*y == number+268)//反向
   {
     printf("%d ", number);
   }

 }
  return 0;
}
/*
运行结果：
21 261
*/

/*
总结：
#include <math.h>
sqrt();开平方

*/