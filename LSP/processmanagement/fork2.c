#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
int main()
{
  int stat;
  int pid = fork();
  if (pid == 0)
  {
    printf("Child process!\n");
    return 5;
  }
  int p = wait(&stat);
  printf("PID of Child process: %d\n",pid);
  printf("EXIT STATUS: %d\n",WEXITSTATUS(stat));
  printf("Parent process!\n");
}
