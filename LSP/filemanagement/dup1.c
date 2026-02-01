#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
  int fd;
  fd = open("file.txt",O_RDONLY,0640);
  if (fd<0)
  {
    perror("error opening file");
    exit(1);
  }
  dup2(fd,0);
  char str[100];
  //scanf("%s",str);
  fgets(str,sizeof(str),stdin);
  printf("%s",str);
  close(fd);
}
