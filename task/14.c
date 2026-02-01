#include <stdio.h>
#define N 5
int main()
{
  int arr[N];
  int i,j,max;
  for (i=0;i<N;i++)
  {
    scanf("%d",&arr[i]);
  }
  for (i=0;i<N;i++)
  {
    max = i;
    for (j=i+1;j<N;j++)
    {
      if (arr[max]<arr[j])
      {
        max = j;
      } 
    }
    if (max!=i)
    {
      int temp = arr[max];
      arr[max] = arr[i];
      arr[i] = temp;
    }
  }
  printf("Second largest element in the array is %d\n",arr[1]);
}
