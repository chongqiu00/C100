/*
时间：2020/12/19 20:24
编辑人：chongqiu00
题目： 放松一下，算一道简单的题目。（for 嵌套 if-else的练习）
*/

#include <stdio.h>

int main (int argc, int* argv[])
{
    int i,n;

    for(i=1; i<5; i++)
    { 
        n=0;
        if(i!=1)
            n=n+1;
        if(i==3)
            n=n+1;
        if(i==4)
            n=n+1;
        if(i!=4)
            n=n+1;
        if(n==3)
            printf("zhu hao shi de shi:%c",64+i);
    }

    return 0;
}

/*
分析：
i = 1:
        n = 0;
        i != 4: n = 1;
i = 2:
        n = 0;
        i != 1: n = 1;
        i != 4: n = 2;
i = 3:
        n = 0;
        i != 1: n = 1;
        i == 3: n = 2;
        i != 4: n = 3:
        n == 3: 输出
*/