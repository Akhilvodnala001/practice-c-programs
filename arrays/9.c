#include <stdio.h>
int main()
{
int n,i,j;
printf("Enter the no.of elements in the array: ");
scanf("%d",&n);
int arr[n];
for (i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
int smallest=arr[0];
int largest=arr[1];
for (i=0;i<n;i++)
{
  if (largest < arr[i])
  {
    largest = arr[i];
  }
}

for (i=0;i<n;i++)
{
  if (smallest > arr[i])
  {
    smallest = arr[i];
  }
}

printf("Largest among the array elements is %d \n",largest);
printf("Smallest among the array elements is %d \n",smallest);


}
