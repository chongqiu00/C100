/*
ʱ�䣺2020/12/18 12:20
�����޸ģ�2021/1/22 0:57
�༭�ˣ�chongqiu00
��Ŀ17������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
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
���ۣ�
��getchar()�������������ݣ�ÿ�β���һ��Ԫ�ء�
 */


