/*
ʱ�䣺2020/12/18 21:03
�༭�ˣ�chongqiu00
��Ŀ�� ʱ�亯������ 3
*/

#include <stdio.h>
#include <time.h>

int main(int argc, int* argv[])
{ 
    clock_t start,end;
    int i;
    double var;
    start=clock();
    for(i=0;i<10000;i++)
    { 
        printf("\1\1\1\1\1\1\1\1\1\1\n");
    }
    end=clock();
    printf("\1: The different is %6.3f\n", (double)(end-start) / CLOCKS_PER_SEC);
    return 0;
} 

/*
���ۣ�
clock����
����ԭ�ͣ� clock_t clock(void)
�������أ�����clock����ִ����һ��Ϊ����Ŀ�ͷ����������ʱ����ʹ�õ�ʱ�䡣
�������ܣ�����������������ĳһ�ε�ִ��ʱ�䡣

����ʾ����
#include<stdio.h>
#include<time.h>

int main()
{
    clock_t start_t,finish_t;
    double total_t = 0;
    int i = 0;

    start_t = clock();

    for(;i<100000;++i)
    {
        //do someting;
    }

    finish_t = clock();
    
    total_t = (double)(finish_t - start_t) / CLOCKS_PER_SEC;//��ʱ��ת��Ϊ��

    printf("CPU ռ�õ���ʱ�䣺%f\n", total_t);
    return 0;
}
*/