/*
ʱ�䣺2020/12/17 19:35
�����޸ģ�2021/1/18 17:40
�༭�ˣ�chongqiu00
��Ŀ4������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
*/


// //��ʽһ��
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
//         printf("your input is illegality, please enter year number again��\n");
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



//��ʽ����
#include <stdio.h>

int get_year(void);
int get_month(void);
int get_day(int* month);

int main (int argv, char* argc[])
{
      int total = 0;

      printf("�������ѯ�������գ�");
      printf("\n�꣺");
      int year = get_year();
      printf("�£�");
      int month = get_month();
      printf("�գ�");
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

      printf("����ѯ����������һ���%d�졣\n", total);

      return 0;
}

int get_year(void)
{
      int year;

      while (1 != (scanf("%d", &year)))
      {
            printf("������������Ƿ���ֵ�� ���������룡\n");

            while (getchar() != '\n')
            {
                  continue;
            }
      }

      while (year<0)
      {
            printf("�������������ֵ���ںϷ��ķ�Χ�ڣ� ���������룡\n");
            while (1 != (scanf("%d", &year)))
            {
                  printf("������������ǷǷ���ֵ�� ���������룡\n");

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
            printf("���������������ֵ�����������룡\n");

            while (getchar() != '\n')
            {
                  continue;
            }
      }

      while (month<1 || month >12)
      {
            printf("��������������ںϷ�����ֵ��Χ�ڣ����������룡\n");
            while (1 != (scanf("%d", &month)))
            {
                  printf("��������·ݷ���ֵ�����������룡\n");

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
            printf("���������������ֵ�����������룡\n");

            while (getchar() != '\n')
            {
                  continue;
            }
      }

      while (day<1 || day >31)
      {
            printf("��������������ںϷ�����ֵ��Χ�ڣ����������룡\n");

            while (1 != (scanf("%d", &day)))
            {
                  printf("����������ڷ���ֵ�����������룡\n");

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
                  printf("%d��û��31�ţ����������룡\n", *month);

                  while (1 != (scanf("%d", &day)))
                  {
                        printf("���������������ֵ�����������룡\n");

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
���ۣ�
ע���ж��Ƿ������µĴ����ǣ�
year % 4 == 0 && year % 100 !=0 || year % 4 == 0
*/
