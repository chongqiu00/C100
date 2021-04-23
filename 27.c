/*
时间：2020/12/20 7:47
编辑人：chongqiu00
题目27： 利用递归函数调用方式，将所输入的 5 个字符，以相反顺序打印出来
*/

#include <stdio.h>

int main(int argc, int* argv[])
{
    int i=5;
    void palin(int n);
    printf("请输入五个字符:");
    palin(i);
    printf("\n");
    return 0;
}

void palin(n)
int n;
{
    char next;
    if(n<=1)
    {
        next=getchar();
        printf("您输入的字符按倒序输出为:");
        putchar(next);//输出最后一个
    } 
    else
    {
        next=getchar();
        palin(n-1);
        putchar(next);
    }
}