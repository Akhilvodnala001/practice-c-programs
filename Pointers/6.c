#include <stdio.h>
int main()
{
  int a = 10;
  int *ptr;
  ptr = &a;
  printf("Value of a using pointer variable is %d",*ptr);

}
