/*
时间：2020/12/19 22:59
编辑人：chongqiu00
题目： 两个字符串连接程序
*/

#include <stdio.h>
int main(void)
{
    char a[] = "zzzzz";
    char b[] = "qqqqoooooq";
    char c[80];
//     //方法一：使用指针遍历两个数组
//     char *pb = b;   
//     char *pc = c;   
//     char *pC = c;
//     while ('\0' != *pa)
//     {
//         *pc = *pa;
//         pc++;
//         pa++;
//     }
//     while ('\0' != *pb)
//     {
//         *pc = *pb;
//         pc++;
//         pb++;
//     }
//    *pc = '\0';
//     while ('\0' != *pC)
//     {
//         printf("%c", *pC);
//         pC++;
//     }


    //方法二：使用数组下标遍历数组
    int i, j;
    for (i=0; a[i] != '\0'; i++)
    {
        c[i] = a[i];       
    }
    for (j=0; b[j] != '\0'; j++)
        {
            c[i+j] = b[j];
        }
        for (i=0;i<20;i++)
   printf("%c", c[i]);
    return 0;
}

/*
总结：
切记切记利用指针或者数组下标遍历数组的时候，我们在遍历完成后，需要给这个新字符串末尾添加一个字符串结束标志'\0'
如果没有在末尾添加一个字符串结束标志，那么这个数组只是存放了一堆字符型数据的数组，而不是字符串！！！！！
*/