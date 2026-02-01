#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <stdlib.h>
void *pthreadfun(void *arg)
{
  int num = *((int *)arg);
  int *fact = malloc(sizeof(int));
  *fact = 1;
  while(num>0)
  {
    *fact = (*fact)*num;
    num--;
  }
  return fact;
}
int main()
{
  pthread_t ti;
  int num;
  scanf("%d",&num);
  pthread_create(&ti,NULL,pthreadfun,&num);
  int *ret;
  pthread_join(ti,(void **)&ret);
  printf("factorial of %d is %d",num,*ret);
}
