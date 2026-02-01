#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
pthread_mutex_t mutex;
int i = 1;
void *pthreadfun1(void *arg)
{
  while(1)
  {
    pthread_mutex_lock(&mutex);
      if (i>20)
      {
        pthread_mutex_unlock(&mutex);
        pthread_exit(0);
      }
      printf("%d\n",i);
      i++;
    pthread_mutex_unlock(&mutex);
    sleep(1);
  }
}
void *pthreadfun2(void *arg)
{
  while(1)
  {

    pthread_mutex_lock(&mutex);
      if (i>20)
      {
          pthread_mutex_unlock(&mutex);
          pthread_exit(0);
      }
      printf("%d\n",i);
      i++;
    pthread_mutex_unlock(&mutex);
    usleep(10000);
  }
}
int main()
{
  pthread_t ti1,ti2;
  pthread_create(&ti1,NULL,pthreadfun1,NULL);
  pthread_create(&ti2,NULL,pthreadfun2,NULL);
  pthread_join(ti1,NULL);
  pthread_join(ti2,NULL);
}
