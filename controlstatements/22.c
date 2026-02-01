#include <stdio.h>
int main()
{
int n;   //No of elements in array
printf("Enter no.of elements in array: ");
scanf("%d",&n);
int arr[n];
int i=0;
while(i<n)
{
  printf("Enter the element of the array: ");
  scanf("%d",&arr[i]);
  i++;
}
int largest = arr[0];
for (i=1;i<n;i++)
{
  if (largest<arr[i])
  {
    largest = arr[i];
  }
}
printf("The largest element is: %d",largest);
}
