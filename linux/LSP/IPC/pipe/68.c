#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
int main()
{
  while(1)
  {
    int fds_ptc[2];
    int fds_ctp[2];
    if (pipe(fds_ptc)<0)
    {
      perror("pipe");
      return 1;
    }
    if (pipe(fds_ctp)<0)
    {
        perror("pipe");
        return 1;
    }
    pid_t pid = fork();
    if (pid == 0)
    {
      close(fds_ptc[1]);
      close(fds_ctp[0]);
      char str1[100];
      int ret = read(fds_ptc[0],str1,100);
      if (ret<0)
      {
        perror("read");
        return 1;
      }
      str1[ret] = '\0';
      printf("Message from parent: %s\n",str1);
      char str2[100];
      printf("Enter reponse for parent: ");
      fgets(str2,sizeof(str2),stdin);
      str2[strcspn(str2,"\n")] = '\0';
      ret = write(fds_ctp[1],str2,strlen(str2));
      if (ret<0)
      {
        perror("write");
        return 1;
      }
      close(fds_ptc[0]);
      close(fds_ctp[1]);
      exit(0);
    }
    char str1[1000];
    close(fds_ptc[0]);
    close(fds_ctp[1]);
    printf("Enter message for child: ");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")] = '\0';
    write(fds_ptc[1],str1,strlen(str1));
    int stat;
    wait(&stat);
    int ret = read(fds_ctp[0],str1,1000);
    str1[ret] = '\0';
    printf("Message from child: %s\n",str1);
    close(fds_ptc[1]);
    close(fds_ctp[0]);
  }
}
