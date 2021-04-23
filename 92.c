/*
时间：2020/12/18 21:03
编辑人：chongqiu00
题目： 时间函数举例 2
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
结论：
difftime函数
函数原型: double difftime(time_t time2, time_t time1)
函数功能: 得到两次机器时间差，单位为秒
函数返回: 时间差，单位为秒
参数说明: time1,time2分别表示两个不同的机器时间，该参数应使用time函数获得

示例代码：
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

//运行结果：The difference is: 2.000000 seconds
*/