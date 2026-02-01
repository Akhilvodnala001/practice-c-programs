#include <stdio.h>
int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%x",&num);
  int mask;
  num = num|(1<<1)|(1<<4)|(1<<5);
  printf("%x ",num);

}
