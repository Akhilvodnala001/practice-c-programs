#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
int main(int argc,char *argv[])
{
  if (argc == 1)
  {
    perror("Error\n");
    exit(1);
  }
  int status = mkdir(argv[1],0740);
  if (status != 0)
  {
    perror("mkdir error!\n");
  }
  
}
