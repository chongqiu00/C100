/*
��ӡ�����Ǻ͵�����

*/

#include <stdio.h>

int main (int argc, char* argv[])
{
    int ii, ji;
    //������
    for (ii=1; ii<5; ii++)//��
    {
        //�ո����
        ji = 4 - ii;
        while ( ji )
        {
            printf(" ");
            ji--;
        }
        //�Ǻ����
        ji = 2*ii - 1;
        while ( ji )
        {
            printf("*");
            ji--;
        }
        printf("\n");
    }

    //������
    for (ii=1; ii<5; ii++)
    {
        //��ӡ�ո�
        ji = ii - 1;
        while ( ji ){
            printf(" ");
            ji--;
        }
        //��ӡ�Ǻ�
        ji = -2*ii + 9;
        while ( ji ){
            printf("*");
            ji--;
        }
        printf("\n");
    }
    return 0;
}