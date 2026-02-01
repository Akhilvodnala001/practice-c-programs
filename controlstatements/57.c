#include <stdio.h>
int main()
{
int n;
int m;
printf("Enter the size of array 1: ");
scanf("%d",&n);
printf("Enter the size of array 1: ");
scanf("%d",&m);
int a[n],b[m],c[n+m];
int i,j;

printf("Enter the elements for array-1: \n");
for (i=0;i<n;i++)
{
  printf("Index-%d: ",i);
  scanf("%d",&a[i]);
}

printf("Enter the elements for array-2: \n");
for (i=0;i<m;i++)
{
  printf("Index-%d: ",i);
  scanf("%d",&b[i]);
}

int found = 0;
int k = 0;
for (i=0;i<n;i++)
{
  found  = 0;
  for (j=0;j<m;j++)
  {
    if (a[i]==b[j])
    {
      found = 1;
    }
  }
  if (found == 1)
  {
    c[k]=a[i];
    k++;
  }
}

if (k > 0)
{
  printf("The intersection of array-1 and array-2 is \n");
  for (i=0;i<k;i++)
  {
    printf("%d ",c[i]);
  }
}
else
{
  printf("There is no intersection between the two arrays...");
}
}
