#include <stdio.h>
int main()
{
  int n;
  printf("Enter the no.of elements in the array: ");
  scanf("%d",&n);

  int a[n],b[n];
  int i;
  int isequal=1;
  
  printf("Enter the elements for 1st array: \n");
  for (i=0;i<n;i++)
  {
    printf("Enter the element at %d index: ",i);
    scanf("%d",&a[i]);
  }

  printf("Enter the elements for 2nd array: \n");
  for (i=0;i<n;i++)
  {
    printf("Enter the element at %d index: ",i);
    scanf("%d",&b[i]);
  }

  for (i=0;i<n;i++)
  {
    if (a[i] != b[i])
    {
      isequal = 0;
    }
  }
  
  if (isequal == 0)
  {
    printf("array 1 is not equal to array 2...");
  }
  else 
  {
    printf("Array 1 is equal to array 2...");
  }

}
