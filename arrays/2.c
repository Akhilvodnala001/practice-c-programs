#include <stdio.h>
int main()
{
int n,i;
printf("Enter the no.of elements in the array: ");
scanf("%d",&n);
int arr[n];
for (i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}

printf("The entered elements are ");
for (i=0;i<n;i++)
{
  printf("%d ",arr[i]);
}

printf("\nThe array in reverse order is ");
for (i=n-1;i>=0;i--)
{
  printf("%d ",arr[i]);
}
}
