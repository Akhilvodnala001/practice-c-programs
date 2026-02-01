#include <stdio.h>
#define evenodd(num) num&(1<<0)
int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);
  if (evenodd(num))
  {
    printf("ODD!");
  } 
  else
  {
    printf("EVEN!");
  }
}
