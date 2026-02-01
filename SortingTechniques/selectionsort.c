#include <stdio.h>
#define size 5
int main()
{
  int arr[size];
  int i,j,min,temp;
  printf("Enter the elements: \n");
  for (i=0;i<size;i++)
  {
    printf("Index-%d: ",i);
    scanf("%d",&arr[i]);
  }
  
  for (i=0;i<size;i++)
  {
    min = i;
    for (j=i+1;j<size;j++)
    {
      if (arr[j]<arr[min])
      {
        min = j;
      }
    }
    if (min!=i)
    {
      temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
    }
  }
  
  printf("Selection Sort: ");
  for (i=0;i<size;i++)
  {
    printf("%d ",arr[i]);
  }
}
