#include <stdio.h>
int frequency(int [],int [],int);
int main()
{
int i,j,n;
printf("Enter the no.of elements: ");
scanf("%d",&n);
int arr[n];
int freq[n];
for (i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
for (i=0;i<n;i++)
{
  freq[i] = 0;
}
frequency(arr,freq,n);
}
int frequency(int arr[],int freq[],int n)
{
  int count = 0;
  int i,j;
  for (i=0;i<n;i++)
  {
    count = 1;
    if (freq[i] == 0)
    {
      for (j=i+1;j<n;j++)
      {
        if (arr[i] == arr[j])
        {
          count++;
          freq[j] = -1;
        }
        freq[i] = count;
      }
    }
  }
  
  for (i=0;i<n;i++)
  {
    if (freq[i] != 0 && freq[i] != -1)
    {
      printf("\nFrequency of %d is %d",arr[i],freq[i]);
    }
  }

}
