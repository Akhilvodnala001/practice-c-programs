#include <stdio.h>
#include <pthread.h>
#define N 5
void *pthread_fun(void *arg)
{
  int i,j;
  int min;
  int *arr = (int *)arg;
  for (i=0;i<N-1;i++)
  {
    min = i;
    for (j=i+1;j<N;j++)
    {
      if (arr[j]<arr[min])
      {
        min = j;
      }
    }
    if (min != i)
    {
      int temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
    } 
  }
}
int main()
{
  int i;
  pthread_t ti;
  int arr[] = {5,4,3,2,1};
  pthread_create(&ti,NULL,pthread_fun,arr);
  pthread_join(ti,NULL);
  for (i=0;i<N;i++)
  {
      printf("%d ",arr[i]);
  }
}
