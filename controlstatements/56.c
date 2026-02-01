#include <stdio.h>
int main()
{
int n;
printf("Enter no.of elements in the array-1: ");
scanf("%d",&n);
int m;
printf("Enter no.of elements in the array-2: ");
scanf("%d",&m);

int arr1[n],arr2[m],arr3[n+m];
int i,j;

printf("Enter the elements of the array-1: ");
for (i=0;i<n;i++)
{
  printf("Index %d element: ",i);
  scanf("%d",&arr1[i]);
}

printf("Enter the elements of the array-2: ");
for (i=0;i<m;i++)
{
  printf("Index %d element: ",i);
  scanf("%d",&arr2[i]);
}

for (i=0;i<n;i++)
{
  arr3[i] = arr1[i];
}

int k = n;
int found = 0;
for (i=0;i<m;i++)
{
  found = 0;
  for (j=0;j<k;j++)
  {
    if (arr2[i]==arr3[j])
    {
      found = 1;
    }
  }
  if (!found)
  {
    arr3[k] = arr2[i];
    k++;
  }
}

for (i=0;i<k;i++)
{
  printf("%d ",arr3[i]);
}

}
