#include <stdio.h>
int main()
{
int i,j,n,count;
printf("Enter the range: ");
scanf("%d",&n);
int a[n+2];
int freq[n+2];
for (i=0;i<n+2;i++)
{
  freq[i] = -1;
}

printf("Enter the Elements: ");
for (i=0;i<n+2;i++)
{
  scanf("%d",&a[i]);
}

for (i=0;i<n+2;i++)
{
  count = 1;
  if (freq[i] == -1)
  {
    for (j=i+1;j<n+2;j++)
    {
      if (a[i] == a[j])
      {
        count++;
        freq[j] = -2;
      }
    }
  }
  if (count == 2)
  {
    freq[i] = a[i];
  }
}

printf("Repeated elements are ");
for (i=0;i<n+2;i++)
{
  if (freq[i] != -1 && freq[i] != -2)
  {
    printf("%d ",freq[i]);
  }
}

}
