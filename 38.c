/*
ʱ�䣺2020/12/18 14:40
�����޸ģ�2021/2/5 14:45
�༭�ˣ�chongqiu00
��Ŀ38�� ��һ�� 3*3 ����Խ���Ԫ��֮��
*/

#include <stdio.h>

int main (int argc, int* argv[])
{
    int matrix[3][3];
    int i, j;
    int matrix_sum = 0;

    printf("please enter 3*3 matrix:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("matrix[%d][%d]=", i, j);
            scanf("%d", &matrix[i][j]);

            if (i == j)
            {
                matrix_sum += matrix[i][j];
            }

        }
    }

    printf("total %d\n", matrix_sum);

    return 0;
}

/*
���ۣ�
1����������Ϊ�����һ��Ԫ�ص��׵�ַ�� �� arry[3] ==>> arry==&arry;

*��arry+2�� == arry[2];

2, ��ά����arry[2][3] ��Ϊ��ַ�ĵ�ַ�� �ɽ�arry[2][3]����arry[2]��һά���顣
*/