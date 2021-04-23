/*
时间：2020/12/18 12:20
近期修改：2021/1/22 0:57
编辑人：chongqiu00
题目17：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
*/

#include <stdio.h>

int main (int argv, char* argc[])
{
    char ch;
    int zimu=0, tab=0, shuzi=0, qita=0;

    while ((ch = getchar()) != '\n')
    {
        if (ch >='a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        {
            zimu++;
        }else if (ch >= '0' && ch <= '9')
        {
            shuzi++;
        }else if (ch == ' ')
        {
            tab++;
        }else
        {
            qita++;
        }
    }

    printf("zimu=%d, shuzi=%d, tab=%d, qita=%d", zimu, shuzi, tab, qita);
    return 0;
}

/*
结论：
用getchar()来捕获输入内容，每次捕获一个元素。
 */


