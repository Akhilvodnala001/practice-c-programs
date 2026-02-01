#include <stdio.h>
int main()
{
int a;
int i;
printf("Enter a number: ");
scanf("%d",&a);
int fact=1;
if (a < 0)
{
  printf("No factorial for -ve numbers");
}
else
{
for (i=1;i<=a;i++)
{
  fact = fact * i;
}
printf("factorial of %d is %d",a,fact);
}
}
