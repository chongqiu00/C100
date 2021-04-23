/*

时间：2020/12/19 15:35
编辑人：chongqiu00
题目39： 有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。

*/

#include <stdio.h>
int main(void)
{
    int a[11]={1,4,6,9,13,16,19,28,40,100};
    int *p = a;
    int *q = a + 9;
    int *P = a;
    int *Q = a + 9;
    //输入将要插入得数据
    int e = 0;
    //遍历数组数据，大于前一个元素，小于后一个元素，即插入
    //特殊情况：插入第一个元素，插入最后一个元素
    //插入头
    if (e <= *p)
    {
        while (p<=q)
        {
            *(q+1) = *q;
            q--;
        }
        *p = e;
    }
    //插入尾
    else if(e >= *q)
    {
        *(q+1) = e;
    }
    //插入中间
    else
    {
        while ( p < q )
         {
             if (*p < e && e < *(p+1))
             {
                 P = p + 1;
                while (P <= Q)
                {
                    *(Q+1) = *Q;
                    Q--;
                }
                *P = e;
             }
             p++;
        }
        
    }
    
    for (int i = 0; i < 11; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}