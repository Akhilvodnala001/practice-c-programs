#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <wait.h>

int main()
{
  int *addr;
  addr = mmap(NULL,sizeof(int),PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANONYMOUS,-1,0);
  (*addr) = 1;
  pid_t pid = fork();
  switch(pid)
  {
    case -1: perror("fork");
            return 1;
    case 0: (*addr)++;
            exit(0);
    default:int stat;
            wait(&stat);
            printf("%d",*addr);
  }
}
