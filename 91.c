/*
时间：2020/12/18 21:03
编辑人：chongqiu00
题目： 时间函数举例 1 
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
结论：
time函数
函数原型: time_t time(time_t *timer)
参数说明: timer=NULL时得到当前日历时间（从1970-01-01 00:00:00到现在的秒数），timer=时间数值时，(秒数)
用于设置日历时间，time_t是一个unsigned long类型。如果 timer不为空，则返回值也存储在变量 timer中。
函数功能: 得到当前日历时间或者设置日历时间
函数返回: 当前日历时间

代码示例：
#include <stdio.h>
#include <time.h>

int main ()
{
  time_t seconds;

  seconds = time(NULL);
  printf("自 1970-01-01 起的小时数 = %ld\n", seconds/3600);

  return(0);
}

// 运行结果：自 1970-01-01 起的小时数 = 446749

ctime函数
函数原型: char *ctime(const time_t * timer)
函数功能: 将日历时间参数timer转换为一个表示本地当前时间的字符串
函数返回: 返回字符串格式：星期,月,日,小时:分:秒,年
参数说明: timer参数应由函数time获得，其等价于 astime( localtime(timer) )
代码示例：
#include <stdio.h>
#include <time.h>

int main ()
{
   time_t curtime;
   time(&curtime);
   
   printf("当前时间 = %s", ctime(&curtime));

   return(0);
}

//运行结果：当前时间 = Fri Dec 18 21:46:15 2020


asctime函数
函数原型: char* asctime(struct tm * ptr)
函数功能:将结构struct tm * ptr所表示的时间以字符串表示
函数返回: 返回的时间字符串格式为：星期,月,日,小时:分:秒,年
参数说明: 结构指针ptr应通过函数localtime()或gmtime()得到

代码示例：
#include <stdio.h>
#include <time.h>
int main()
{
   struct tm t;//更多情况下是通过localtime函数及gmtime函数获得tm结构

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

//运行结果：Sat Mar 25 06:20:10 1989 

其中的tm结构体如下：
struct tm
{
   int tm_sec;         // 秒，范围从 0 到 59      
   int tm_min;         // 分，范围从 0 到 59      
   int tm_hour;        // 小时，范围从 0 到 23     
   int tm_mday;        // 一月中的第几天，范围从 1 到 31   
   int tm_mon;         // 月，范围从 0 到 11(注意)  
   int tm_year;        // 自 1900 年起的年数      
   int tm_wday;        // 一周中的第几天，范围从 0 到 6 
   int tm_yday;        // 一年中的第几天，范围从 0 到 365   
   int tm_isdst;       // 夏令时               
};

localtime函数
函数原型: struct tm *localtime(const time_t *timer)
函数功能: 使用 timer 的值来填充 tm 结构。timer 的值被分解为 tm 结构，并用本地时区表示。
函数返回: 以tm结构表达的时间

代码示例：
#include <stdio.h>
#include <time.h>

int main ()
{
   time_t timer;
   struct tm *Now;

   time( &timer );
   Now = localtime( &timer );
   printf("当前的本地时间和日期：%s", asctime(Now));

   return(0);
}

// 运行结果：当前的本地时间和日期：Fri Dec 18 21:39:52 2020

gmtime函数
函数原型: struct tm *gmtime(time_t *timer)
函数功能: 得到以结构tm表示的时间信息，并用格林威治标准时间表示
函数返回: 以结构tm表示的时间信息指针
参数说明: timer用函数time()得到的时间信息

代码示例：
#include <stdio.h>
#include <time.h>

#define BST (+1)
#define CCT (+8)

int main ()
{

   time_t rawtime;
   struct tm *info;

   time(&rawtime);
   // 获取 GMT 时间
   info = gmtime(&rawtime );

   printf("当前的世界时钟：\n");
   printf("伦敦：%2d:%02d\n", (info->tm_hour+BST)%24, info->tm_min);
   printf("中国：%2d:%02d\n", (info->tm_hour+CCT)%24, info->tm_min);

   return(0);
}

运行结果：
当前的世界时钟：
伦敦：14:51
中国：21:51

*/