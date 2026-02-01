#include <stdio.h>
int main()
{
int n;
printf("Enter the no. of elements in the array: ");
scanf("%d",&n);
int arr[n];
int i;
int temp;

for (i=0;i<n;i++)
{
  printf("Enter the element: ");
  scanf("%d",&arr[i]);
}

int largest = arr[0];
int secondlarge = arr[1];

for (i=0;i<n;i++)
{
  if (arr[i]>largest)
  {
    largest = arr[i];
    temp = arr[0];
    arr[0] = arr[i];
    arr[i] = temp ;
  }
}
for (i=1;i<n;i++)
{
  if (arr[i]>secondlarge)
  {
    secondlarge = arr[i] ;
  }
}
printf("The 2nd largest number in the given array is %d",secondlarge);
}
