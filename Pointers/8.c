#include <stdio.h>
int main()
{
  int n;
  printf("Enter the no.of elements in the array: ");
  scanf("%d",&n);
  int arr[n];
  int *ptr = arr;
  while (ptr!=&arr[n])
  {
    scanf("%d",ptr);
    ptr++;
  }
  ptr = arr;
  printf("ADRESS          VALUE\n");
  while (ptr!=&arr[n])
  {
    printf("%p    %d\n",ptr,*ptr);
    ptr++;
  }
}
