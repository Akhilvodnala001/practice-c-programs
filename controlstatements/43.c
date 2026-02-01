#include <stdio.h>
int main()
{
int n;
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
int arr[n];
int i=0;
int j;
int temp;

while(i<n)
{
  printf("Enter the element: ");
  scanf("%d",&arr[i]);
  i++;
}

printf("The array in given order is ");
for (i=0;i<n;i++)
{
  printf("%d ",arr[i]);
}

for(i=0;i<n;i++)
{
  for (j=i;j<n;j++)
  {
    if (arr[i]>arr[j])
    {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
}

printf("\nThe array in ascending order is ");
for (i=0;i<n;i++)
{
  printf("%d ",arr[i]);
}

}
