#include <stdio.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <sys/sem.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>

#define KEY 199220
int main()
{
  pid_t pid;
  pid = fork();
  if (pid == 0)
  {
    sleep(1);
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
    while(1)
    {
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
      smop.sem_num = 1;
      smop.sem_op = -1;
      smop.sem_flg = 0;
      semop(semid,&smop,1);
      printf("Response from server: %s\n",shm+256);
    }
    exit(0);
  }
  int shmid = shmget(KEY,512,IPC_CREAT|0640);
  if (shmid<0)
  {
    perror("shmget");
    return 1;
  }
  char *str = shmat(shmid,NULL,0);
  int semid = semget(KEY,2,IPC_CREAT|0640);
  if (semid<0)
  {
    perror("semget");
    return 1;
  }
  while(1)
  {
    semctl(semid,0,SETVAL,0);
    semctl(semid,1,SETVAL,0);
    struct sembuf smop;
    smop.sem_num = 0;
    smop.sem_op = -1;
    smop.sem_flg = 0;
    semop(semid,&smop,1);
    printf("Message from client: %s\n",str);
    char dst[100];
    memcpy(dst,str,strlen(str)+1);
    for (int i=0;i<strlen(dst);i++)
    {
      if (dst[i]<=65 && dst[i]>=90)
      {
        dst[i] = dst[i] + 32;
      }
      else if(dst[i]>=97 && dst[i]<=122)
      {
        dst[i] = dst[i] - 32;
      }
    }
    memcpy(str+256,dst,strlen(dst)+1);
    smop.sem_num = 1;
    smop.sem_op = +1;
    smop.sem_flg = 0;
    semop(semid,&smop,1);
  }
  int stat;
  wait(&stat);
}
