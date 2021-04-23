/*
时间：2020/12/20 7:55
编辑人：chongqiu00
题目29： 给一个不多于 5 位的正整数，
要求：一、求它是几位数，二、逆序打印出各位数字。 
1. 程序分析：
学会分解出 每一位数，如下解释： (这里是一种简单的算法，师专数 002 班赵鑫提供 )
*/

//形式一较形式二简易。。。。。。
//形式一
#include <stdio.h>

int main (int argc, int* argv[])
{
    long a, b, c, d, e, x;
    scanf("%ld",&x);

    a=x/10000;/* 分解出万位 */
    b=x%10000/1000;/* 分解出千位 */
    c=x%1000/100;/* 分解出百位 */
    d=x%100/10;/* 分解出十位 */
    e=x%10;/* 分解出个位 */
    
    if (a!=0) printf("there are 5, %ld %ld %ld %ld %ld\n",e,d,c,b,a); 
    else if (b!=0) printf("there are 4, %ld %ld %ld %ld\n",e,d,c,b);
    else if (c!=0) printf(" there are 3,%ld %ld %ld\n",e,d,c);
    else if (d!=0) printf("there are 2, %ld %ld\n",e,d);
    else if (e!=0) printf(" there are 1,%ld\n",e); 

    return 0;
}


// //形式二
// #include <stdio.h>

// void get_int(int* number);
// void digit_reverse_number(int number);

// int main (int argv, char* argc[])
// {
//       int number;

//       get_int(&number);
//       digit_reverse_number(number);
    
//       return 0;
// }

// void get_int(int* number)
// {
//       while(1 != (scanf("%d", number)))
//       {
//             printf("this is illeglity!please enter input!\n");
//             while ('\n' != getchar())
//             {
//                   continue;
//             }
//       }

//       if (*number < 0 || *number > 99999 )
//       {
//             printf("please enter number 1~99999, please enter again!\n");
//             while(1 != (scanf("%d", number)))
//             {
//                   printf("this is illeglity!please enter input!\n");
//                   while ('\n' != getchar())
//                   {
//                          continue;
//                   }
//             }
//       }
// }

// void digit_reverse_number(int number)
// {
//       if (number < 10)
//       {
//             printf("digit = 1; %d", number);
//       }
//       else if (number < 100)
//       {
//             printf("digit = 2; %d %d", number%10, number/10);
//       }
//       else if (number < 1000)
//       {
//             printf("digit = 3; %d %d %d", number%100%10, number/10%10, number/100);
//       }
//       else if (number < 10000)
//       {
//             printf("digit = 4; %d %d %d %d", number%1000%100%10, number%1000%100/10, number%1000/100, number/1000);
//       }
//       else
//       {
//             printf("digit = 5; %d %d %d %d %d", number%10000%1000%100%10, number%10000%1000%100/10, number%10000%1000/100, number%10000/1000, number/10000);
//       }

//       return;
// }


