#include <stdio.h>
#include <stdlib.h>
struct date
{
  int day;
  int month;
  int year;
};
int valid(struct date f1)
{
  if (!(f1.month>=1 && f1.month<=12))
  {
    return 0;
  }
  if (f1.month == 1 || f1.month == 3 || f1.month == 5 ||f1.month == 7 || f1.month ==  8 || f1.month == 10 || f1.month == 12)
  {
    if (!(f1.day>0 && f1.day<=31))
    {
      return 0;
    }
  }
  else if (f1.month == 2)
  {
    if (!(((f1.year%400 == 0) || (f1.year%4 == 0)) && (f1.year%100 != 0)))
    {
      if (f1.day>28)
      {
        return 0;
      }
    }
  }
  else
  {
    if (!(f1.day>=1 && f1.day<=30))
    {
      return 0;
    }
  }
  return 1;
}
int main()
{
  struct date d;
  
  printf("Enter the day: ");
  scanf("%d",&d.day);
  printf("Enter the month : ");
  scanf("%d",&d.month);
  printf("Enter the year: ");
  scanf("%d",&d.year);
  int x = valid(d);
  if (x == 1)
  {
    printf("Date valid!");
  }
  else
  {
    printf("Date Invalid!");
  }
  
}
