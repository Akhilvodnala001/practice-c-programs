#include <stdio.h>
int main()
{
int n;
printf("Enter no.of elements in the array: ");
scanf("%d",&n);
int arr[n];
int smallest = arr[0];
int i;
for(i=0;i<n;i++)
{
  printf("Enter the element: ");
  scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
  if(arr[i]<smallest)
  {
    smallest = arr[i];
  }
}
printf("The smallest element in the array is: %d",smallest);
}
