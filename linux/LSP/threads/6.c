#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
void *pthreadfun(void *arg)
{
  int a,b;
  printf("Enter a and b: ");
  scanf("%d %d",&a,&b);
  printf("Sum of %d and %d is %d",a,b,a+b);
}
int main()
{
  pthread_t ti;
  pthread_create(&ti,NULL,pthreadfun,NULL);
  pthread_join(ti,NULL);
}
