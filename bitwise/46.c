#include <stdio.h>
int main()
{
  int x,y;
  printf("Enter x: ");
  scanf("%d",&x);
  printf("Enter y: ");
  scanf("%d",&y);
  printf("Before swapping:\nx = %d, y = %d\n",x,y);
  x = x^y;
  y = x^y;
  x = x^y;
  printf("After swapping:\nx = %d, y = %d\n",x,y);
}
