/*
时间：2020/12/19 15:49
编辑人：chongqiu00
题目： 取一个整数 a 从右端开始的 4～7 位。

程序分析：可以这样考虑：
(1)先使 a 右移 4 位。
(2)设置一个低 4 位全为 1,其余全为 0 的数。可用 ~(~0<<4)
(3)将上面二者进行 &运算。


*/

#include <stdio.h>

int main (int argc, int* argv[])
{
    unsigned a,b,c,d;
    scanf("%d",&a);
    b=a>>4;
    c=~(~0<<4);
    d=b&c;
    printf("%d\n%d\n",a,d); 

    return 0;
}