#include <stdio.h>
#pragma pack(1)
struct date
{
  int day;
  char month[10];
  int year;
};
void input(struct date *p)
{
  printf("Enter the day: ");
  scanf("%d",&p->day);
  printf("Enter the month: ");
  scanf("%s",p->month);
  printf("Enter the year: ");
  scanf("%d",&p->year);
}
int leapyear(int *q)
{
  if ((*q % 4 == 0 && *q % 100 != 0) || (*q % 400 == 0))
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int main()
{
  struct date d;
  input(&d);
  if (leapyear(&d.year))
  {
    printf("Enter year is a leap-year!");
  }
  else
  {
    printf("Entered year is not a leap year!");
  }
}
