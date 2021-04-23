/*
时间：2020/12/17 21:31
近期修改：2021/1/18 14:40
编辑人：chongqiu00
题目2：
企业发放的奖金根据利润提成。利润 (I)低于或等于 10 万元时，奖金可提 10%；利润高于 10 万元，低于 20 万元
时，低于 10 万元的部分按 10%提成，高于 10 万元的部分，可可提成 7.5%；20 万到 40 万之间时，高于 20 万元的部分，
可提成 5%；40 万到 60 万之间时高于 40 万元的部分，可提成 3%；60 万到 100 万之间时，高于 60 万元的部分，可提成
1.5%，高于 100 万元时，超过 100 万元的部分按 1%提成，从键盘输入当月利润 I，求应发放奖金总数？
*/

#include <stdio.h>

float* get_number(float* profit);//get a float number.

int main (int argc, char* argv[])
{
  float profit;
  float bonus;
  int n;
  printf("please enter your profit：");
  get_number(&profit);
  printf("profit = %f\n", profit);
  
  n = profit / 100000;
  //printf("n = %d\n", n);
  switch(n)
  {
    case 0: bonus = profit + profit * 0.1;  break;
    case 1: bonus = profit + 100000 * 0.1 + (profit - 100000) * 0.075;  break;
    case 2: 
    case 3: bonus = profit + 100000 * 0.1 + 100000 * 0.075 + (profit - 200000) * 0.05;  break;
    case 4: 
    case 5: bonus = profit + 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (profit - 400000) * 0.03;  break;
    case 6: 
    case 7:
    case 8:
    case 9: bonus = profit + 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (profit - 600000) * 0.015;  break;
    default:  bonus = profit + 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (profit - 1000000) * 0.01; 
  }

  printf("your bonus is %f.", bonus);
  return 0;
}

float* get_number(float* profit)
{
  while (1 != (scanf("%f", profit)) )
  {
    printf("this is illegality!please enter number again.\n");
    while(getchar() != '\n')
    continue;
  }
  return profit;
}
/*
总结：
多分支选择语句switch：
一般形式：
switch (表达式)
{
    case 常量表达式1： 语句1；
    case 常量表示式2： 语句2；
    case 常量表达式3： 语句3；
    case 常量表示式4： 语句4；
    ... ...
    case 常量表达式1： 语句1；
    default: 语句n+1;
}

注意：
1，switch (表达式)中的表达式必须是整型或枚举类型。
2，在case后的各常量表达式的值不可相等，以免引起冲突。
3，每一个case后面若有多个子语句，可以使用{...}将其括起来。
4，各case和default子句的先后顺序可以变动，而不会影响程序执行结果。
5，当表达式的值 = 常量表达式1，则执行语句1，当没有break时，执行表达式2中的语句2,重复上述过程，知道遇到break或者default，结束。
5，default子句可以省略不用。dafault中的break也可以省略不写。
6，表达式的数据类型必须和常量表达式的数据类型一致。
7，常量表达式不可以为小数。
*/