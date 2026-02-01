#include <stdio.h>
#define N 5
int main()
{
  int arr[N];
  int i,j;
  int dupcount = 0;
  for (i=0;i<N;i++)
  {
    scanf("%d",&arr[i]);
  }
  int freq[N];
  for (i=0;i<N;i++)
  {
    freq[i] = 0;
  }
  for (i=0;i<N;i++)
  {
    if (freq[i] == 0)
    {
      for (j=i+1;j<N;j++)
      {
        if (arr[i] == arr[j])
        {
          dupcount++;
          freq[j] = -1;
        }
      }
    }
  }
  printf("%d",dupcount);
}
