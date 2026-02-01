#include <stdio.h>
#include <signal.h>
#include <unistd.h>
void mysighandler(int sig)
{
  printf("My signal = %d\n",sig);
  sleep(5);
}
int main()
{
  struct sigaction act;
  act.sa_handler = mysighandler;
  act.sa_flags = 0;
  sigemptyset(&act.sa_mask);
  sigaddset(&act.sa_mask,SIGINT);
  sigaction(SIGINT,&act,NULL);
  sigprocmask(SIG_BLOCK,&act.sa_mask,NULL);
  getchar();
  sigprocmask(SIG_UNBLOCK,&act.sa_mask,NULL);
}
