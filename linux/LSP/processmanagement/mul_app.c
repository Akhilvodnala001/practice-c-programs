#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
int main()
{
  int stat;
  int id1,id2;
  id1 = fork();
  if (id1 == 0)
  {
    printf("Child-1\n");
    exit(5);
  }
  id2 = fork();
  if (id2 == 0)
  {
    printf("Child-2\n",id2);
    exit(10);
  }
  id2 = waitpid(id2,&stat,0);
  printf("PID = %d\nExitcode = %d\n",id2,stat);
  id1 = waitpid(id1,&stat,0);
  printf("PID = %d\nExitcode = %d\n",id1,stat);
}
