#include <stdio.h>
int main()
{
int i,j,n,m,found,k;
printf("No.of elements in array-1: ");
scanf("%d",&n);
printf("No.of elements in array-2: ");
scanf("%d",&m);
int a[n];
int b[m];
int u[n];

//Array-1 Input
printf("Elements of array-1: ");
for (i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}

//Array-2 Input
printf("Elements of array-2: ");
for (i=0;i<m;i++)
{
  scanf("%d",&b[i]);
}

//Union
for (i=0;i<n;i++)
{
  u[i] = a[i];
}
k=n;
u[k];
for (i=0;i<m;i++)
{
  found = 0;
  for (j=0;j<k;j++)
  {
    if (b[i] == u[j])
    {
      found = 1;
    }
  }
  if (found == 0)
  {
    u[k] = b[i];
    k++;
  }
}

printf("The union of array-1 and array-2 is ");
for (i=0;i<k;i++)
{
  printf("%d ",u[i]);
}

//Intersection
int flag = 0;
int l=0;
int inter[n];
for (i=0;i<n;i++)
{
  flag = 0;
  for (j=0;j<m;j++)
  {
    if (a[i] == b[j])
    {
      flag = 1;
    }
  }
  if (flag == 1)
  {
    inter[l] = a[i];
    l++;
  }
}
printf("\nThe intersection of array-1 and array-2 is ");
for (i=0;i<l;i++)
{
  printf("%d ",inter[i]);
}
}
