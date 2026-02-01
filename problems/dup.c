#include <stdio.h>
int main()
{
  int n = 7;
  int arr[] = {1,2,3,2,5,1,2};
  int freq[n];
  int i,j;
  for (i=0;i<n;i++)
  {
    freq[i] = 1;
  }
  for (i=0;i<n;i++)
  {
    if (freq[i] == 1)
    {
      for (j=i+1;j<n;j++)
      {
        if (arr[i] == arr[j])
        {
          freq[i] += 1;
          freq[j] = -1;
        }
      }
    } 
  }
  for (i=0;i<n;i++)
  {
    if (freq[i]>1)
    {
      printf("Frequency of %d is %d\n",arr[i],freq[i]);
    }
  }
  

}
