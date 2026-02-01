#include <stdio.h>
#define size 5
int main()
{
  int arr[size];
  int i,j;
  printf("Enter the elements: \n");
  for (i=0;i<size;i++)
  {
    printf("Index-%d: ",i);
    scanf("%d",&arr[i]);
  }
  for (i=size;i>0;i--)
  {
    for (j=0;j<i;j++)
    {
      if (arr[j]>arr[j+1])
      {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  
  printf("Bubble sort: ");
  for (i=0;i<size;i++)
  {
    printf("%d ",arr[i]);
  }
  
}
