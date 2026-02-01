#include <stdio.h>
int main()
{
int n;
int m;
printf("Enter the no.of elements in array-1: ");
scanf("%d",&n);
printf("Enter the no.of elements in array-2: ");
scanf("%d",&m);

int arr1[n],arr2[m],res[n+m];
int i,j,found = 0;

printf("Enter the elements for the arrray-1: \n");
for (i=0;i<n;i++)
{
  printf("Index %d:",i);
  scanf("%d",&arr1[i]);
}

printf("Enter the elements for the arrray-2: \n");
for (i=0;i<m;i++)
{
  printf("Index %d:",i);
  scanf("%d",&arr2[i]);
}

int k = 0;
for (i=0;i<n;i++)
{
  found = 0;
  for (j=0;j<m;j++)
  {
    if (arr1[i]==arr2[j])
    {
      found = 1;
    }
  }
  if (found == 0)
  {
    res[k] = arr1[i];
    k++;
  }
}

for (i=0;i<m;i++)
{
  found = 0;
  for (j=0;j<n;j++)
  {
    if (arr2[i]==arr1[j])
    {
      found = 1;
    }
  }
  if (found == 0)
  {
    res[k] = arr2[i];
    k++;
  }
}

for (i=0;i<k;i++)
{
  printf("%d ",res[i]);
}


}
