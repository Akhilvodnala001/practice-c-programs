#include <stdio.h>
int main()
{
  int a;
  printf("Enter the value of a: ");
  scanf("%d",&a);
  int *ptr = &a;
  printf("Dereferenced pointer(Normal): %d\n",*ptr);
  printf("Postfix increment of value dereferenced pointer: %d\n",(*ptr)++);
  printf("Prefix increment of value of dereferenced pointer: %d\n",++(*ptr));
  printf("Postfix decrement of value dereferenced pointer: %d\n",(*ptr)--);
  printf("Prefix decrement of value dereferenced pointer: %d\n",--(*ptr));

}
