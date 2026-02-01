#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
pthread_mutex_t mut;
char str[] = "Hello world\n";
void *pthreadfun(void *arg)
{
  pthread_mutex_lock(&mut);
  printf("%s",(char *)arg);
  pthread_mutex_unlock(&mut);
}
int main()
{
  pthread_t ti1;
  pthread_t ti2;
  pthread_create(&ti1,NULL,pthreadfun,str);
  pthread_create(&ti2,NULL,pthreadfun,str);
  pthread_join(ti1,NULL);
  pthread_join(ti2,NULL);
  
}
