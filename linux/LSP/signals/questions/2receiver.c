#include <stdio.h>
#include <unistd.h>
#include <signal.h>
void mysighandler(int sig)
{
  printf("signal from another process = %d\n",sig);
  sleep(5);
}
int main()
{
  signal(SIGINT,mysighandler);
  while(1)
  {
    printf("sleep!\n");
    sleep(5);
  }
}
