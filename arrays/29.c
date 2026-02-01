#include <stdio.h>
int main()
{
int i,n,total,sum=0;
printf("Range of numbers: ");
scanf("%d",&n);
int a[n-1];

printf("Enter the numbers: \n");
for (i=0;i<n-1;i++)
{
  scanf("%d",&a[i]);
}


for (i=0;i<n-1;i++)
{
  sum = sum + a[i];
}
total = n*(n+1)/2;
printf("Missing number is %d",total-sum);
}
