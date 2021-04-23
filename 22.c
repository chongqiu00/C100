/*
时间：2020/12/18 13:56
近期修改：2021/2/2 14:03
编辑人：chongqiu00
题目22： 
两个乒乓球队进行比赛，各出三人。甲队为 a,b,c 三人，乙队为 x,y,z 三人。已抽签决定比赛名单。
有人向队员打听比赛的名单。a说他不和x比， c说他不和x,z比，请编程序找出三队赛手的名单。

<   以下两种方式，差别不大  >
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
      int game[3]; // game[0] ~ game[2] 分别代表 甲队的 a, b, c;
      int x, y, z;//代表乙队的x, y, z

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

