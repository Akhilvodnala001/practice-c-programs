#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *ptr;
  int i,n;
  printf("Enter the no.of elements in the array: ");
  scanf("%d",&n);
  ptr = (int *)calloc(n,sizeof(int));
  for (i=0;i<n;i++)
  {
    scanf("%d",ptr+i);
  }
  int largest = *ptr;
  for (i=1;i<n;i++)
  {
    if (largest < *(ptr+i))
    {
      largest = *(ptr+i);
    }
  }
  free(ptr);
  printf("Largest element in the array is %d..",largest);
}
