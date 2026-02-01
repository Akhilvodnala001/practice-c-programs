#include <stdio.h>
int main()
{
int i;
printf("Enter the numbers from ");
scanf("%d",&i);
int a = i;

int n;
printf("to");
scanf("%d",&n);
int b=n;
int sum = 0;

for (i;i<=n;i++)
{
  if (i%2==0)
  {
    sum = sum + i ;
  }
}
printf("The sum even of numbers from %d to %d are %d",a,b,sum);
}
