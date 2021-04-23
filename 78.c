/*
时间：2020/12/19 20:54
编辑人：chongqiu00
题目： 找到年龄最大的人，并输出。请找出程序中有什么问题。

#define N 4
#include "stdio.h"
static struct man
{ 
    char name[20];
    int age;
}person[N]={"li",18,"wang",19,"zhang",20,"sun",22};

int main(int argc, int* argv[])
{
    struct man *q,*p;
    int i,m=0;
    p = person;

    for (i=0; i<N; i++)
    {
        if( m < p->age )
        {
            q = p++;
        }
        m = q->age;
    }

    printf("%s, %d", (*q).name, (*q).age);

    return 0;
}

*/

//分析：只有当m < p->age时，才会遍历数组元素。

#define N 4
#include "stdio.h"
static struct man
{ 
	char name[20];
	int age;
}person[N]={
            {"li",20},
            {"wang",19},
            {"zhang",18},
            {"sun",22}
            };//这改动一下，做测试

int main(int argc, int* argv[])
{
	struct man *q,*p;
	int i,m=0;
	p=person;
	for (i=0;i<N;i++,p++)  //在这修改，加了个p++,保证p能够遍历整个数组
	{
		if(m<p->age)
		{	
			q=p;          //在这也改一下，加个括号。
			m=q->age;
		}
	}
	printf("%s,%d",(*q).name,(*q).age);
	return 0; 
}