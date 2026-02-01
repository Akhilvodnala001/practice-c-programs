#include <stdio.h>
int main()
{
int n;
int i;
int j;
int temp;
printf("Enter the no.of elements in the array: ");
scanf("%d",&n);
int arr[n];

for(i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}

printf("The input array is ");
for (i=0;i<n;i++)
{
  printf("%d ",arr[i]);
}

for(i=0;i<n;i++)
{
  for (j=i;j<n;j++)
  {
    if (arr[i] < arr[j])
    {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
}

printf("\nThe array in descending order is: ");
for (i=0;i<n;i++)
{
  printf("%d ",arr[i]);
}

}
