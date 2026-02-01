#include <stdio.h>
int main()
{
  int arr[10] = {1,2,3,4,2,3,4,5,4,4};
  int i,j;
  int count = 1;
  for (i=0;i<10;i++)
  {
    for (j=0;j<10;j++)
    {
      count = 1;
      if (arr[i] == arr[j])
      {
        count++;
      }
    }
    printf("count of %d is %d \n",arr[i],count);
  }

}
