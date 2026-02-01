#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <sys/shm.h>
#include <string.h>

#define KEY 199220
void toggle(char *str)
{
  for (int i=0;i<strlen(str);i++)
  {
    if (str[i]>=65 && str[i]<=90)
    {
      str[i] = str[i] + 32;
    }
    else if(str[i]>=97 && str[i]<=122)
    {
      str[i] = str[i] - 32;
    }
  }
}
int main()
{
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
    memcpy(str+256,str,strlen(str)+1);
    toggle(str+256);
    smop.sem_num = 1;
    smop.sem_op = +1;
    smop.sem_flg = 0;
    semop(semid,&smop,1);
  }
  
}
