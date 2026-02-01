#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>
int main()
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
  if (pid<0)
  {
    perror("fork");
    return 1;
  }
  if (pid == 0)
  {
    close(fds_ptc[1]);
    close(fds_ctp[0]);
    char str[1000];
    int r = read(fds_ptc[0],str,100);
    str[r] = '\0';
    printf("Message from parent: %s\n",str);
    printf("processing!!!");
    for (int i=0;i<strlen(str);i++)
    {
      if (str[i]>=97 && str[i]<=122)
      {
        str[i] = str[i] - 32;
      }
    }
    r = write(fds_ctp[1],str,strlen(str));
    exit(0);
  }
  close(fds_ptc[0]);
  close(fds_ctp[1]);
  char buf[1000];
  printf("Enter message for child: ");
  fgets(buf,sizeof(buf),stdin);
  buf[strcspn(buf,"\n")] = '\0';
  int r = write(fds_ptc[1],buf,strlen(buf));
  if (r<0)
  {
    perror("write");
    return 1;
  }
  int stat;
  wait(&stat);
  r = read(fds_ctp[0],buf,1000);
  if (r<0)
  {
    perror("read");
    return 1;
  }
  buf[r] = '\0';
  printf("Response from child: %s\n",buf);
}
