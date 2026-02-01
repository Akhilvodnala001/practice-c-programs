#include <stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter the no.of elements: ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of the array..\n");
for (i=0;i<n;i++)
{
  printf("index %d: ",i);
  scanf("%d",&arr[i]);
}

printf("The entered array is ");
for (i=0;i<n;i++)
{
  printf(" %d",arr[i]);
}

for (i=0;i<n;i++)
{
  sum = sum + arr[i];
}
printf("\nThe sum of elements in the array is %d",sum);
}
