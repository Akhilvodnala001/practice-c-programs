#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
pthread_mutex_t mutex;
int glob;
void *pthreadfun(void *arg)
{
  int loop,i,loc;
  loop = *(int *)arg;
  for (i=0;i<loop;i++)
  {
    pthread_mutex_lock(&mutex);
      loc = glob;
      loc++;
      glob = loc;
    pthread_mutex_unlock(&mutex);
  } 
}

int main()
{
  pthread_t ti1,ti2;
  int loop = 2000;
  pthread_create(&ti1,NULL,pthreadfun,&loop);
  pthread_create(&ti2,NULL,pthreadfun,&loop);
  pthread_join(ti1,NULL);
  printf("%d ",glob);
  pthread_join(ti2,NULL);
  printf("%d ",glob);
}
