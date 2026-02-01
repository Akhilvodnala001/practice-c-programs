#include <stdio.h>
int main()
{
  int x,y;
  printf("Enter x: ");
  scanf("%d",&x);
  printf("Enter y: ");
  scanf("%d",&y);
  printf("BEFORE SWAPPING:\nx = %d\ny = %d\n",x,y);
  x = x^y;
  y = x^y;
  x = x^y;
  
  printf("AFTER SWAPPING:\nx = %d\ny = %d\n",x,y);
}
