#include <stdio.h>
#include <pthread.h>
pthread_mutex_t lock;
int a = 10;
int b = 20;
int sum;
void *pthreadfun1(void *arg)
{
  int i;
  pthread_mutex_lock(&lock);
    sum = a + b;
    for (i=0;i<10;i++)
    {
      sum++;
    }
  pthread_mutex_unlock(&lock);
}
void *pthreadfun2(void *arg)
{
  int i;
  pthread_mutex_lock(&lock);
    sum = a + b;
    for (i=0;i<10;i++)
    {
      sum--;
    }
  pthread_mutex_unlock(&lock);
}
int main()
{
  pthread_t ti1;
  pthread_t ti2;
  pthread_create(&ti1,NULL,pthreadfun1,NULL);
  pthread_create(&ti2,NULL,pthreadfun2,NULL);
  pthread_join(ti1,NULL);
  pthread_join(ti2,NULL);
  printf("sum = %d\n",sum);
}
