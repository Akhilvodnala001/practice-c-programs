#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/sem.h>
#include <sys/shm.h>
#define KEY 199220
int main()
{
  int shmid = shmget(KEY,100,0);
  if (shmid<0)
  {
    perror("shmget");
    return 1;
  }
  int *ptr = shmat(shmid,NULL,0);
  int semid = semget(KEY,2,0);
  if (semid<0)
  {
    perror("semget");
    return 1;
  }
  struct sembuf p = {1,-1,0};
  struct sembuf v = {0,+1,0};
  for (int i=0;i<5;i++)
  {
    semop(semid,&v,1);
    printf("Reader: %d\n",*ptr);
    semop(semid,&p,1);
    sleep(1);
  }

}
