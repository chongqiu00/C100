/*
ʱ�䣺2020/12/20 10:16
�༭�ˣ�chongqiu00
��Ŀ�� ��д input() �� output() �������룬���5��ѧ�������ݼ�¼��
*/

#include <stdio.h>

typedef struct Student
{
    char name[20];
    int age;
    char class[20];
    char school[20];
}Stu, *p_Stu;

void input(Stu stu[], int n);
void output(Stu stu[], int n);

int main(int argc, int* argv[])
{
    Stu stu[5];
    input(stu, 5);
    output(stu, 5);

    return 0;
}

void input(Stu stu[], int n)
{
    printf("��ʼ¼��ѧ����Ϣ��\n");
    int i;
    for (i=0; i<n; i++)
    {
        printf("ѧ��%d:\n", i+1);
        printf("������");
        scanf("%s", stu[i].name);
        printf("���䣺");
        scanf("%d", &stu[i].age);
        printf("�꼶��");
        scanf("%s", stu[i].class);
        printf("ѧУ��");
        scanf("%s", stu[i].school);
    }

    printf("¼����ϣ�\n");

}
void output(Stu stu[], int n)
{
    printf("��ʼ��ȡѧ����Ϣ��\n");
    int i;
    for (i=0; i<n; i++)
    {
        printf("ѧ��%d:\n", i+1);
        printf("������%s\t",stu[i].name);
        printf("���䣺%d\t", stu[i].age);
        printf("�꼶��%s\t", stu[i].class);
        printf("ѧУ��%s\t", stu[i].school);
        printf("\n");
    }

    printf("��ȡ��ϣ�\n");

}

/*

*/