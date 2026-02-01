#include <stdio.h>
int main()
{
int n;
printf("Enter the no.of elements in the array: ");
scanf("%d",&n);
int arr[n];

int i;
for (i=0;i<n;i++)
{
  printf("Enter the element at index %d ",i);
  scanf("%d",&arr[i]);
}

printf("Elements of the given array: \n");
for (i=0;i<n;i++)
{
  printf("%d ",arr[i]);
}

printf("\nReverse array: \n");

for (i=n-1;i>=0;i--)
{
  printf("%d ",arr[i]);
}
}
