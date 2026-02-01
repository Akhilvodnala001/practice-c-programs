#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char command[20];
  char *args[10];
  int stat;
  int id;
  while(1)
  {
      printf("myshell>");
      fgets(command,sizeof(command),stdin);
      command[strcspn(command,"\n")] = '\0';
      if (strcmp(command,"ver") == 0)
      {
        printf("Simple shell version 2.0 %s %s\n",__DATE__,__TIME__);
        continue;
      } 
      if (strcmp(command,"quit") == 0)
      {
        exit(0);
      }
      char first[10];
      char last[10];
      first[0] = last[0] = '\0';
      int i = 0;
      int j = 0;
      while (command[i]!=' ' && command[i]!='\0')
      {
        first[i] = command[i];
        i++;
      }
      first[i] = '\0';
      if (command[i]!='\0')
      {
        int k = 0;
        i++;
        while (command[i]!='\0')
        {
          last[k++] = command[i++];
        }
        last[k] = '\0';
        args[0] = first;
        args[1] = last;
        args[2] = NULL;
      }
      else
      {
        args[0] = first;
        args[1] = NULL;
      }
      id = fork();
      if (id == 0)
      {
        execvp(first,args);
        perror("execvp failed!\n");
        exit(5);
      }
      wait(&stat);
    }
  
}
