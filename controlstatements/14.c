#include <stdio.h>
int main()
{
int a;
int b;
printf("Enter a: ");
scanf("%d",&a);
printf("Enter b:");
scanf("%d",&b);
switch (a>b)
{
case 0:
  printf("b is larger than a");
  break;
default:
  printf("a is larger than b");
  break;
}
}
