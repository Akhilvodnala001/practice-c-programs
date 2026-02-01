#include <stdio.h>
int main()
{
int i,j,n;
printf("Enter the no.of elements of the array: ");
scanf("%d",&n);
int a[n];
int k = 0;
int temp[n];
printf("Enter %d sorted elements: ",n);
for (i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for (i=0;i<n;i++)
{
  if (a[i] != a[i+1])
  {
    temp[k] = a[i];
    k++;
  }
}

printf("\nSorted array after deleting the duplicates is ");
for (i=0;i<k;i++)
{
  printf("%d ",temp[i]);
}

}
