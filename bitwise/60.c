#include <stdio.h>
int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  int n = num;
  int pos = -1;
  while (n>0)
  {
    n >>= 1;
    pos++;
  }
  if (num&(1<<0))
  {
    printf("After swapping : %d",num);
    return 0;
  }
  else
  {
    num = num|(1<<0);
    num = num&(~(1<<pos));
  }
  printf("After swapping : %d",num);
  return 0;
  
}
