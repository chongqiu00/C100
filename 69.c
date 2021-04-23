/*
时间：2020/12/19 19:47
编辑人：chongqiu00
题目： 有n个人围成一圈，顺序排号。从第一个人开始报数 （从 1 到 3 报数），
凡报到 3 的人退出圈子，问最后留下的是原来第几号的那位。
*/

#include <stdio.h>
#define point 3
int main (int argc, int* argv[])
{

    int k = 1;
    int n;
    int i;
    int count = 0;
    printf("请输入共有几人：");
    scanf("%d", &n);
    int arry_people[n];

    for (i=0 ; i<n; i++)
    {
       arry_people[i] = 0;
    }
    
        for (i=0; i<n; i++)
        {
            if (3 != k && 0 == arry_people[i])
            {
                k++;
            }
            else if (3 == k && 0 == arry_people[i])
            {
                arry_people[i] = 1;
                k = 1;
                count++;
            }
            if (i == n-1)
            {
                i = 0;
            }
            if (count == n-1 && k == 1)
            {
                for (i=1; i<n; i++)
                    {
                        if (arry_people[i] == 0)
                         {
                             printf("最后出队的是排列在第%d位的人\n", i+1);
                         }
                    }
                break;
            }
        }
    return 0;
}
/*
思路：
有n个人---> 创建一个一维数组，其中有n个索引，全部置数为0.
报数1~3---> 定义变量k,记录报数变化
报到目标数3--->对应数组索引置数为1；k的值立即置数为1；
count记录报到了3的个数。
*/

    // int i,k,m,n,num[n],*p;
    // //输入数组的长度。
    // printf("please input the total of numbers:");
    // scanf("%d",&n);
    // p=num;
    // //创建一个拥有n个元素的数组。
    // for(i=0;i<n;i++)
    //     *(p+i)=i+1;  
    // //i 记录总数，k 记录结束数，m 记录元素为0的个数
    // i = k = m = 0;
    // while(m<n-1)
    // {
    //     if(*(p+i)!=0) k++;
    //     if(k==3)
    //     {
    //         *(p+i)=0;
    //         k=0;
    //         m++;
    //     }
    //     i++;
    //     if(i==n) i=0;
    // }

    // while(*p==0) p++;

    // printf("%d is left\n",*p);
    