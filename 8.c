/*
时间：2020/12/18 9:00
近期修改：2021/1/21 14:15
编辑人：chongqiu00
题目8： 输出 9*9 口诀。
*/

#include <stdio.h>

int main (int argv, char* argc[])
{
    int line, list;//行，列

    //forward triangle
    for (line=1; line<10; line++)
    {
        for (list=1; list<=line; list++)
        {
            printf("%d*%d=%d ", line, list, line*list);
        }
        printf("\n");
    }
    printf("\n");
    //reverse triangle
    for (line=9; line>0; line--)
    {
        for (list=1; list<=line; list++)
        {
            printf("%d*%d=%d ", line, list, line*list);
        }
        printf("\n");
    }
    return 0;
}