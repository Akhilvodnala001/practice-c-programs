#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/sem.h>
#include <sys/shm.h>
#include <string.h>
#define KEY 199220

int main()
{
  int shmid = shmget(KEY,512,IPC_CREAT|0666);
  if (shmid<0)
  {
    perror("shmget");
    return 1;
  }
  char *shm = shmat(shmid,NULL,0);
  if (shm == NULL)
  {
    perror("shmat");
    return 1;
  }
  char str[100];
  printf("Enter string: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")] = '\0';
  memcpy(shm,str,strlen(str)+1);
  printf("Before resizing: %s\n",shm);
  struct shmid_ds shminfo;
  shmctl(shmid,IPC_STAT,&shminfo);
  int oldsize = shminfo.shm_segsz;
  printf("Old size = %ld\n",shminfo.shm_segsz);
  shmdt(shm);
  shmctl(shmid,IPC_RMID,NULL);
  int newsize;
  printf("Enter new size: ");
  scanf("%d",&newsize);
  shmid = shmget(KEY,newsize,IPC_CREAT|0666);
  if (shmid<0)
  {
    perror("shmget");
    return 1;
  }
  shm = shmat(shmid,NULL,0);
  memcpy(shm,str,strlen(str));
  printf("After Resizing: %s\n",shm);
  
}
