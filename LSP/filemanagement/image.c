#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
  int fd;
  fd = open("image.jpg",O_WRONLY|O_CREAT,0640);
  close(fd);
}
