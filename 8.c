/*
ʱ�䣺2020/12/18 9:00
�����޸ģ�2021/1/21 14:15
�༭�ˣ�chongqiu00
��Ŀ8�� ��� 9*9 �ھ���
*/

#include <stdio.h>

int main (int argv, char* argc[])
{
    int line, list;//�У���

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