/*
ʱ�䣺2020/12/18 21:03
�༭�ˣ�chongqiu00
��Ŀ�� ʱ�亯������ 1 
*/

#include <stdio.h>
#include <time.h>

int main(int argc, int* argv[])
{ 
    time_t lt; /*define a longint time varible*/
    time(&lt);
    lt=time(NULL);/*system time and date*/
    printf(ctime(&lt)); /*english format output*/
    printf(asctime(localtime(&lt)));/*tranfer to tm*/
    printf(asctime(gmtime(&lt))); /*tranfer to Greenwich time*/
    return 0;
} 

/*
���ۣ�
time����
����ԭ��: time_t time(time_t *timer)
����˵��: timer=NULLʱ�õ���ǰ����ʱ�䣨��1970-01-01 00:00:00�����ڵ���������timer=ʱ����ֵʱ��(����)
������������ʱ�䣬time_t��һ��unsigned long���͡���� timer��Ϊ�գ��򷵻�ֵҲ�洢�ڱ��� timer�С�
��������: �õ���ǰ����ʱ�������������ʱ��
��������: ��ǰ����ʱ��

����ʾ����
#include <stdio.h>
#include <time.h>

int main ()
{
  time_t seconds;

  seconds = time(NULL);
  printf("�� 1970-01-01 ���Сʱ�� = %ld\n", seconds/3600);

  return(0);
}

// ���н������ 1970-01-01 ���Сʱ�� = 446749

ctime����
����ԭ��: char *ctime(const time_t * timer)
��������: ������ʱ�����timerת��Ϊһ����ʾ���ص�ǰʱ����ַ���
��������: �����ַ�����ʽ������,��,��,Сʱ:��:��,��
����˵��: timer����Ӧ�ɺ���time��ã���ȼ��� astime( localtime(timer) )
����ʾ����
#include <stdio.h>
#include <time.h>

int main ()
{
   time_t curtime;
   time(&curtime);
   
   printf("��ǰʱ�� = %s", ctime(&curtime));

   return(0);
}

//���н������ǰʱ�� = Fri Dec 18 21:46:15 2020


asctime����
����ԭ��: char* asctime(struct tm * ptr)
��������:���ṹstruct tm * ptr����ʾ��ʱ�����ַ�����ʾ
��������: ���ص�ʱ���ַ�����ʽΪ������,��,��,Сʱ:��:��,��
����˵��: �ṹָ��ptrӦͨ������localtime()��gmtime()�õ�

����ʾ����
#include <stdio.h>
#include <time.h>
int main()
{
   struct tm t;//�����������ͨ��localtime������gmtime�������tm�ṹ

   t.tm_sec    = 10;
   t.tm_min    = 20;
   t.tm_hour   = 6;
   t.tm_mday   = 25;
   t.tm_mon    = 2;
   t.tm_year   = 89;
   t.tm_wday   = 6;

   printf("%s\n",asctime(&t));

   return(0);
}

//���н����Sat Mar 25 06:20:10 1989 

���е�tm�ṹ�����£�
struct tm
{
   int tm_sec;         // �룬��Χ�� 0 �� 59      
   int tm_min;         // �֣���Χ�� 0 �� 59      
   int tm_hour;        // Сʱ����Χ�� 0 �� 23     
   int tm_mday;        // һ���еĵڼ��죬��Χ�� 1 �� 31   
   int tm_mon;         // �£���Χ�� 0 �� 11(ע��)  
   int tm_year;        // �� 1900 ���������      
   int tm_wday;        // һ���еĵڼ��죬��Χ�� 0 �� 6 
   int tm_yday;        // һ���еĵڼ��죬��Χ�� 0 �� 365   
   int tm_isdst;       // ����ʱ               
};

localtime����
����ԭ��: struct tm *localtime(const time_t *timer)
��������: ʹ�� timer ��ֵ����� tm �ṹ��timer ��ֵ���ֽ�Ϊ tm �ṹ�����ñ���ʱ����ʾ��
��������: ��tm�ṹ����ʱ��

����ʾ����
#include <stdio.h>
#include <time.h>

int main ()
{
   time_t timer;
   struct tm *Now;

   time( &timer );
   Now = localtime( &timer );
   printf("��ǰ�ı���ʱ������ڣ�%s", asctime(Now));

   return(0);
}

// ���н������ǰ�ı���ʱ������ڣ�Fri Dec 18 21:39:52 2020

gmtime����
����ԭ��: struct tm *gmtime(time_t *timer)
��������: �õ��Խṹtm��ʾ��ʱ����Ϣ�����ø������α�׼ʱ���ʾ
��������: �Խṹtm��ʾ��ʱ����Ϣָ��
����˵��: timer�ú���time()�õ���ʱ����Ϣ

����ʾ����
#include <stdio.h>
#include <time.h>

#define BST (+1)
#define CCT (+8)

int main ()
{

   time_t rawtime;
   struct tm *info;

   time(&rawtime);
   // ��ȡ GMT ʱ��
   info = gmtime(&rawtime );

   printf("��ǰ������ʱ�ӣ�\n");
   printf("�׶أ�%2d:%02d\n", (info->tm_hour+BST)%24, info->tm_min);
   printf("�й���%2d:%02d\n", (info->tm_hour+CCT)%24, info->tm_min);

   return(0);
}

���н����
��ǰ������ʱ�ӣ�
�׶أ�14:51
�й���21:51

*/