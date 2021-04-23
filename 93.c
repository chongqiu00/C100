/*
时间：2020/12/18 21:03
编辑人：chongqiu00
题目： 时间函数举例 3
*/

#include <stdio.h>
#include <time.h>

int main(int argc, int* argv[])
{ 
    clock_t start,end;
    int i;
    double var;
    start=clock();
    for(i=0;i<10000;i++)
    { 
        printf("\1\1\1\1\1\1\1\1\1\1\n");
    }
    end=clock();
    printf("\1: The different is %6.3f\n", (double)(end-start) / CLOCKS_PER_SEC);
    return 0;
} 

/*
结论：
clock函数
函数原型： clock_t clock(void)
函数返回：返回clock函数执行起（一般为程序的开头），处理器时钟所使用的时间。
函数功能：用来计算程序或程序的某一段的执行时间。

代码示例：
#include<stdio.h>
#include<time.h>

int main()
{
    clock_t start_t,finish_t;
    double total_t = 0;
    int i = 0;

    start_t = clock();

    for(;i<100000;++i)
    {
        //do someting;
    }

    finish_t = clock();
    
    total_t = (double)(finish_t - start_t) / CLOCKS_PER_SEC;//将时间转换为秒

    printf("CPU 占用的总时间：%f\n", total_t);
    return 0;
}
*/