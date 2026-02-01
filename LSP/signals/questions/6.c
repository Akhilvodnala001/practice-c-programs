#include <stdio.h>
#include <unistd.h>
#include <signal.h>
void mysighandler(int sig)
{
  printf("SIGTERM Signal Received!\n");
  printf("Handler expired!\n");
}
int main()
{
  struct sigaction act;
  act.sa_handler = mysighandler;
  act.sa_flags = 0;
  sigemptyset(&act.sa_mask);
  sigaction(SIGTERM,&act,NULL);
  while(1)
  {
    printf("sleep!\n");
    sleep(5);
  }
}
