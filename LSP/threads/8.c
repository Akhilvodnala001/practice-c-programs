#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
void *pthreadfun(void *arg)
{
  time_t t;
  time(&t);
  struct tm *info = localtime(&t);
  printf("%s ",asctime(info));
}
int main()
{
  pthread_t ti;
  pthread_create(&ti,NULL,pthreadfun,NULL);
  pthread_join(ti,NULL);
}
