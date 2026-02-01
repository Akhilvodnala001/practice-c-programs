#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
int item = 0;
void *pthreadfun1(void *arg)
{
  int i = item;
  while (1)
  {
    i++;
    item++;
    printf("%d \n",item);
    sleep(1);
  }
}
int main()
{
  pthread_t ti1,ti2;
  pthread_create(&ti1,NULL,pthreadfun1,NULL);
  while (1)
  {
    if (item >= 10)
    {
      pthread_cancel(ti1);
      break;
    }
  }
}
