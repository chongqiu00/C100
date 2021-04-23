/*
时间：2020/12/19 23:22
编辑人：chongqiu00
题目： 某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的，加密规则如下：
每位数字都加上 5,然后用和除以 10 的余数代替该数字，再将第一位和第四位交换，第二位和第三位交换。
*/

#include <stdio.h>

int main (int argc, int* argv[])
{
    int number;
    printf("请输入需要加密的四位数据：");
    scanf("%d", &number);

    //分解此四位数据
    int number_1 = number / 1000;
    int number_2 = number / 100 %10;
    int number_3 = number / 10 % 10;
    int number_4 = number % 10;

    //+5
    number_1 += 5;
    number_2 += 5;
    number_3 += 5;
    number_4 += 5;

    //%10
    number_1 %= 10;
    number_2 %= 10;
    number_3 %= 10;
    number_4 %= 10;

    //1,4互换，2，3互换
    number_1 = number_1 ^ number_4;
    number_4 = number_4 ^ number_1;
    number_1 = number_1 ^ number_4;

    number_2 = number_2 ^ number_3;
    number_3 = number_3 ^ number_2;
    number_2 = number_2 ^ number_3;

    printf("%d%d%d%d\n", number_1, number_2, number_3, number_4);




    return 0;
}

/*
结论：
for(i=0;i<=n/2;i++) 
    {
      a[i] = a[i] ^ a[n/2-i];
      a[n/2-i] = a[n/2-i] ^ a[i];
      a[i] = a[i] ^ a[n/2-i];
    }
可以做到a[0] + a[1] + a[2] + a[3] + a[4] + ... +a[n-4] + a[n-3] + a[n-2] + a[n-1]+ a[n]
a[0] 与 a[n]
a[1] 与 a[n-1]
a[2] 与 a[n-2]
a[3] 与 a[n-3]
a[4] 与 a[n-4]，每次循环取到数值。
*/