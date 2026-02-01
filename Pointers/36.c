#include <stdio.h>
int main()
{
  int i,n;
  printf("Enter the no.of elements of the array: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements: \n");
  for (i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Reversed array is \n");
  for (i=n-1;i>=0;i--)
  {
    printf("%d ",*(arr+i));
  }
  
  

}
