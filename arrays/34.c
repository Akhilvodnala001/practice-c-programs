#include <stdio.h>
void reverse(int arr[],int);
int main()
{
int i,n;
printf("Enter the no.of elements in the array: ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of the array:");
for (i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}

reverse(arr,n);

printf("Reversed array is :");
for (i=0;i<n;i++)
{
  printf("%d ",arr[i]);
}
}

void reverse(int arr[],int n)
{
  int start = 0,end = n-1;
  while (start<end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
