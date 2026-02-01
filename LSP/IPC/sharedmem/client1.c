#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/sem.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#define KEY 199220
int main()
{
  struct sembuf smop;
  int semid,shmid;
  char *shm;
  shmid = shmget(KEY,512,0);
  if (shmid<0)
  {
    perror("shmid");
    return 1;
  }
  semid = semget(KEY,2,0);
  if (semid<0)
  {
    perror("semid");
    return 1;
  }
  shm = shmat(shmid,NULL,0);
  if (shm == NULL)
  {
     
  }
}
