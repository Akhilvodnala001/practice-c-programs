#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/sem.h>
#include <sys/shm.h>
#include <sys/wait.h>
#include <string.h>
#define KEY 199220

int main()
{
  int shmid = shmget(KEY,512,0);
  if (shmid<0)
  {
    perror("shmget");
    return 1;
  }
  char *shm = shmat(shmid,NULL,0);
  int semid = semget(KEY,2,0);
  if (semid<0)
  {
    perror("semget");
    return 1;
  }
  char str[100];
  printf("Enter message for server: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")] = '\0';
  memcpy(shm,str,strlen(str)+1);
  struct sembuf smop;
  smop.sem_num = 0;
  smop.sem_op = +1;
  smop.sem_flg = 0;
  semop(semid,&smop,1);
}
