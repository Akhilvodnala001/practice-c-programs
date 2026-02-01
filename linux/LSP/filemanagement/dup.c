#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
  int fd;
  fd = open("file.txt",O_WRONLY|O_CREAT|O_TRUNC,0640);
  if (fd<0)
  {
    perror("Error opening file!\n");
    exit(10);
  }
  printf("Hello world!\n");
  dup2(fd,1);
  printf("AFTER dup2() call the printf can be used for write data into the file!\n");
  close(fd);
}
