#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
void *pthreadfun(void *arg)
{
  printf("%s\n",(char *)arg);
  pthread_attr_t attr;
  void *addr;
  size_t size;
  pthread_attr_init(&attr);
  pthread_getattr_np(pthread_self(),&attr);
  pthread_attr_getstack(&attr,&addr,&size);
  printf("thread-id = %ld\n",pthread_self());
  printf("adress = %p\n",(int *)addr);
  printf("Stack size = %ld\n",size);
  pthread_attr_destroy(&attr);
}
int main()
{
  pthread_t ti;
  pthread_attr_t attr;
  pthread_attr_init(&attr);
  pthread_attr_setstacksize(&attr,1024*1024*2);
  pthread_create(&ti,&attr,pthreadfun,"Hellooooo!\n");
  pthread_attr_destroy(&attr);
  pthread_join(ti,NULL);
}
