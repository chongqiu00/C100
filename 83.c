/*
时间：2020/12/19 22:59
编辑人：chongqiu00
题目： 求 0—7 所能组成的奇数个数。
*/

#include <stdio.h>

int main (int argc, int* argv[])
{
    int i;
    long sum = 4 + 4*7;
    int n = 8;
   for (i=1; i<8; i++)
   {
       if (i == 1)   printf("1 bit：4\n");
       else if(i == 2) printf("2 bit：28\n");
            else
             {
                printf("%d bit:%ld\n", i, 4*7*n);
                sum += 4*7*n;
                n *= 8;
             }
   }
        
    printf("0—7 所能组成的奇数个数%ld\n", sum);
    return 0;
}