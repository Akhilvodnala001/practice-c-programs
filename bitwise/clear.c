#include <stdio.h>
int main()
{
  int num;
  printf("Enter a number to clear 4th and 2nd bit: ");
  scanf("%x",&num);
  int mask1 = ~(1<<4);
  int mask2 = ~(1<<2);
  num = num & mask1 & mask2;
  printf("Number after clearing 4th and 2nd bit: %x",num);
}
