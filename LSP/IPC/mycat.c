#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/mman.h>
int main(int argc,char *argv[])
{
  int fd = open(argv[1],O_RDWR);
  if (fd == 0)
  {
    perror("open");
    return 1;
  }
  struct stat buf;
  fstat(fd,&buf);
  char *str = mmap(NULL,buf.st_size,PROT_READ|PROT_WRITE,MAP_PRIVATE,fd,0);
  printf("%s",str);
}
