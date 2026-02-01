#include <stdio.h>
int main()
{
  int arr[] = {1,2,3,4,3,2,1};
  int n = sizeof(arr)/sizeof(arr[0]);
  int i,result = 0;
  for (i=0;i<n;i++)
  { 
    result = result ^ arr[i];
  }
  printf("Single number is %d\n",result);
}
