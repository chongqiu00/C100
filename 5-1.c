/*
ʱ�䣺2020/12/18 7:57
�༭�ˣ�chongqiu00
��Ŀ5�� ������������ x,y,z���������������С������������������ж�������ڴ棩
*/

#include <stdio.h>

typedef char ElemType;

typedef void (*vi)(ElemType);//������һ��ָ������
typedef void (*pi)(ElemType*);//������һ��ָ������

void InitSort(ElemType* arry, int length, pi fp);
void BubbleSort(ElemType* arry, int length);
void TraverseSort(ElemType* arry, int length, vi fp);

//������������
void f_scanf_int(ElemType* a);
void f_scanf_char(ElemType* a);
void f_scanf_float(ElemType* a);

//�����������ѡ��
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
�ܽ᣺
1��scanf("%c",&ch);�������еĵ�һ���ַ���ʼ��ȡ��
   scanf(" %c",&ch);��ӵ�һ���ǿհ��ַ���ʼ��ȡ��
   ����%d�������Ӱ�졣
2������һ������ָ�룬��ʽΪ��
typedef + ��������
�м�Ҫ�ں�����ǰ��*�����ң�����������
���磺typedef void (*vi)(ElemType);

vi ����һ���������������͡�
*/

