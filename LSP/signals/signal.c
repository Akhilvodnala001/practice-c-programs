#include <stdio.h>
#include <signal.h>
#include <unistd.h>
void sighandler(int sig)
{
  printf("Signalhandler: %d\n",sig);
}
int main()
{
  signal(SIGINT,sighandler);
  while(1)
  {
    printf("Sleep\n");
    sleep(5);
  }
}
