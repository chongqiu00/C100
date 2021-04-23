/*
时间：2020/12/20 13:09
编辑人：chongqiu00
题目： 读取 7 个数（ 1—50）的整数值，每读取一个值，程序打印出该值个数的＊。
*/

#include <stdio.h>
#include <conio.h>
int main (int argc, int* argv[])
{
    int i,a,n=1;
    while(n<=7)
    { 
        do
        {
            scanf("%d",&a);
        }while(a<1||a>50);
        
        for(i=1;i<=a;i++)
        printf("*");
        printf("\n");
        n++;
    }
    getch();
    return 0;
}

/*
知识点：

1，getch();
说明：
getch()的作用是从键盘接收一个字符，而且并不把这个字符显示出来，
就是说，你按了一个键后它并不在屏幕上显示你按的什么，而继续运行后面的代码，
所以我们在C++中可以用它来实现“按任意键继续”的效果，
即程序中遇到getch();这行语句，它就会把程序暂停下来，等你按任意键，
它接收了这个字符键后再继续执行后面的代码。

头文件：
#include <conio.h>
函数原型：int getch(void)
返回值：读取的字符
小用法：
--------------------------------------------------------
#include<stdio.h>
#include<conio.h>
void main()
{
     char ch='*';
    
     while(ch=='*')
     {
         printf("\n按 * 继续循环，按其他键退出！");
         ch=getch();
     }
     printf("\n退出程序！");

}
--------------------------------------------------------
2，getche()；
getch()无返回显示，getche()有返回显示。
3,
防止程序执行完后闪退，也可以用goto...语句，
或者 头文件：stdlib.h 下的system("pause"); 语句解决。
还可以用getchar();这个函数返回的是一个10即'\n'。
*/