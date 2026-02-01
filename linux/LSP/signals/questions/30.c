#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#define MY_SIG (SIGRTMIN + 1)
void mysighandler(int sig,siginfo_t *info, void *context)
{
  printf("Received signal = %d\n",sig);
  printf("Received data = %d\n",info->si_value.sival_int);
}
int main()
{
  pid_t pid = fork();
  if (pid<0)
  {
    printf("Error creating child!\n");
    exit(1);
  }
  else if(pid == 0)
  {
    struct sigaction act;
    act.sa_flags = SA_SIGINFO;
    act.sa_sigaction = mysighandler;
    sigaction(MY_SIG,&act,NULL);
    printf("Waiting for real-time signals!\n");
    while(1)
    {
      pause();
    }
  }
  else
  {
    union sigval value;
    value.sival_int = 100;
    printf("Sending signal and data to child !");
    sleep(1);
    sigqueue(pid,MY_SIG,value);
    sleep(2);
  }
}
