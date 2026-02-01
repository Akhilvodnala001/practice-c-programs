#include <stdio.h>
int main()
{
int i,n;
printf("No.of elements: ");
scanf("%d",&n);
int arr[n];
for (i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
printf("The original array: ");
for (i=0;i<n;i++)
{
  printf("%d ",arr[i]);
}
arr[n] = arr[0];
for (i=0;i<=n;i++)
{
  arr[i] = arr[i+1];
}
printf("The modified array: ");
for (i=0;i<n;i++)
{
  printf("%d ",arr[i]);
}



}
