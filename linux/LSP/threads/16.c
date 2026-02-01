#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <stdlib.h>
char str[100];
pthread_mutex_t lock;
void *pthreadfun1(void *arg)
{
  while (1)
  {
    char temp[100];
    printf("Enter string: ");
    scanf("%s",temp);
    temp[strcspn(temp,"\n")] = '\0';
    pthread_mutex_lock(&lock);
    strcpy(str,temp);
    pthread_mutex_unlock(&lock);
    sleep(2);
  }
}
int main()
{
  pthread_t ti1;
  pthread_mutex_lock(&lock);
  strcpy(str,"No input yet!");
  pthread_mutex_unlock(&lock);
  pthread_create(&ti1,NULL,pthreadfun1,NULL);
  while(1)
  { 
    pthread_mutex_lock(&lock);
    printf("%s\n",str);
    pthread_mutex_unlock(&lock);
    sleep(2);
  }
  pthread_join(ti1,NULL);
}
