#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#define BUFFER_SIZE 5
int buff[BUFFER_SIZE];
int in = 0;
int out = 0;
int count = 0;
pthread_mutex_t mutex;
pthread_cond_t notempty;
pthread_cond_t notfull;
void *producer(void *arg)
{
  int item = 1;
  while (1)
  {
    pthread_mutex_lock(&mutex);
      while (count == BUFFER_SIZE)
      {
        pthread_cond_wait(&notfull,&mutex);
      }
      buff[in] = item;
      printf("Produced = %d\n",buff[in]);
      in = (in+1)%BUFFER_SIZE;
      item++;
      count++;
      pthread_cond_signal(&notempty);
    pthread_mutex_unlock(&mutex);
    sleep(1);
  }
}
void *consumer(void *arg)
{
  while(1)
  {
    pthread_mutex_lock(&mutex);
      while (count == 0)
      {
        pthread_cond_wait(&notempty,&mutex);
      }
      int item = buff[out];
      printf("Consumed = %d\n",item);
      out = (out+1)%BUFFER_SIZE;
      count--;
      pthread_cond_signal(&notfull);
    pthread_mutex_unlock(&mutex);
    sleep(1);
  }
}
int main()
{
  pthread_t ti1,ti2;
  pthread_mutex_init(&mutex,NULL);
  pthread_cond_init(&notempty,NULL);
  pthread_cond_init(&notfull,NULL);
  
  pthread_create(&ti1,NULL,consumer,NULL);
  pthread_create(&ti2,NULL,producer,NULL);
  
  pthread_join(ti1,NULL);
  pthread_join(ti2,NULL);
  
  pthread_mutex_destroy(&mutex);
  pthread_cond_destroy(&notempty);
  pthread_cond_destroy(&notfull);
}
