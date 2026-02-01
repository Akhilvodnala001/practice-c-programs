#include <stdio.h>
int binarysearch(int arr[],int key,int lb,int ub)
{
  if (lb > ub)
  {
    return -1;
  }
  int mid = lb+(ub-lb)/2;
  if (key == arr[mid])
  {
    return mid;
  }
  else if(key < arr[mid])
  {
    return binarysearch(arr,key,lb,mid-1);
  }
  else if(key > arr[mid] && key <= arr[ub])
  {
    return binarysearch(arr,key,mid+1,ub);
  }
  else if (key>arr[ub])
  {
    return -1;
  }
}
int main()
{
  int key,i,n = 10;
  int arr[n];
  printf("Enter the elements: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Enter the element to be searched: ");
  scanf("%d",&key);
  i = binarysearch(arr,key,0,n-1);
  if (i == -1)
  {
    printf("Not Found!");
    return 0;
  }
  printf("The Key %d is at index-%d\n",arr[i],i);
}
