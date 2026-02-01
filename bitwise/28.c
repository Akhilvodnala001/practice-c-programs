#include <stdio.h>
int main()
{
  int n = 245;
  int r = 4;
  int l = 7;
  /*for (i=4;i<=7;i++)
  {
    n = n^1<<i;
  }*/
  int mask = ((1<<(l-r+1))-1)<<r;
  n = n^mask;
  printf("After toggling the given range: %d",n);
}
