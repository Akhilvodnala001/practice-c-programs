#include <stdio.h>
#include <unistd.h>
#include <signal.h>
void mysighandler(int sig)
{
  printf("Signal received: %d\n",sig);
  alarm(5);
}
int main()
{
  struct sigaction act;
  act.sa_handler = mysighandler;
  act.sa_flags = 0;
  sigemptyset(&act.sa_mask);
  sigaction(SIGALRM,&act,NULL);
  alarm(5);
  while(1)
  {
    pause();
  }
}
