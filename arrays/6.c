#include <stdio.h>
int main()
{
int i,j,n,unique=1;
printf("Enter the no.of elements in the array: ");
scanf("%d",&n);
int arr[n];
for (i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
printf("The unique elements are ");
for (i=0;i<n;i++)
{
  unique = 1;
  for (j=0;j<n;j++)
  {
    if ((i != j) && (arr[i] == arr[j]))
    {
      unique = 0;
    }
  }
  if (unique == 1)
  {
    printf("%d ",arr[i]);
  }
}
}
