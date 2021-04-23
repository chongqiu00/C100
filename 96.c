/*
时间：2020/12/20 16:43
编辑人：chongqiu00
题目： 计算字符串中子串出现的次数
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(int argc, int* argv[])
{
    int count = 0;
    char str_1[100];
    char str_2[100];
    printf("请输入被查找的字符串str_1=");
    scanf("%s", str_1);
    printf("请输入您要查找的对象子字符串str_2=");
    scanf("%s", str_2);
    
    printf("str_1=%s\n", str_1);
    printf("str_2=%s\n", str_2);

    char* p_str_1 = str_1;
    char* p_str_2 = str_2;

    while ('\0' != *p_str_1 && '\0' != *p_str_2 ){
            if (*p_str_2 == *p_str_1){
                p_str_1++;
                p_str_2++;
            }
            else{
                p_str_1++;
                p_str_2 = str_2;
            }


            if ('\0' == *p_str_2){
                count++;
                p_str_2 = str_2;
            }
    }

    printf("%d\n", count);

    return 0;
}

