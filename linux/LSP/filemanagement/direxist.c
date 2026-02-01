#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
  struct stat s;
  stat("akhil",&s);
  printf("size of the directory is %ld\n",s.st_size);

}
