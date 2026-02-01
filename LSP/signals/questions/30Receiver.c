#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#define MY_SIG (SIGRTMIN + 1)
void mysighandler(int sig,siginfo_t *info,void *context)
{
  printf("Signal %d received with data %d\n",sig,info->si_value.sival_int);
  sleep(5);
}
int main()
{
  struct sigaction act;
  act.sa_flags = SA_SIGINFO;
  act.sa_sigaction = mysighandler;
  sigaction(MY_SIG,&act,NULL);
  while(1)
  {
    printf("Sleep!\n");
    sleep(5);
  } 
}
