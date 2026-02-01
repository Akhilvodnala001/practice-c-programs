#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <string.h>
#include <semaphore.h>

int main()
{
  sem_t *sem = sem_open("/demo_shm",O_CREAT|O_RDWR,0640,0);
  int fd = shm_open("/demo_shm",O_RDWR,0);
  if (fd<0)
  {
    perror("shm_open");
    return 1;
  }
  ftruncate(fd,20);
  char *addr = mmap(NULL,20,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);
  char str[20];
  printf("Enter string: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")] = '\0';
  memcpy(addr,str,20);
  sem_post(sem);
  munmap(addr,20);
  sem_unlink("/demo_shm");
  shm_unlink("/demo_shm");
}
