/*
ʱ�䣺2020/12/19 15:49
�༭�ˣ�chongqiu00
��Ŀ�� ��һ���������������
*/

// //��ʽһ��
// #include <stdio.h>

// int main (int argc, int* argv[])
// {
//     int arry[10] = {0,};
//     int i;

//     printf("please enter 10 number:\n");
//     for (i=0; i<10; i++)
//     {
//         printf("arry[%d]=", i);
//         scanf ("%d", &arry[i]);
//     }

//     printf("inverted��");
//     for (i=9; i>-1; i--)
//     {
//         printf("%d ", arry[i]);
//     }
//     return 0;
// }


//��ʽ����
#include <stdio.h>

int main (int argc, int* argv[])
{
    int arry[10] = {0,};
    int i;

    int* p = arry;
    int* q = arry + 9;

    printf("please enter 10 number:\n");
    for (i=0; i<10; i++)
    {
        printf("arry[%d]=", i);
        scanf ("%d", &arry[i]);
    }

    //����
    while (p < q)
    {
        *p = *p ^ *q;
        *q = *q ^ *p;
        *p = *p ^ *q;

        p++;
        q--;
    }
    printf("inverted��");
    for (i=0; i<10; i++)
    {
        printf("%d ", arry[i]);
    }

    return 0;
}