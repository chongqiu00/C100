/*
ʱ�䣺2020/12/18 17:29
�༭�ˣ�chongqiu00
��Ŀ34�� ��ϰ��������
*/

#include <stdio.h>

void hello_world(void);
void three_hellos(void);

int main(int argc, int* argv[])
{
    three_hellos();/* ���ô˺��� */
    return 0;
} 

void hello_world(void)
{
    printf("Hello, world!\n");
}

void three_hellos(void)
{
    int counter;
    for (counter = 1; counter <= 3; counter++)
    hello_world();/* ���ô˺��� */
}