#include <stdio.h>
int main()
{
int i,j,n,count;
printf("Enter the no.of elements: ");
scanf("%d",&n);
int a[n];
int freq[n];
int majority = 0;
printf("Enter the elements: ");
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
  int count = 1;
  if (freq[i] == 0)
  {
    for (j=i+1;j<n;j++)
    {
      if (a[i] == a[j])
      {
        count++;
        freq[j] = -1;
      }
    }
  }
  if (count>n/2)
  {
    printf("Majority element is %d which appeared %d times..",a[i],count);
    majority = 1;
  }
}
if (majority == 0)
{
  printf("No majority elements in the given array...");
}
}
