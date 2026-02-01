#include <stdio.h>
int main()
{
  int arr[] = {1,2,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int mask;
  int total = 1<<n; //2 power n (i.e, 8 subsets)
  int i;
  for (mask = 0;mask<total;mask++)
  {
    printf("{");
    for (i=0;i<n;i++)
    {
      if (mask & (1<<i))
      {
        printf("%d",arr[i]);
      }
    }
    printf("}\n");
  }
}
