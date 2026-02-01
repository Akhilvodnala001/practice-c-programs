#include <stdio.h>
#define clear_lastsetbit(num) num&(num-1)
int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  num = clear_lastsetbit(num);
  printf("After clearing last set bit: %d",num);
}
