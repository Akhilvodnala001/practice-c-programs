#include <stdio.h>
int main()
{
int i,j,n;
printf("Enter the no.of elements in the array: ");
scanf("%d",&n);
int a[n];
printf("Enter the elements in the array: ");
for (i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
int found;
int freq[n];
for(i=0;i<n;i++)
{
  freq[i] = 0;
}
printf("Non-repetitive elements are ");
for (i=0;i<n;i++)
{
  found = 0;
  if (freq[i] == 0)
  {
    for (j=i+1;j<n;j++)
    {
      if (a[i]==a[j])
      {
        found = 1;
        freq[j] = -1;
      }
    }
    if (found == 0)
    {
      printf("%d ",a[i]);
    }
  }
}
}
