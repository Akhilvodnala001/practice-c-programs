#include <stdio.h>
int main()
{
int i,j,n,r;
printf("No.of elements: ");
scanf("%d",&n);
int arr[n];
for (i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
printf("Enter the no.of elements to be rotated: ");
scanf("%d",&r);
int temp[r];
for (i=0;i<r;i++)
{
  temp[i] = arr[i];
}
for (j=0;j<r;j++)
{
  for (i=0;i<n;i++)
  {
    arr[i] = arr[i+1];
  }
}
int k = 0;
for (i=n-r;i<n;i++)
{
  arr[i] = temp[k];
  k++;
}

printf("The modified array is \n");
for (i=0;i<n;i++)
{
  printf("%d ",arr[i]);
}
}
