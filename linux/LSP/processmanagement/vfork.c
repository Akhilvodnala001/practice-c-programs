#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
int x = 10;
/*int main()
{
  int stat,id;
  id = fork();
  if (id == 0)
  {
    x = 20; 
    printf("Child process!\n");
    exit(8);
  }
  id = wait(&stat);
  printf("%d\n", WEXITSTATUS(stat));
  printf("%d\n",x); //10
}*/

int main()
{
  int stat,id;
  id = vfork();
  if (id == 0)
  {
    x = 20; 
    printf("Child process!\n");
    exit(8);
  }
  id = wait(&stat);
  printf("%d\n", WEXITSTATUS(stat));
  printf("%d\n",x); //20

}
