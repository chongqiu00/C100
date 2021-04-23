/*
ʱ�䣺2020/12/18 21:03
�༭�ˣ�chongqiu00
��Ŀ�� ʱ�亯������ 2
*/

#include <stdio.h>
#include <time.h>

int main(int argc, int* argv[])
{ 
    time_t start,end;
    int i;
    start=time(NULL);
    for(i=0;i<3000;i++)
    { 
        printf("\1\1\1\1\1\1\1\1\1\1\n");
    }
    end=time(NULL);
    printf("The different is %6.3f\n",difftime(end,start));
    
    return 0;
} 

/*
���ۣ�
difftime����
����ԭ��: double difftime(time_t time2, time_t time1)
��������: �õ����λ���ʱ����λΪ��
��������: ʱ����λΪ��
����˵��: time1,time2�ֱ��ʾ������ͬ�Ļ���ʱ�䣬�ò���Ӧʹ��time�������

ʾ�����룺
#include <time.h>  
#include <stdio.h> 
#include <windows.h>

int main()  
{  
    time_t first,second;  
    time(&first);  
    Sleep(2000);  
    time(&second);
    printf("The difference is: %f seconds",difftime(second,first));  

    return 0;  
}  

//���н����The difference is: 2.000000 seconds
*/