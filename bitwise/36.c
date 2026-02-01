#include <stdio.h>
#define powerof2(num) num&(num-1)
int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);
  if (!(powerof2(num)))
  {
    printf("POWER OF 2!\n");
  }
  else
  {
    printf("NOT POWER OF 2!\n");
  }
}
