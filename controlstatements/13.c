#include <stdio.h>
int main()
{
int month;
printf("Enter the month: ");
scanf("%d",&month);
if ((month == 1) ||(month == 3) ||(month == 5) ||(month == 7) ||(month == 8) ||(month == 10) ||(month == 12))
{
  printf("31 DAYS");
}
else if ((month == 4) ||(month == 6) ||(month == 9) ||(month == 11))
{
  printf("30 DAYS");
}
else if (month==2)
{
  int year;
  printf("Enter the year: ");
  scanf("%d",&year);
  if ((year%400==0) || (year%4==0) && (year%100!=0))
  {
    printf("29 DAYS");
  }
  else
  {
    printf("28 DAYS");
  }
}
else
{
  printf("Invalid month...!");
}
}
