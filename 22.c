/*
ʱ�䣺2020/12/18 13:56
�����޸ģ�2021/2/2 14:03
�༭�ˣ�chongqiu00
��Ŀ22�� 
����ƹ����ӽ��б������������ˡ��׶�Ϊ a,b,c ���ˣ��Ҷ�Ϊ x,y,z ���ˡ��ѳ�ǩ��������������
�������Ա����������������a˵������x�ȣ� c˵������x,z�ȣ��������ҳ��������ֵ�������

<   �������ַ�ʽ����𲻴�  >
*/

#include <stdio.h>

int main (int argc, int* argv[])
{
    char a[3] = {'a', 'b', 'c'};
    char b[3];
    int x, y, z;
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            for (z = 0; z < 3; z++)
            {
                if (x == y || x == z || y == z)
                {
                    continue;
                }
                printf("%d %d %d\n", x, y, z);
                if (0 != x && 0 != z && 2 != z)
                {
                    b[0] = 88 + x;
                    b[1] = 88 + y;
                    b[2] = 88 + z;
                }
            }
        }
    }

    printf("a vs %c\n", b[0]);
    printf("b vs %c\n", b[1]);
    printf("c vs %c\n", b[2]);
    return 0;
}

#include <stdio.h>

int main (int argv, char* argc[])
{
      int game[3]; // game[0] ~ game[2] �ֱ���� �׶ӵ� a, b, c;
      int x, y, z;//�����Ҷӵ�x, y, z

      for (x=0; x<3; x++)
      {
            for (y=0; y<3; y++)
            {
                  for (z=0; z<3; z++)
                  {
                        if (x == y || x == z || y == z)
                        {
                              continue;
                        }

                        game[0] = x; game[1] = y; game[2] = z;

                        if (game[0] != 0 && game[2] != 0 && game[2] != 2)
                        {
                              printf("a vs %c\nb vs %c\nc vs %c\n", 88+x, 88+y, 88+z);
                        }
                  }
            }
      }

      return 0;
}

