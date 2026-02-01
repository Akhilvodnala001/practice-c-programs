#include <stdio.h>
int main()
{
int i,start,end,n;
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
int arr[n];
int a[n];
printf("Enter the elements of the array: ");
for(i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
printf("The array is ");
for (i=0;i<n;i++)
{
  printf("%d ",arr[i]);
}
printf("\nPortion of array to be reversed: \n");
printf("start: \n");
scanf("%d",&start);
printf("end: \n");
scanf("%d",&end);
while (start<end)
{
  int temp = arr[start];
  arr[start] = arr[end];
  arr[end] = temp;
  start++;
  end--;
}

printf("\nThe array after reversing the portion is ");
for (i=0;i<n;i++)
{
  printf("%d ",arr[i]);
}




}
