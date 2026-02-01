#include <stdio.h>
int product(int [],int n);
int main()
{
int n,i,p;
printf("Enter the no.of elements in the array: ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of the array: ");
for (i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
p = product(arr,n);
printf("Product of elements of the array: %d",p);
}
int product(int arr[],int n)
{
int i;
int p = 1;
for (i=0;i<n;i++)
{
  p = p*arr[i];
}
return p;
}
