/*
时间：2020/12/20 7:58
编辑人：chongqiu00
题目31： 请输入星期几的第一个字母来判断一下是星期几，
如果第一个字母一样，则继续判断第二个字母。
*/

#include <stdio.h>

int main (int argc, int* argv[])
{
    char ch;
    printf("请输入星期几的第一个英语单词:(注意第一个字母是大写哦！)");
    scanf(" %c", &ch);

    switch (ch)
    {
        case 'M':printf("是星期一啊！\n");break;
        case 'W':printf("是星期三啊！\n");break;
        case 'F':printf("是星期五啊！\n");break;
        case 'T':
        {
            printf("请输入星期几的第二个英语单词：");
            scanf(" %c", &ch);
            if ('u' == ch)
            {
                printf("是星期二啊！\n");
            }
            else
            {
                printf("是星期四啊！\n");
            }
            
        }
        case 'S':
        {
            printf("请输入星期几的第二个英语单词：");
            scanf(" %c", &ch);
            if ('a' == ch)
            {
                printf("是星期六啊！\n");
            }
            else
            {
                printf("是星期日啊！\n");
            }
            
        }
        default:printf("您输入的字符是非法的！");
    }
    return 0;
}