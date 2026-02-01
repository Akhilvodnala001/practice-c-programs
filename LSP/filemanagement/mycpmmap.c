#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int fd1,fd2;
  fd1 = open(argv[1],O_RDONLY);
  if (fd1<0)
  {
    exit(1);
  }
  fd2 = open(argv[2],O_RDWR|O_CREAT,0640);
  if (fd2<0)
  {
    exit(1);
  }
  struct stat f1;
  if (fstat(fd1,&f1) == -1)
  {
    exit(1);
  }
  
  int file1_size;
  file1_size = f1.st_size;
  ftruncate(fd2, file1_size);
  char *src = mmap(NULL, file1_size, PROT_READ, MAP_PRIVATE, fd1 , 0);
  char *des = mmap(NULL,file1_size, PROT_WRITE, MAP_SHARED, fd2, 0);
  memcpy(des,src,file1_size);
  close(fd1);
  close(fd2);
}
