#include <stdio.h>
int main()
{
int n;
printf("Enter the no of elements in the array: ");
scanf("%d",&n);
int arr[n];
int i;
int sum =0;
for (i=0;i<n;i++)
{
  printf("Enter the element: ");
  scanf("%d",&arr[i]);
}
for (i=0;i<n;i++)
{
  sum=sum+arr[i];
}
printf("The sum of the elements in the array is %d",sum);
}
