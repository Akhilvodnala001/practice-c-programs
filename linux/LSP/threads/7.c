#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
void *pthreadfun(void *arg)
{
  int *square = malloc(sizeof(int));
  int a = *(int *)arg;
  *square = a*a;
  return square;
}
int main()
{
  pthread_t ti;
  int a;
  printf("Enter a number: ");
  scanf("%d",&a);
  pthread_create(&ti,NULL,pthreadfun,&a);
  int *square;
  pthread_join(ti,(void **)&square);
  printf("Square of %d is %d\n",a,*square);
}
