#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/stat.h>
int main(int argc,char *argv[])
{
  int fd = open(argv[1],O_RDWR);
  if (fd<0)
  {
    perror("open");
    return 1;
  }
  char *str;
  struct stat buf;
  fstat(fd,&buf);
  str = mmap(NULL,buf.st_size,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);
  if (str == NULL)
  { 
    perror("mmap");
    return 1;
  }
  printf("%s",str);
  

}
