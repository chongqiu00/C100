/*
ʱ�䣺2020/12/20 7:58
�༭�ˣ�chongqiu00
��Ŀ31�� ���������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ���
�����һ����ĸһ����������жϵڶ�����ĸ��
*/

#include <stdio.h>

int main (int argc, int* argv[])
{
    char ch;
    printf("���������ڼ��ĵ�һ��Ӣ�ﵥ��:(ע���һ����ĸ�Ǵ�дŶ��)");
    scanf(" %c", &ch);

    switch (ch)
    {
        case 'M':printf("������һ����\n");break;
        case 'W':printf("������������\n");break;
        case 'F':printf("�������尡��\n");break;
        case 'T':
        {
            printf("���������ڼ��ĵڶ���Ӣ�ﵥ�ʣ�");
            scanf(" %c", &ch);
            if ('u' == ch)
            {
                printf("�����ڶ�����\n");
            }
            else
            {
                printf("�������İ���\n");
            }
            
        }
        case 'S':
        {
            printf("���������ڼ��ĵڶ���Ӣ�ﵥ�ʣ�");
            scanf(" %c", &ch);
            if ('a' == ch)
            {
                printf("������������\n");
            }
            else
            {
                printf("�������հ���\n");
            }
            
        }
        default:printf("��������ַ��ǷǷ��ģ�");
    }
    return 0;
}