#include <stdio.h>
int main()
{
  int i,j,n=10;
  int a[n];
  printf("Enter the elements of the array: \n");
  for (i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  int largest = a[0];
  int secondlargest = a[1];
  
  for (i=1;i<n;i++)
  {
    if (largest < a[i])
    {
      largest = a[i];
      int temp = a[i];
      a[i] = a[0];
      a[0] = temp;
    }
  }
  
  for (i=2;i<n;i++)
  {
    if ((secondlargest < a[i]))
    {
      secondlargest = a[i];
    }
  }
  
  printf("Second largest element is %d ",secondlargest);
}
