#include <stdio.h>
int arr_sum(int *ptr,int n)
{
  int i,sum=0;
  for (i=0;i<n;i++)
  {
    sum = sum + *(ptr+i); 
  }
  return sum;
}
int main()
{
  int n,i;
  printf("Enter the elements of the array: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements: ");
  for (i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Sum of all the elements in the array is %d",arr_sum(arr,n));
}
