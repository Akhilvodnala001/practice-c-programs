#include <stdio.h>
#include <pthread.h>
#include <time.h>
void *pthreadfun(void *arg)
{
  while(1)
  {
    time_t now;
    time(&now);
    struct tm *t = localtime(&now);
    printf("Current time %d:%d:%d\n",t->tm_hour,t->tm_min,t->tm_sec);
    sleep(2);
  }
}
int main()
{
  pthread_t ti;
  pthread_create(&ti,NULL,pthreadfun,NULL);
  pthread_join(ti,NULL);
}
