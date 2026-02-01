#include <stdio.h>
int main()
{
  int n,i;
  printf("Enter the no.of elements in the array: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements of the array(Subscript Notation): ");
  for (i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Printing Elements of the array using subscript notation: \n");
  for (i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  int *ptr = arr;
  printf("\nPrinting Elements of the array using pointer notation: \n");
  while (ptr!=&arr[n])
  {
    printf("%d ",*(ptr++));
  }

}
