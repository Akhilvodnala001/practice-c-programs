#include <stdio.h>
#include <signal.h>
#include <unistd.h>
void mysighandler(int sig)
{
  printf("Signal = %d\n",sig);
  sleep(30);
}
int main()
{
  struct sigaction act;
  act.sa_handler = mysighandler;
  act.sa_flags = 0;
  sigemptyset(&act.sa_mask);
  sigaction(SIGINT,&act,NULL);
  while(1)
  {
    printf("Sleep\n");
    sleep(10);
  }
}
