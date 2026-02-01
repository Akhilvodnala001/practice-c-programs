#include <stdio.h>
void sum(int *p1,int *p2)
{
  printf("Sum of a and b is %d",(*p1)+(*p2));
}
int main()
{
  int a,b;
  printf("Enter a: ");
  scanf("%d",&a);
  printf("Enter b: ");
  scanf("%d",&b);
  int *ptr1 = &a;
  int *ptr2 = &b;
  sum(ptr1,ptr2);
}
