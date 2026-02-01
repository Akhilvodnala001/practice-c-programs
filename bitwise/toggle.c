#include <stdio.h>
int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%x",&num);
  num = num ^ ((1<<1)|(1<<4)|(1<<5)|(1<<7));
  printf("Given number after toggling 1st, 4th, 5th and 7th bits is %x",num);
}
