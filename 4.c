/*
时间：2020/12/17 19:35
近期修改：2021/1/18 17:40
编辑人：chongqiu00
题目4：输入某年某月某日，判断这一天是这一年的第几天？
*/


// //方式一：
// #include <stdio.h>

// int date_number(int year, int month, int day);
// void legal_year(int* year);
// void legal_month(int* month);
// void legal_day(int* day, int*month);

// int main (int argv, char* argc[])
// {
//     int year, month, day;
//     legal_year(&year);
//     legal_month(&month);
//     legal_day(&day, &month);
    
//     printf("%d.%d.%d is this year %d.\n",year, month, day, date_number(year, month, day));
    
//     return 0;
// }

// void legal_year(int* year)
// {
//      printf("********************\n");
//     printf("please enter year:");
//     while(1 != (scanf("%d", year)))
//     {
//         printf("your input is illegality, please enter year number again。\n");
//         while (getchar() != '\n')
//         continue;
//     }

//     printf("year input succeed!\n");
//     return;
// }

// void legal_month(int* month)
// {
//      printf("********************\n");
//     printf("please enter month:");
//     while (1 != (scanf("%d", month)))//ensure int
//     {
//         printf("your input month is illegality, please enter month number again.\n");
//         while (getchar() != '\n')
//         continue;
//     }

//     while (*month < 1 || *month >12)//ensure 1~12
//     {
//         printf("your input month is not 1~12, please enter month number again.\n");
//         while (1 != (scanf("%d", month)))//ensure int
//         {
//             printf("your input month is illegality, please enter month number again.\n");
//             while (getchar() != '\n')
//             continue;
//         }
//     }
//     printf("month input succeed!\n");
//     return;
// }

// void legal_day(int* day, int* month)
// {
//     printf("********************\n");
//     printf("please enter day:");
//     //ensure int
//     while (1 != (scanf("%d", day)))
//     {
//         printf("your input day is illegality, please enter day number again.\n");
//         while(getchar() != '\n')
//         continue;
//     }
//     //ensure 1~31:1, 3, 5, 7, 8, 10, 12
//     if (*month == 1 || *month == 3 || *month == 5 || *month == 7 || *month == 8 || *month == 10 || *month == 12)
//     {
//         while (*day<1 || *day>31)
//         {
//          printf("your input day is not 1~31, please enter day number again.\n");
//          while (1 != (scanf("%d", day)))
//          {
//             printf("your input day is illegality, please enter day number again.\n");
//             while(getchar() != '\n')
//             continue;
//          }
//         }
//     }
//     else
//     {
//         while (*day<1 || *day>30)
//         {
//             printf("your input day is not 1~30, please enter day number again.\n");
//             while (1 != (scanf("%d", day)))
//             {
//                 printf("your input day is illegality, please enter day number again.\n");
//                 while(getchar() != '\n')
//                 continue;
//             }
//         }
//     }
//     printf("day input succeed!\n");
//     return;
// }

// int date_number(int year, int month, int day)
// {
//     int total;
//     switch(month)
//     {
//         case 1: total = day; break;
//         case 2: total = 31 + day; break;
//         case 3: total = 31 + 28 + day; break;
//         case 4: total = 31 + 28 + 31 + day; break;
//         case 5: total = 31 + 28 + 31 + 30 + day; break;
//         case 6: total = 31 + 28 + 31 + 30 + 31 + day; break;
//         case 7: total = 31 + 28 + 31 + 30 + 31 + 30 + day; break;
//         case 8: total = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day; break;
//         case 9: total = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day; break;
//         case 10: total = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day; break;
//         case 11: total = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day; break;
//         case 12: total = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day; break;
//     }

//     if( (year % 4 == 0 && year % 100 !=0||year % 4 == 0) && (month != 1))
//     {
//         total += 1;
//     }
//     return total;
// }



//方式二：
#include <stdio.h>

int get_year(void);
int get_month(void);
int get_day(int* month);

int main (int argv, char* argc[])
{
      int total = 0;

      printf("请输入查询的年月日：");
      printf("\n年：");
      int year = get_year();
      printf("月：");
      int month = get_month();
      printf("日：");
      int day = get_day(&month);

      switch(month)
      {
            case 1: total = day;
            case 2: total = 31 + day;
            case 3: total = 31 + 28 + day;
            case 4: total = 31 + 28 + 31 + day;
            case 5: total = 31 + 28 + 31 +30 + day;
            case 6: total = 31 + 28 + 31 +30 + 31 + day;
            case 7: total = 31 + 28 + 31 +30 + 31 + 30 + day;
            case 8: total = 31 + 28 + 31 +30 + 31 + 30 + 31 + day;
            case 9: total = 31 + 28 + 31 +30 + 31 + 30 + 31 + 31 + day;
            case 10: total = 31 + 28 + 31 +30 + 31 + 30 + 31 + 31 + 30 + day;
            case 11: total = 31 + 28 + 31 +30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
            case 12: total = 31 + 28 + 31 +30 + 31 + 30 + 31 + 31 + 30 + 31 +  30 + day; 
      }

      if (year % 4 == 0 && year % 100 !=0 || year % 4 == 0)
      {
            total++;
      }

      printf("您查询的日期是这一年的%d天。\n", total);

      return 0;
}

int get_year(void)
{
      int year;

      while (1 != (scanf("%d", &year)))
      {
            printf("您输入的年数是非数值， 请重新输入！\n");

            while (getchar() != '\n')
            {
                  continue;
            }
      }

      while (year<0)
      {
            printf("您输入的年数数值不在合法的范围内， 请重新输入！\n");
            while (1 != (scanf("%d", &year)))
            {
                  printf("您输入的年数是非法数值， 请重新输入！\n");

                  while (getchar() != '\n')
                  {
                        continue;
                  }
            }
      }
      return year;
}

int get_month(void)
{
      int month;
      while (1 != (scanf("%d", &month)))
      {
            printf("您输入的月数非数值，请重新输入！\n");

            while (getchar() != '\n')
            {
                  continue;
            }
      }

      while (month<1 || month >12)
      {
            printf("您输入的月数不在合法的数值范围内，请重新输入！\n");
            while (1 != (scanf("%d", &month)))
            {
                  printf("您输入的月份非数值，请重新输入！\n");

                  while (getchar() != '\n')
                  {
                        continue;
                  }
            }
      }

      return month;

}
int get_day(int* month)
{
      int day;

      while (1 != (scanf("%d", &day)))
      {
            printf("您输入的日数非数值，请重新输入！\n");

            while (getchar() != '\n')
            {
                  continue;
            }
      }

      while (day<1 || day >31)
      {
            printf("您输入的日数不在合法的数值范围内，请重新输入！\n");

            while (1 != (scanf("%d", &day)))
            {
                  printf("您输入的日期非数值，请重新输入！\n");

                  while (getchar() != '\n')
                  {
                        continue;
                  }
            }
      }

      if (*month==2 || *month==4 || *month==6 || *month==9 || *month==11 )
      {
            while (day==31)
            {
                  printf("%d月没有31号，请重新输入！\n", *month);

                  while (1 != (scanf("%d", &day)))
                  {
                        printf("您输入的日数非数值，请重新输入！\n");

                        while (getchar() != '\n')
                        {
                            continue;
                        }
                  }

            }

      }
      return day;
}

/*
结论：
注意判断是否是闰月的代码是：
year % 4 == 0 && year % 100 !=0 || year % 4 == 0
*/
