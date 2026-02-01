#include <stdio.h>
int main()
{
int i,j,n;
printf("Enter the no.of elements in the array: ");
scanf("%d",&n);
int arr1[n];
int arr2[n];
int merge[n+n];
printf("Array-1: ");
for (i=0;i<n;i++)
{
  scanf("%d",&arr1[i]);
}

printf("\nArray-2: ");
for (i=0;i<n;i++)
{
  scanf("%d",&arr2[i]);
}

//Sorting of array-1
for (i=0;i<n;i++)
{
  for (j=i+1;j<n;j++)
  {
    if (arr1[i]<arr1[j])
    {
      int temp = arr1[j];
      arr1[j] = arr1[i];
      arr1[i] = temp; 
    }
  }
}

//Printing the sorted array-1
printf("\nSorted array-1 is ");
for (i=0;i<n;i++)
{
  printf("%d ",arr1[i]);
}

//Sorting of array-2
for (i=0;i<n;i++)
{
  for (j=i+1;j<n;j++)
  {
    if (arr2[i]<arr2[j])
    {
      int temp = arr2[j];
      arr2[j] = arr2[i];
      arr2[i] = temp; 
    }
  }
}

//Printing the sorted array-2
printf("\nSorted array-2 is ");
for (i=0;i<n;i++)
{
  printf("%d ",arr2[i]);
}


//printing the merged array
printf("\nThe merged array is ");
for (i=0;i<n+n;i++)
{
  merge[i] = arr1[i];
}
for (i=0;i<n;i++)
{
  merge[i+n] = arr2[i];
}

for (i=0;i<n+n;i++)
{
  printf("%d ",merge[i]);
}

//Sorting the merged array
for (i=0;i<n+n;i++)
{
  for (j=i+1;j<n+n;j++)
  {
    if (merge[i]<merge[j])
    {
      int temp = merge[j];
      merge[j] = merge[i];
      merge[i] = temp;
    }
  }
}

printf("\nThe sorted merged array is ");
for (i=0;i<n+n;i++)
{
  printf("%d ",merge[i]);
}
}


