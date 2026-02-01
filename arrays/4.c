#include <stdio.h>
int main()
{
int i,n;
printf("Enter the elements of the array: ");
scanf("%d",&n);
int arr[n];
int copy[n];
for (i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
printf("The array you have entered is ");
for (i=0;i<n;i++)
{
  printf("%d ",arr[i]);
}
for (i=0;i<n;i++)
{
  copy[i] = arr[i];
}

printf("\nThe copy of the given array is ");
for (i=0;i<n;i++)
{
  printf("%d ",copy[i]);
}
}
