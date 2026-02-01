#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
void *pthreadfun(void *arg)
{
  pthread_attr_t attr;
  pthread_attr_init(&attr);
  void *addr;
  size_t size;
  pthread_getattr_np(pthread_self(),&attr);
  pthread_attr_getstack(&attr,&addr,&size);
  printf("Thead identifier = %ld\n",pthread_self());
  printf("Size of stack area = %d\n",size);
  printf("Adress = %p\n",addr);
  
}
int main()
{
  pthread_t ti;
  pthread_attr_t attr;
  pthread_attr_init(&attr);
  size_t size = 1024*1024;
  void *stack;
  stack = malloc(size);
  pthread_attr_setstack(&attr,stack,size);
  pthread_create(&ti,&attr,pthreadfun,NULL);
  pthread_attr_destroy(&attr);
  pthread_join(ti,NULL);
}
