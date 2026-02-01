#include <stdio.h>
#include <unistd.h>
#include <signal.h>
void sighandler(int sig)
{
  printf("Signal = %d\n",sig);
  sleep(5);
  printf("SignalhandlerTerminated!\n");
}
int main()
{
  signal(SIGINT,sighandler);
  while(1)
  {
  }
}
