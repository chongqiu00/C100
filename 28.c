/*
时间：2020/12/18 14:40
编辑人：chongqiu00
题目28： 
有5个人坐在一起，问第五个人多少岁？
他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。
问第三个人，又说比第2人大两岁。问第2个人，说比第一个人大两岁。
最后问第一个人，他说是10岁。请问第五个人多大？
*/

#include <stdio.h>
int Age(int people);

int main (void)
{
    printf("five people's age is %d\n", Age(5));
    return 0;
}

int Age(int people)
{
    int age = 10;
    if (1 == people)
    {
        return age;
    }
    else
    {
        age = Age(people-1) + 2;
    }
    
}