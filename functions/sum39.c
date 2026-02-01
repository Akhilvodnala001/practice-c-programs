#include <stdio.h>
int sum(int [],int,int);
int main()
{
int i,n=10;
int arr[n];
printf("Enter the elements of the array: ");
for (i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
int low = 0;
int high = n-1;
int s = sum(arr,low,high);
printf("Sum = %d",s);
}

int sum(int arr[],int low,int high)
{
if (low == high)
{
  return arr[low];
}
int mid = (low+high)/2;
int leftsum = sum(arr,low,mid);
int rightsum = sum(arr,mid+1,high);
return leftsum+rightsum;
}
