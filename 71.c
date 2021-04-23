/*
时间：2020/12/20 10:16
编辑人：chongqiu00
题目： 编写 input() 和 output() 函数输入，输出5个学生的数据记录。
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
    printf("开始录入学生信息：\n");
    int i;
    for (i=0; i<n; i++)
    {
        printf("学生%d:\n", i+1);
        printf("姓名：");
        scanf("%s", stu[i].name);
        printf("年龄：");
        scanf("%d", &stu[i].age);
        printf("年级：");
        scanf("%s", stu[i].class);
        printf("学校：");
        scanf("%s", stu[i].school);
    }

    printf("录入完毕！\n");

}
void output(Stu stu[], int n)
{
    printf("开始读取学生信息：\n");
    int i;
    for (i=0; i<n; i++)
    {
        printf("学生%d:\n", i+1);
        printf("姓名：%s\t",stu[i].name);
        printf("年龄：%d\t", stu[i].age);
        printf("年级：%s\t", stu[i].class);
        printf("学校：%s\t", stu[i].school);
        printf("\n");
    }

    printf("读取完毕！\n");

}

/*

*/