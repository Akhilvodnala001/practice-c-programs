#include <stdio.h>
int main()
{
  int num;
  printf("Enter number: ");
  scanf("%d",&num);
  if ((num & (num-1)) == 0)
  {
    printf("Power of 2");
  }
  else
  {
    printf("Not a power of 2...");
  }
}
