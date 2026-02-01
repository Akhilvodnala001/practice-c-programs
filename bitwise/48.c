#include <stdio.h>
int main()
{
  unsigned int num;
  printf("Enter number: ");
  scanf("%d",&num);
  if ((num % ((1<<4)|(1<<1))) == 0)
  {
    printf("Divisible by 6 and 9!\n");
  }
  else
  {
    printf("Not Divisible by 6 and 9!\n");
  } 
}
