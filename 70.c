/*
时间：2020/12/20 9:57
编辑人：chongqiu00
题目： 写一个函数，求一个字符串的长度，在 main 函数中输入字符串，并输出其长度。
*/

#include <stdio.h>

int main (int argc, int* argv[])
{
    int count = 0;
    int i;
    printf("请输入一串字符串：");
    char str[100];
    char* p_str = str;
    // //方式一：
    // gets(str);
    
    //方式二：
   scanf("%[^\n]",str);

    while ('\0' != *p_str)
    {
        count++;
        p_str++;
    }

    printf("您输入的字符串的长度为%d\n", count);

    return 0;
}

/*
注意：
1，scanf();在空格处停止扫描
2，gets()；可以扫描空格
3，scanf("%[^\n]",str) 
遇到 "\n" 结束
'^' 含有非的意思
“%[^\n]“ 即遇到\n结束。
*/