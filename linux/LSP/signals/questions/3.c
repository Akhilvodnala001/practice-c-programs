#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
int main()
{
  pid_t pid;
  int stat;
  pid = fork();
  signal(SIGCHLD,SIG_IGN);
  if (pid == 0)
  {
    printf("Child process!\n");
    sleep(10);
    printf("Child process Terminated!\n");
    exit(0);  
  }
  sleep(60);
  wait(&stat);
  printf("Parent process terminated!\n");
}
