#include <stdio.h>
#include <signal.h>
#include <unistd.h>
void mysighandler(int sig)
{
  printf("My signal = %d\n",sig);
  sleep(10);
  printf("Done with signal handler!\n");
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
