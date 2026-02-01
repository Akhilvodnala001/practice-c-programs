#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>
int main()
{
  int fds_ch1[2];
  int fds_ch2[2];
  pipe(fds_ch1);
  pipe(fds_ch2);
  pid_t pid1 = fork();
  if (pid1<0)
  {
    perror("fork");
    return 1;
  }
  if (pid1 == 0)
  {
    printf("Child process-1\n");
    close(fds_ch1[0]);
    char str[100];
    printf("Enter message for parent: ");
    fgets(str,sizeof(str),stdin);
    write(fds_ch1[1],str,strlen(str));
    close(fds_ch1[1]);
    exit(0);
  }
  char str1[100];
  int ret = read(fds_ch1[0],str1,100);
  if (ret<0)
  {
    perror("read");
    return 1;
  }
  str1[ret] = '\0';
  printf("Message from child-1: %s\n",str1);
  int stat;
  wait(&stat);
  pid_t pid2 = fork();
  if (pid2 < 0)
  {
    perror("fork");
    return 1;
  }
  if (pid2 == 0)
  {
    printf("Child process - 2\n");
    close(fds_ch2[0]);
    char str[100];
    printf("Enter message for parent: ");
    fgets(str,sizeof(str),stdin);
    write(fds_ch2[1],str,strlen(str));
    close(fds_ch2[1]);
    exit(0);
  }
  close(fds_ch2[1]);
  wait(&stat);
  char str2[100];
  ret = read(fds_ch2[0],str2,sizeof(str2));
  if (ret<0)
  {
    perror("read");
    return 1;
  }
  str2[ret] = '\0';
  printf("Message from child-2: %s\n",str2);
  close(fds_ch2[0]);
  close(fds_ch1[1]);
  
  
  
} 
