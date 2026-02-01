#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
void *pthreadfun(void *arg)
{
  for(int i = 1;i<=10;i++)
  {
    printf("%s %d \n",(char *)arg,i);
    usleep(100000);
  }
  return NULL;
}
int main()
{
  pthread_t ti1;
  pthread_t ti2;
  pthread_create(&ti1,NULL,pthreadfun,"Thread-1");
  pthread_create(&ti2,NULL,pthreadfun,"Thread-2");
  pthread_join(ti1,NULL);
  pthread_join(ti2,NULL);
}

