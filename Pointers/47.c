#include <stdio.h>
int main()
{
  int n,i;
  printf("No.of elements: ");
  scanf("%d",&n);
  int arr[n];
  int (*ptr)[n] = &arr;
  for (i=0;i<n;i++)
  {
    scanf("%d",&((*ptr)[i]));
  }
  printf("Enter array is ");
  for (i=0;i<n;i++)
  {
    printf("%d ",(*ptr)[i]);
  }
}
