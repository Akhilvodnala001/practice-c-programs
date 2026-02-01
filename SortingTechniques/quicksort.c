#include <stdio.h>
#define size 5
void swap(int *p,int *q)
{
  int temp = *p;
  *p = *q;
  *q = temp;
}
int partition(int arr[], int lb, int ub)
{
  int pivot = arr[lb];
  int start = lb;
  int end = ub;
  while (start<end)
  {
    while (arr[start]<=pivot)
    {
      start++;
    }
    while (arr[end]>pivot)
    {
      end--;
    }
    if (start<end)
    {
      swap(&arr[start],&arr[end]);
    }
  }
  swap(&arr[lb],&arr[end]);
  return end;
}
void quicksort(int arr[],int lb,int ub)
{
  if (lb<ub)
  {
    int loc = partition(arr,lb,ub);
    quicksort(arr,lb,loc);
    quicksort(arr,loc+1,ub);
  }
}
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
  quicksort(arr,0,size-1);
  
  printf("Quick sorted array: ");
  for (i=0;i<size;i++)
  {
    printf("%d ",arr[i]);
  }
}
