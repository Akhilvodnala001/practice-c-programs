#include <stdio.h>
int main()
{
  int n;
  printf("Enter the no.of elements in the array: ");
  scanf("%d",&n);
  int i;
  int arr[n];
  for (i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  
  int *ptr = arr;
  for (i=0;i<n;i++)
  {
    printf("%d ",ptr[i]);
  }
}
