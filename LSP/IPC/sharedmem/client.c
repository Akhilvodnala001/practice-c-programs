#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <sys/shm.h>
#define KEY 199220
int main()
{
  struct sembuf smop;
  int semid,shmid;
  char *shm;
  shmid = shmget(KEY,512,0);
  if (shmid<0)
  {
    perror("shmget");
    return 1;
  }
  semid = semget(KEY,2,0);
  if (semget<0)
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
  printf("Enter message for server: ");
  scanf("%s",shm);
  smop.sem_num = 0;
  smop.sem_op = +1;
  smop.sem_flg = 0;
  semop(semid,&smop,1);
  smop.sem_num = 1;
  smop.sem_op = -1;
  smop.sem_flg = 0;
  semop(semid,&smop,1);
  printf("Response from server: %s\n",shm);
}
