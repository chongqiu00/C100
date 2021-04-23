/*
时间：2020/12/20 10:48
编辑人：chongqiu00
题目： 字符串排序
*/

#include <stdio.h>
#include <string.h>
void swap(char* p1, char* p2);
int main (int argc, int* argv[])
{
    char str1[20],str2[20],str3[20];
    printf("please input three strings\n");
    scanf("%s",str1);
    scanf("%s",str2);
    scanf("%s",str3);
    if(strcmp(str1,str2)>0) swap(str1,str2);
    if(strcmp(str1,str3)>0) swap(str1,str3);
    if(strcmp(str2,str3)>0) swap(str2,str3);
    printf("after being sorted\n");
    printf("%s\n%s\n%s\n",str1,str2,str3); 

    return 0;
}

void swap(char* p1, char* p2)
{
    char p[20];
    strcpy(p,p1);
    strcpy(p1,p2);
    strcpy(p2,p);
} 

/*
知识点：
1，strcpy（）；
即string copy（字符串复制）的缩写。
strcpy是一种C语言的标准库函数，strcpy把从src地址开始且含有’\0’结束符的字符串复制到以dest开始的地址空间，

头文件：#include <string.h>
函数原型：char * strcpy( char * dst, const char * src );
返回值：返回目的字符串dst.

2，strcmp()；
用来比较字符串（区分大小写）。
头文件：#include <string.h>
函数原型：int strcmp(const char *s1, const char *s2);
返回值：
若参数 s1 和 s2 字符串相同则返回 0。
s1 若大于 s2 则返回大于 0 的值。
s1 若小于 s2 则返回小于 0 的值。
注意：
strcmp()首先将s1 第一个字符值减去s2 第一个字符值，
若差值为0 则再继续比较下个字符，若差值不为0 则将差值返回。
例如字符串"Ac"和"ba"比较则会返回字符"A"(65)和'b'(98)的差值(－33)。


*/