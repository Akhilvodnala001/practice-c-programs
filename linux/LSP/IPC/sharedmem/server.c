#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/sem.h>
#include <sys/shm.h>
#include <sys/ipc.h>
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
  shm = shmat(shmid,NULL,0);
  if (shm == NULL)
  {
    perror("shmat");
    return 1;
  }
  semid = semget(KEY,2,IPC_CREAT|0640);
  if (semget<0)
  {
    perror("semget");
    return 1;
  }
  semctl(semid,0,SETVAL,0);
  semctl(semid,1,SETVAL,0);
  smop.sem_num = 0;
  smop.sem_op = -1;
  smop.sem_flg = 0;
  semop(semid,&smop,1);
  printf("Message from client: %s\n",shm);
  printf("processing!!!\n");
  for (int i=0;i<strlen(shm);i++)
  {
    if (shm[i]>=97 && shm[i]<=122)
    {
      shm[i] = shm[i]-32;
    }
    else if (shm[i]>=65 && shm[i]<=90)
    {
      shm[i] = shm[i]+32;
    }
  }
  smop.sem_num = 1;
  smop.sem_op = +1;
  smop.sem_flg = 0;
  printf("Response sent to client!!\n");
  semop(semid,&smop,1);
  
}
