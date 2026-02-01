#include <stdio.h>
int main()
{
  int num;
  printf("Enter number: ");
  scanf("%d",&num);
  int pos;
  printf("Enter bit position: ");
  scanf("%d",&pos);
  int check;
  check = num&(1<<pos);
  if (check)
  {
    printf("SET!\n");
  }
  else
  {
    printf("NOT SET!\n");
  }

}
