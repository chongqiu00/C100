/*
ʱ�䣺2020/12/19 23:14
�༭�ˣ�chongqiu00
��Ŀ�� �ش������ṹ��������ݣ�
*/
#include <stdio.h>

 struct student
{ 
    int x;
    char c;
};

void f(struct student b);

int main(int argc, int* argv[])
{
    struct student a;
    a.x=3;
    a.c='a';
    f(a);
    printf("%d,%c",a.x,a.c); 
}

void f(struct student b)
{
    b.x=20;
    b.c='y';
}



/*
�ܽ᣺
���ڴ������һ��ֵ����f()�����������ú󣬼��ͷ��ڴ�ռ䣬�޷��ı��������е�a�ṹ��ֵ��
��Ҫ�ı�a�ṹ�����ֵ���ݣ���Ҫ��f�������������������ַ��
void f(struct student* b)
{
    (*b).x=20;
    (*b).c='y';
}
*/