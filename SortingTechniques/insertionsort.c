#include <stdio.h>
#define size 5
int main()
{
  int arr[size];
  int i,j,temp;
  printf("Enter the elements: \n");
  for (i=0;i<size;i++)
  {
    printf("Index-%d: ",i);
    scanf("%d",&arr[i]);
  }
  for (i=1;i<size;i++)
  {
    temp = arr[i];
    j = i-1;
    while (j>=0 && arr[j]>temp)
    {
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = temp;
  }
  
  printf("Insertion sort: ");
  for (i=0;i<size;i++)
  {
    printf("%d ",arr[i]);
  }
}
