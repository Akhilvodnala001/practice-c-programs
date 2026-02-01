#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
int main()
{
  pid_t pid;
  int stat;
  pid = vfork();
  char *args = "/bin/ls";
  char *argv[] = {"ls",NULL};
  if (pid == 0)
  {
    execvp(args,argv);
  }
  wait(&stat);
  exit(1);
}
