#include <stdio.h>
int sum(int arr[],int n)
{
  int *ptr = arr;
  int i,sum=0;
  for (i=0;i<n;i++)
  {
    sum = sum + *ptr;
    ptr++;
  }
  return sum;
}
int main()
{
  int n;
  printf("Enter the no.of elements in the array: ");
  scanf("%d",&n);
  int arr[n];
  int i = 0;
  while (i<n)
  {
    scanf("%d",&arr[i]);
    i++;
  }
  int arrsum = sum(arr,n);
  printf("Sum = %d",arrsum); 

}
