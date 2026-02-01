#include <stdio.h>
int main()
{
  int i,n;
  printf("No.of elements: ");
  scanf("%d",&n);
  int arr[n];
  for (i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  int *ptr_arr[n];
  for (i=0;i<n;i++)
  {
    ptr_arr[i] = &arr[i]; 
  }
  for (i=0;i<n;i++)
  {
    printf("%p\n",ptr_arr[i]);
  }
  

}
