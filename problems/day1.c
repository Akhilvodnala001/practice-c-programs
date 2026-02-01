#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n,i;
  printf("Enter the no.of elements in the array: ");
  scanf("%d",&n);
  int *ptr = malloc(2*n*sizeof(int));
  printf("Enter the elements: ");
  for (i=0;i<n;i++)
  {
    scanf("%d",&ptr[i]);
  }
  int k = n;
  for (i=0;i<n;i++)
  {
    ptr[k++] = ptr[ptr[i]];
  }
  for (i=0;i<n;i++)
  {
    ptr[i] = ptr[i+n];
  }
  ptr = realloc(ptr,n*sizeof(int));
  for (i=0;i<n;i++)
  {
    printf("%d ",ptr[i]);
  }
}
