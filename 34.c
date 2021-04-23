/*
时间：2020/12/18 17:29
编辑人：chongqiu00
题目34： 练习函数调用
*/

#include <stdio.h>

void hello_world(void);
void three_hellos(void);

int main(int argc, int* argv[])
{
    three_hellos();/* 调用此函数 */
    return 0;
} 

void hello_world(void)
{
    printf("Hello, world!\n");
}

void three_hellos(void)
{
    int counter;
    for (counter = 1; counter <= 3; counter++)
    hello_world();/* 调用此函数 */
}