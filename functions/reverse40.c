//Recursive function
#include <stdio.h>
int reverse(int [],int,int);
int main()
{
int i,n;
printf("Enter the no.of elements in the array: ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements: ");
for (i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
int start = 0;
int end = n-1;
reverse(arr,start,end);
for (i=0;i<n;i++)
{
  printf("%d ",arr[i]);
}
}

int reverse(int arr[],int start,int end)
{
  if (start==end)
  {
    return 0;
  }
  int temp = arr[start];
  arr[start] = arr[end];
  arr[end] = temp;
  start++;
  end--;
  reverse(arr,start,end);
}

