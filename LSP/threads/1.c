#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <stdlib.h>
void *threadfun(void *arg)
{
  printf("%s\n",(char *)arg);
  int *ptr = malloc(sizeof(int));
  *ptr = strlen(arg);
  return ptr;
}
int main()
{
  pthread_t ti1;
  pthread_t ti2;
  pthread_t ti3;
  pthread_create(&ti1,NULL,threadfun,"Thread-1");
  pthread_create(&ti2,NULL,threadfun,"Thread-2");
  pthread_create(&ti3,NULL,threadfun,"Thread-3");
  int *ret1;
  int *ret2;
  int *ret3;
  pthread_join(ti1,(void **)&ret1);
  printf("Thread-1 return val = %d\n",*ret1);
  pthread_join(ti2,(void **)&ret2);
  printf("Thread-2 return val = %d\n",*ret2);
  pthread_join(ti3,(void **)&ret3);
  printf("Thread-3 return val = %d\n",*ret3);
  printf("Main thread!!!\n");
  free(ret1);
  free(ret2);
  free(ret3);
} 
