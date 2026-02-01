#include <stdio.h>
int main()
{
  int i,n;
  printf("Enter the elements of the array: ");
  scanf("%d",&n);
  int arr[n];
  int (*ptr)[n] = &arr;
  for(i=0;i<n;i++)
  {
    scanf("%d",&(*ptr)[i]);
  }
  for (i=0;i<n;i++)
  {
    printf("%d ",(*ptr)[i]);
  }
}
