#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
void *pthread_fun(void *arg)
{
  printf("%s\n",(char *)arg);
  printf("My thread identifier: %ld\n",(unsigned long)pthread_self());
}
int main()
{
  pthread_t ti1;
  pthread_t ti2;
  pthread_create(&ti1,NULL,pthread_fun,"THREAD-1");
  pthread_create(&ti2,NULL,pthread_fun,"THREAD-2");
  pthread_join(ti1,NULL);
  pthread_join(ti2,NULL);
}
