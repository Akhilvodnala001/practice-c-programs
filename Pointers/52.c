#include <stdio.h>
void fun(int *p)
{
  *p = 30;
}
int main()
{
  int y = 20;
  fun(&y);
  printf("%d\n",y);
}
