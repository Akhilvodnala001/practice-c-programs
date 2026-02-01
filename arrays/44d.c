#include <stdio.h>
int main()
{
int i,j,n;
printf("Enter the no.of elements in the array: ");
scanf("%d",&n);
int a[n];
int freq[n];
int k = 0;
int dis[n];
printf("Enter the elements of the array: ");
for (i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}

for (i=0;i<n;i++)
{
  freq[i] = 0;
}

for (i=0;i<n;i++)
{
  int unique = 0;
  if (freq[i] == 0)
  {
    for (j=i+1;j<n;j++)
    {
      if (a[i]==a[j])
      {
        unique = 1;
        freq[j] = -1;
      }
    }
    if (unique == 0)
    {
      dis[k] = a[i];
      k++;
    }
  }
}

printf("The distinct elements in the array are ");
for (i=0;i<k;i++)
{
  printf("%d ",dis[i]);
}
}
