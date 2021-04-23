/*
时间：2020/12/23 12:58
编辑人：chongqiu00
题目：实现蒙特卡罗算法:计算Π值
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 500000000

int main (int argc, char* argv[])
{
    double rand_x_double, rand_y_double;
    int count;
    int sum = 0;

    srand(time(NULL));
    for (count=0; count<N; count++){
        rand_x_double =(double) rand() / RAND_MAX;
        rand_y_double =(double) rand() / RAND_MAX;

        if ((rand_x_double*rand_x_double + rand_y_double*rand_y_double) < 1){
                sum++;
            }
    }

    printf("Π=%lf\n", (double)sum*4/N);
    return 0;
}

// //1.
// #include <stdio.h>
// #include <math.h>
// #include <time.h>
// double seed;
// #define TEST_NUMBER 500000000
// double rand(double L, double R);
// void srand(double next);
// typedef struct point
// {
//     double x;
//     double y;
// }point;
// int main (void)
// {
//     point p;
//     unsigned long int i, cnt = 0;
   
//     for (i=0; i<TEST_NUMBER; i++)
//     {
//         srand(time(NULL));
//         p.x = rand(-1.0, 1.0);
//         p.y = rand(-1.0, 1.0);
//         if ((p.x * p.x + p.y * p.y) < 1)
//             cnt++;
//     }
//     printf("Π=%f", (double)cnt*4.0 / TEST_NUMBER);
//     return 0;
// }
// void srand(double next)
// {
//     seed = next;
// }
// double rand(double L, double R)
// {
//     seed = seed *2.57845 + 5.57489;
//     return (L + fmod(seed, R-L));
// }

////2.
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//     double x, y;
//     int i;
//     int cnt = 0;
//     // srand(time(0));
//     // x = ((double)rand()*2/ RAND_MAX) - 1;
//     // y = ((double)rand()*2/ RAND_MAX) - 1;
//     // printf("%lf, %lf\n", x, y);


//     for (i=0; i<100000000; i++)
//     {
//         srand(time(0));
//         x = ((double)rand() * 2 / RAND_MAX)-1.0;
//         y = ((double)rand() * 2 / RAND_MAX)-1.0;
//         if (x*x + y*y <= 1)
//             cnt++;
//     }
//     printf("%lf\n", cnt*4.0/100000000);

//     return 0;
// }


