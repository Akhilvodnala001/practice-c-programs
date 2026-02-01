#include <stdio.h>
int main()
{
int n;
int i;
printf("Enter a number: ");
scanf("%d",&n);
int sum=0;
for (i=0;i<=n;i++)
{
  if ((i%3==0) && (i%5==0))
  {
    sum = sum + i;
  }
}
printf("The sum of natural numbers which are divisible by both 3 and 5 till %d are %d \n",n,sum);
}
