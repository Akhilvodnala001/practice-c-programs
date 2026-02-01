#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
  if (argc == 1)
  {
    perror("too few arguements!\n");
    exit(1);
  }
  int status = rmdir(argv[1]);
  if (status != 0)
  {
    perror("rmdir error!\n");
  }
}
