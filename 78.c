/*
ʱ�䣺2020/12/19 20:54
�༭�ˣ�chongqiu00
��Ŀ�� �ҵ����������ˣ�����������ҳ���������ʲô���⡣

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

//������ֻ�е�m < p->ageʱ���Ż��������Ԫ�ء�

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
            };//��Ķ�һ�£�������

int main(int argc, int* argv[])
{
	struct man *q,*p;
	int i,m=0;
	p=person;
	for (i=0;i<N;i++,p++)  //�����޸ģ����˸�p++,��֤p�ܹ�������������
	{
		if(m<p->age)
		{	
			q=p;          //����Ҳ��һ�£��Ӹ����š�
			m=q->age;
		}
	}
	printf("%s,%d",(*q).name,(*q).age);
	return 0; 
}