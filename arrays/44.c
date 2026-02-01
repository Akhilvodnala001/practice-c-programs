//Check whether the elements are distinct or not?

#include <stdio.h>
int main()
{
int i,j,n;
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

int unique = 1;
for (i=0;i<n;i++)
{
  for (j=i+1;j<n;j++)
  {
    if (arr[i] == arr[j])
    {
      unique = 0;
      break;
    }
  }
}

if (unique == 1)
{
  printf("Elements in the array are distinct..");
}
else
{
  printf("Elements in the array are not distinct..");
}

}
