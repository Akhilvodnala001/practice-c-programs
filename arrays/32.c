#include <stdio.h>
float avg(int );
int main()
{
int i,n;
printf("No.of elements in the array: ");
scanf("%d",&n);
printf("The average of elements in the array is %0.1f",avg(n));
}

float avg(int m)
{
int arr[m];
float sum=0;
int i;
for (i=0;i<m;i++)
{
  scanf("%d",&arr[i]);
}
for (i=0;i<m;i++)
{
  sum = sum + arr[i];
}
return sum/m;
}
