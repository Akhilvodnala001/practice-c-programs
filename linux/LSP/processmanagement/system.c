#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
int main()
{
  int stat;
  pid_t pid;
  while (1)
  {
    pid = vfork();
    if (pid == 0)
    {
      char cmd[10];
      printf("myshell>> ");
      fgets(cmd,sizeof(cmd),stdin);
      cmd[strcspn(cmd,"\n")] = '\0';
      system(cmd);
      exit(0);
    }
    wait(&stat);
  }
}

