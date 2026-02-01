#include <stdio.h>
int esum(int [],int);
int main()
{
int i,n,sum;
printf("Enter the no.of elements of the array: ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of the array: ");
for (i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
sum = esum(arr,n);
printf("The sum of even elements is %d",sum);
}

int esum(int arr[],int n)
{
int last,sum;
if (n==0)
{
  return 0;
}
last = arr[n-1];
if (last%2==0)
{
  return sum = last + esum(arr,n-1);
}
else
{
  return esum(arr,n-1);
}
}
