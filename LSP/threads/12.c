#include <stdio.h>
#include <pthread.h>
pthread_mutex_t lock;
void *pthreadfun(void *arg)
{
  pthread_mutex_lock(&lock);
    printf("%s ",(char *)arg);
    printf("%ld\n",pthread_self());
  pthread_mutex_unlock(&lock);
}
int main()
{
  pthread_t ti1,ti2;
  pthread_create(&ti1,NULL,pthreadfun,"Thread-1 ");
  pthread_create(&ti2,NULL,pthreadfun,"Thread-2 ");
  pthread_join(ti1,NULL);
  pthread_join(ti2,NULL);
  
}
