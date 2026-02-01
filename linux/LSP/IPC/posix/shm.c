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
  sem_t *sem = sem_open("/demo_shm",0);
  int fd = shm_open("/demo_shm",O_CREAT|O_RDWR,0640);
  if (fd<0)
  {
    perror("shm_open");
    return 1;
  }
  struct stat buf;
  fstat(fd,&buf);
  char *addr = mmap(NULL,buf.st_size,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);
  printf("%s",addr);
  sem_close(sem);
  munmap(addr,buf.st_size);
  sem_unlink("/demo_shm");
  shm_unlink("/demo_shm");
}
