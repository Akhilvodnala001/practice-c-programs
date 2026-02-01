#include <stdio.h>
int main()
{
int i,j,n=10;
int a[n];
printf("Enter the elements of the array: ");
for (i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}

for (i=0;i<n;i++)
{
  for (j=i+1;j<n;j++)
  {
    if (a[i]>a[j])
    {
      int temp = a[j];
      a[j] = a[i];
      a[i] = temp;
    }
  }
}

for (i=0;i<n;i++)
{
  printf("%d ",a[i]);
}
}
