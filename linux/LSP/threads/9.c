#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
void *pthreadfun(void *arg)
{
  int n = *(int *)arg;
  int flag = 0;
  if (n == 1)
  {
    printf("Prime!\n");
  }
  for (int i=2;i<n/2;i++)
  {
    if (n%i == 0)
    {
      flag = 1;
      printf("Not prime!");
      break;
    }
  }
  if (flag == 0)
  {
    printf("prime!\n");
  }
  
}
int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  pthread_t ti;
  pthread_create(&ti,NULL,pthreadfun,&num);
  pthread_join(ti,NULL);
}
