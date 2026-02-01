#include <stdio.h>
int main()
{
int i,n,position;
printf("Enter the no.of elements in the array: ");
scanf("%d",&n);
int a[n];
printf("Enter the elements of the array: \n");
for (i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}

printf("Original array: ");
for (i=0;i<n;i++)
{
  printf("%d ",a[i]);
}
printf("\nEnter the position of element to be deleted: ");
scanf("%d",&position);
for (i=position-1;i<n;i++)
{
  a[i] = a[i+1];
}
n--;

printf("Array after deleting the element: ");
for (i=0;i<n;i++)
{
  printf("%d ",a[i]);
}
}
