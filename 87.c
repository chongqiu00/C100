/*
时间：2020/12/19 23:14
编辑人：chongqiu00
题目： 回答结果（结构体变量传递）
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
总结：
由于传入的是一个值，故f()函数结束调用后，即释放内存空间，无法改变主函数中的a结构的值。
若要改变a结构体的数值内容，需要将f（）函数传入其变量地址。
void f(struct student* b)
{
    (*b).x=20;
    (*b).c='y';
}
*/