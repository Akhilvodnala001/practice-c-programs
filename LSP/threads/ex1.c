#include <stdio.h>
#include <pthread.h>
#include <string.h>
int retval;
int *retptr;
void *pthreadfun(void *arg)
{
  char *sptr = (char *)arg;
  printf("Data from main thread: %s\n",sptr);
  retval = strlen(sptr);
  retptr = &retval;
  return retptr;
}
int main()
{
  pthread_t ti;
  int *ret;
  pthread_create(&ti,NULL,pthreadfun,"Akhil");
  pthread_join(ti,&ret);
  printf("Data from new thread = %d\n",*ret);
  printf("%s\n","Main");
}
