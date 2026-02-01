#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  pid_t pid;
  int i,j,stat;
  char first[10];
  char last[10];
  char str[100];
  char *args[4];
  while(1)
  {
    printf("Shell> ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';
    if ((strcmp("q",str) == 0) || (strcmp("quit",str) == 0))
    {
      return 0;
    }
    i = 0;
    while (str[i]!=' ' && str[i]!='\0')
    {
      first[i] = str[i];
      i++;
    }
    first[i] = '\0';
    if (str[i]!='\0')
    {
      i++;
      j = 0;
      while (str[i]!=' ' && str[i]!='\0')
      {
        last[j++] = str[i++];
      }
      args[0] = first;
      args[1] = last;
      args[2] = '\0';
    }
    else
    {
      args[0] = first;
      args[1] = '\0';
    }
    pid = fork();
    if (pid == 0)
    {
      execvp(first,args);
      perror("execvp");
      exit(0);
    }
    wait(&stat);
  }
}
