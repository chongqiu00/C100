/*
ʱ�䣺2020/12/20 9:57
�༭�ˣ�chongqiu00
��Ŀ�� дһ����������һ���ַ����ĳ��ȣ��� main �����������ַ�����������䳤�ȡ�
*/

#include <stdio.h>

int main (int argc, int* argv[])
{
    int count = 0;
    int i;
    printf("������һ���ַ�����");
    char str[100];
    char* p_str = str;
    // //��ʽһ��
    // gets(str);
    
    //��ʽ����
   scanf("%[^\n]",str);

    while ('\0' != *p_str)
    {
        count++;
        p_str++;
    }

    printf("��������ַ����ĳ���Ϊ%d\n", count);

    return 0;
}

/*
ע�⣺
1��scanf();�ڿո�ֹͣɨ��
2��gets()������ɨ��ո�
3��scanf("%[^\n]",str) 
���� "\n" ����
'^' ���зǵ���˼
��%[^\n]�� ������\n������
*/