#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
int main(int argc,char *argv[])
{
  if (argc == 1)
  {
    perror("too few arguements!\n");
    exit(1);
  }
  int status = unlink(argv[1]);
  if (status != 0)
  {
    perror("unlink error!\n");
    exit(1);
  }

}
