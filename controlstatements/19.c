#include <stdio.h>
int main()
{
int num;
int sum;
printf("Enter a number");
scanf("%d",&num);
sum = 0;
int digit = 0;
while (num != 0)
{
  digit = num % 10;
  num = num / 10;
  sum = sum + digit;
}
printf("%d",sum);
}
