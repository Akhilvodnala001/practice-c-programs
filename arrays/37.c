#include <stdio.h>
int main()
{
int i,n;
printf("Enter the no.of elements in the array: ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of the array: ");
for (i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}

printf("The array is ");
for (i=0;i<n;i++)
{
  printf("%d ",arr[i]);
}


for (i=0;i<n;i++)
{
  printf("\nThe square of the %d is %d",arr[i],arr[i]*arr[i]);
}


}
