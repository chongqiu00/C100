/*
时间：2020/12/18 14:40
近期修改：2021/2/5 14:45
编辑人：chongqiu00
题目38： 求一个 3*3 矩阵对角线元素之和
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
结论：
1，数组名即为数组第一个元素的首地址， 即 arry[3] ==>> arry==&arry;

*（arry+2） == arry[2];

2, 二维数组arry[2][3] 即为地址的地址， 可将arry[2][3]看作arry[2]的一维数组。
*/