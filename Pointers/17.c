#include <stdio.h>
void *reference(int *x,int *y)
{
  (*x)++;
  (*y)++;
  printf("\nInside function call:\na = %d b = %d",*x,*y);
}
int main()
{
  int a = 10;
  int b = 20;
  printf("Before function call:\na = %d b = %d",a,b);
  reference(&a,&b);
  printf("\nAfter function call:\na = %d b = %d",a,b);
}
