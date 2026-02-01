#include <stdio.h>
int *fun(int *arr,int n)
{
  int i;
  int *p = arr;
  for (i=0;i<n;i++)
  {
    (*p)++;
    p++;
  }
  return arr;
}
int main()
{
  int i,n;
  printf("Enter the no.of elements in the array: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements: ");
  for (i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  int *ptr;
  ptr = fun(arr,n);
  for (i=0;i<n;i++)
  {
    printf("%d ",*ptr);
    ptr++;
  }
  

}
