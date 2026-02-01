#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
  int fd1;
  fd1 = open(argv[1],O_RDONLY);
  if (fd1<0)
  {
    perror("Error opening file 1\n");
    exit(1);
  }
  int fd2;
  fd2 = open(argv[2],O_WRONLY|O_CREAT,0640);
  if (fd2<0)
  {
    printf("Error opening file 2\n");
    exit(1);
  }
  char str[10];
  int ret;
  while ((ret = read(fd1,str,10)) > 0 )
  {
    write(fd2,str,ret);
  }
}
