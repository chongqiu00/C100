/*
时间：2020/12/18 11:43
近期修改：2021/1/21 15:11
编辑人：chongqiu00
题目13： 打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数本身。
       例如： 153 是一个“水仙花数”，因为 153=1 的三次方＋ 5 的三次方＋ 3 的三次方。
*/

#include <stdio.h>
#include <math.h>

typedef int bool;
#define true 1
#define false 0

bool IsNarcissistic(int number);

int main (int argv, char* argc[])
{
    int range;
    for (range=101; range<1000; range++)
    {
        //printf("%d ", range);
       
        if (IsNarcissistic(range))
        {
            printf("%d ", range);
        }
    }
    return 0;
}

bool IsNarcissistic(int number)
{
    int a, b, c;
    //拆解
    a = number / 100;//百
    b = number / 10 % 10;//十
    c = number % 100 % 10; //个

    //确定数字
    if (pow(a, 3) + pow(b, 3) + pow(c, 3) == number)
   // if (a*a*a + b*b*b + c*c*c == number)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*
结论1：
头文件：
#include <math.h>
函数原型：
double pow(double x, double y);
形参：
以x为底的y次方。
返回值：
设返回值为 ret，则 ret = x^y。

使用 GCC 编译时请加入-lm。

结论2：
利用‘/’ 和 ‘%’ 进行一个整数的拆分。
 */
