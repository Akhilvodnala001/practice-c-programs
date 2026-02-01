#include <stdio.h>
int main()
{
  int a = 5;
  int *ptr;
  ptr = &a;
  printf("Size of pointer variable is %ld\n",sizeof(ptr));
  printf("Size of value dereferenced by pointer variable is %ld\n",sizeof(*ptr));
}
