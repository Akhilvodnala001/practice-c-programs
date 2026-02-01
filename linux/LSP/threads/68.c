#include <stdio.h>
#include <string.h>
#include <pthread.h>
void *pthreadfun(void *arg)
{
  int flag;
  int limit = *(int *)arg;
  for (int i=2;i<limit;i++)
  {
    flag = 1;
    for (int j=2;j<i/2;j++)
    {
      if (i%j == 0)
      {
        flag = 0;
        break;
      }
    }
    if (flag == 1)
    {
      printf("%d ",i);
    }
  }
}
int main()
{
  int num;
  printf("Enter the limit: ");
  scanf("%d",&num);
  pthread_t ti;
  pthread_create(&ti,NULL,pthreadfun,&num);
  pthread_join(ti,NULL);
}
