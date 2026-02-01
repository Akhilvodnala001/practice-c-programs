#include <stdio.h>
#include <pthread.h>
#include <string.h>
void *pthreadfun(void *arg)
{
  int i;
  char *str = (char *)arg;
  for (i=0;i<strlen(str);i++)
  {
    printf("%d ",str[i]);
  }
  return NULL;
}

int main()
{
  pthread_t ti;
  pthread_create(&ti,NULL,pthreadfun,"AKHIL");
  pthread_join(ti,NULL);
}
