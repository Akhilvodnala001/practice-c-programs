#include <stdio.h>
void sort(int *arr,int n)
{
  int i,j;
  int *p,*q;
  for (i=0;i<n;i++)
  {
    p = arr + i;
    for (j=i+1;j<n;j++)
    {
      q = arr + j;
      if (*p > *q)
      {
        int temp = *p;
        *p = *q;
        *q = temp;
      }
    }
  }

}
int main()
{
  int n,i;
  printf("Enter the elements of the array: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements of the array: ");
  for (i=0;i<n;i++)
  { 
    scanf("%d",&arr[i]);
  }
  sort(arr,n);
  
  printf("The sorted array is ");
  for (i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }

}
