/*
时间：2020/12/19 21:37
编辑人：chongqiu00
题目： 海滩上有一堆桃子，五只猴子来分。第一只猴子把这堆桃子凭据分为五份，多了一个，
这只猴子把多的一个扔入海中，拿走了一份。第二只猴子把剩下的桃子又平均分成五份，又
多了一个，它同样把多的一个扔入海中，拿走了一份，第三、第四、第五只猴子都是这样做
的，问海滩上原来最少有多少个桃子？
*/

#include <stdio.h>

int PeachCount(int n);
#define N 5
int main (int argc, int* argv[])
{
    printf("There were %d peaches.", PeachCount(N));

    return 0;
}

int PeachCount(int n)
{
    int sum = 1;
    //基准条件
    if (n == 1)
    {
        return sum = 1 * N + 1;
    }
    else//递归条件
    {
        sum = PeachCount(n-1) * N + 1;
    }
    
}