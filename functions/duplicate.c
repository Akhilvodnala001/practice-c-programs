#include <stdio.h>
int duplicate(int [],int);
int main()
{
int i,n,c;
printf("Enter the no.of elements: ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of the array; ");
for (i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
c = duplicate(arr,n);
printf("No.of duplicates in the array is %d",c);
}

int duplicate(int arr[],int n)
{
  int i,j,count = 0;
  int freq[n];
  for (i=0;i<n;i++)
  {
    freq[i] = 0;
  }
  for (i=0;i<n;i++)
  {
    if (freq[i] == 0)
    for (j=i+1;j<n;j++)
    {
      if (arr[i] == arr[j])
      {
        count++;
        freq[j] = 1;
      }
    }
  }
  return count;
  
}
