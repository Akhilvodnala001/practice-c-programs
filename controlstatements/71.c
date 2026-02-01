#include <stdio.h>
int main()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);

int sum = 1;
int i;
int j;
int isprime = 1;
for (i=2;i<=n;i++)
{
  isprime = 1;
  for (j=2;j<i;j++)
  {
    if (i%j == 0)
    {
      isprime = 0;
    }
  }
  if (isprime == 1)
  {
    sum = sum+i;
  
  }
}
printf("%d ",sum);
}
