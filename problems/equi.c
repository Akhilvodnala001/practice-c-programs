#include <stdio.h>
int main()
{
  int n = 6;
  int arr[] = {1,2,3,4,5,1};
  int i,j,k;
  int eq = -1;
  int lsum,rsum;
  for (i = 1;i<n-2;i++)
  {
    lsum = 0;
    rsum = 0;
    for (j=0;j<i;j++)
    {
      lsum = lsum+arr[j];
    }
    for(k=i+1;k<n;k++)
    {
      rsum = rsum+arr[k];
    }
    if (lsum == rsum)
    {
      eq = i;
      break;
    }
  }
  if (eq == -1)
  {
    printf("No equilibrium position!");
    return 0;
  }
  printf("Equilibrium index is %d and equivalent sum is %d",eq,lsum);
}
