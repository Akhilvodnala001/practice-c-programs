#include <stdio.h>
int main()
{
  int i,j,n;
  printf("No.of elements: ");
  scanf("%d",&n);
  int arr[n]; 
  for (i=0;i<n;i++)
  {
    scanf("%d",&arr[i]); 
  }
  int next_ge[n];
  for (i=0;i<n;i++)
  {
    next_ge[i]=-1;
  }

  for (i=0;i<n;i++)
  {
    for (j=i+1;j<n;j++)
    {
      if (arr[i]<arr[j])
      {
      next_ge[i] = arr[j];
      break;
      }
    }
  }
  for (i=0;i<n;i++)
  {
    printf("%d ",next_ge[i]);
  }
}




