#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/sem.h>
#include <sys/shm.h>
#include <string.h>
#define KEY 199220
int main()
{
  struct sembuf smop;
  int semid,shmid;
  char *shm;
  shmid = shmget(KEY,512,IPC_CREAT|0640);
  if (shmid<0)
  {
    perror("shmget");
    return 1;
  }
  semid = semget(KEY,2,IPC_CREAT|0640);
  if (semid<0)
  {
    perror("semget");
    return 1;
  }
  shm = shmat(shmid,NULL,0);
  if (shm == NULL)
  {
    perror("shmat");
    return 1;
  }
  semctl(semid,0,SETVAL,0);
  semctl(semid,1,SETVAL,0);
  smop.sem_num = 0;
  smop.sem_op = -1;
  smop.sem_flg = 0;
  semop(semid,&smop,1);
  printf("%s\n",shm);
}
