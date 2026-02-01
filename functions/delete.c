#include <stdio.h>
int delete(int arr[],int n,int position);
int main()
{
static int n;
int i;
printf("Enter the elements of the array: ");
scanf("%d",&n);
int arr[n];
printf("Elements of the array: ");
for (i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
int position;
printf("Enter the position of the element: ");
scanf("%d",&position);
delete(arr,n,position);
printf("The array after deleting the element is: ");
for (i=0;i<n-1;i++)
{
  printf("%d ",arr[i]);
}
}

int delete(int arr[],int n,int position)
{
  int i;
  for (i = position-1;i<n;i++)
  {
    arr[i] = arr[i+1];
  }
  n--;
}

