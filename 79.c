/*
ʱ�䣺2020/12/20 10:48
�༭�ˣ�chongqiu00
��Ŀ�� �ַ�������
*/

#include <stdio.h>
#include <string.h>
void swap(char* p1, char* p2);
int main (int argc, int* argv[])
{
    char str1[20],str2[20],str3[20];
    printf("please input three strings\n");
    scanf("%s",str1);
    scanf("%s",str2);
    scanf("%s",str3);
    if(strcmp(str1,str2)>0) swap(str1,str2);
    if(strcmp(str1,str3)>0) swap(str1,str3);
    if(strcmp(str2,str3)>0) swap(str2,str3);
    printf("after being sorted\n");
    printf("%s\n%s\n%s\n",str1,str2,str3); 

    return 0;
}

void swap(char* p1, char* p2)
{
    char p[20];
    strcpy(p,p1);
    strcpy(p1,p2);
    strcpy(p2,p);
} 

/*
֪ʶ�㣺
1��strcpy������
��string copy���ַ������ƣ�����д��
strcpy��һ��C���Եı�׼�⺯����strcpy�Ѵ�src��ַ��ʼ�Һ��С�\0�����������ַ������Ƶ���dest��ʼ�ĵ�ַ�ռ䣬

ͷ�ļ���#include <string.h>
����ԭ�ͣ�char * strcpy( char * dst, const char * src );
����ֵ������Ŀ���ַ���dst.

2��strcmp()��
�����Ƚ��ַ��������ִ�Сд����
ͷ�ļ���#include <string.h>
����ԭ�ͣ�int strcmp(const char *s1, const char *s2);
����ֵ��
������ s1 �� s2 �ַ�����ͬ�򷵻� 0��
s1 ������ s2 �򷵻ش��� 0 ��ֵ��
s1 ��С�� s2 �򷵻�С�� 0 ��ֵ��
ע�⣺
strcmp()���Ƚ�s1 ��һ���ַ�ֵ��ȥs2 ��һ���ַ�ֵ��
����ֵΪ0 ���ټ����Ƚ��¸��ַ�������ֵ��Ϊ0 �򽫲�ֵ���ء�
�����ַ���"Ac"��"ba"�Ƚ���᷵���ַ�"A"(65)��'b'(98)�Ĳ�ֵ(��33)��


*/