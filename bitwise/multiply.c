#include <stdio.h>
#include <stdlib.h>
long long multiply (int x,int y)
{
  int sign = (((x < 0) ^ (y < 0)) ? -1:1);
  unsigned int a = ((unsigned int)(x < 0) ? -(long long)x : x);
  unsigned int b = ((unsigned int) (y<0) ? -(long long)y : y);
  unsigned long long result = 0;
  while (b>0)
  {
    if (b & 1)
    {
      result = result + a;
    }
    a = a<<1;
    b = b>>1;
  }
  return sign*result;
}
int main()
{
  int x,y;
  printf("Enter x: ");
  scanf("%d",&x);
  printf("Enter y: ");
  scanf("%d",&y);
  printf("The resultant is %lld",multiply(x,y));
}
