/*
时间：2020/12/18 7:57
编辑人：chongqiu00
题目5： 输入三个整数 x,y,z，请把这三个数由小到大输出。（主函数中定义分配内存）
*/

#include <stdio.h>

typedef char ElemType;

typedef void (*vi)(ElemType);//声明了一个指针类型
typedef void (*pi)(ElemType*);//声明了一个指针类型

void InitSort(ElemType* arry, int length, pi fp);
void BubbleSort(ElemType* arry, int length);
void TraverseSort(ElemType* arry, int length, vi fp);

//输入数据类型
void f_scanf_int(ElemType* a);
void f_scanf_char(ElemType* a);
void f_scanf_float(ElemType* a);

//输出数据类型选择
void f_printf_int(ElemType a);
void f_printf_char(ElemType a);
void f_printf_float(ElemType a);

 int main (int argc, int* argv[])
 {
    char a[3];
    InitSort(a, 3, f_scanf_char);
    BubbleSort(a, 3);
    TraverseSort(a, 3, f_printf_char);

     return 0;
 }

void InitSort(ElemType* arry, int length, pi fp)
{
    int i;
    printf("start input %d number :\n", length);
    for (i =0 ; i < length; i++)
    {
        printf("%d. ", i+1);
        //scanf("%d", &arry[i]);
        fp(&arry[i]);

    }
}

 void BubbleSort(ElemType* arry, int length)
 {
     int i, j;
     for ( i = 0; i < length-1; i++ )
     {
         for ( j = 1; j < length; j++ )
         {
             if ( arry[i] > arry[j] )
             {
                arry[i] = arry[i] ^ arry[j];
                arry[j] = arry[j] ^ arry[i];
                arry[i] = arry[i] ^ arry[j];
             }
         }
     }
 }

void TraverseSort(ElemType* arry, int length, vi fp)
{
  int i;
  for ( i = 0; i < length; i++)
  {
      fp(arry[i]);
  }
}

void f_printf_int(ElemType a)
{
    printf("%d ", a);
    return;
}

void f_printf_char(ElemType a)
{
    printf("%c ", a);
    return;
}

void f_printf_float(ElemType a)
{
    printf("%f ", a);
    return;
}

void f_scanf_int(ElemType* a)
{
    scanf("%d", a);
    return;
}

void f_scanf_char(ElemType* a)
{
    scanf(" %c", a);
    return;
}

void f_scanf_float(ElemType* a)
{
    scanf("%f", a);
    return;
}

/*
总结：
1，scanf("%c",&ch);从输入中的第一个字符开始读取；
   scanf(" %c",&ch);则从第一个非空白字符开始读取。
   对于%d输入的无影响。
2，定义一个函数指针，形式为：
typedef + 函数类型
切记要在函数名前加*，并且（）括起来。
例如：typedef void (*vi)(ElemType);

vi 代表一个函数的数据类型。
*/

