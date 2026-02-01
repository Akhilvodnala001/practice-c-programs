#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#define N 5
int buffer[N];
int count = 0;
pthread_mutex_t lock;
void *pthreadfun1(void *arg)
{ 
  printf("Thread-1!\n");
  int num;
  while(count<N)
  {
    pthread_mutex_lock(&lock);
      num = rand()%100;
      buffer[count] = num;
      printf("generated %d and stored at %d index!\n",num,count++);
    pthread_mutex_unlock(&lock);
  }
}
void *pthreadfun2(void *arg)
{
  printf("Thread-2!\n");
  while(count>0)
  {
    pthread_mutex_lock(&lock);
      int val = buffer[count-1];
      printf("Read %d from index %d\n",val,count-1);
      count--;
    pthread_mutex_unlock(&lock);
  } 
}
int main()
{
  pthread_t ti1,ti2;
  pthread_create(&ti1,NULL,pthreadfun1,NULL);
  pthread_create(&ti2,NULL,pthreadfun2,NULL);
  pthread_join(ti1,NULL);
  pthread_join(ti2,NULL);
} 
