#include <stdio.h>
int main()
{
  int arr[] = {1,2,3,1,2,3,4,3,2,1};
  int n = sizeof(arr)/sizeof(arr[0]);
  int i,j,result = 0;
  for (i=0;i<32;i++)
  {
    int sum = 0;
    for (j=0;j<n;j++)
    {
      if (arr[j]&(1<<i))
      {
        sum++;
      }
    }
    if (sum%3 != 0)
    {
      result = result | (1<<i);
    }
  }
  printf("The single number is %d\n",result);
}
