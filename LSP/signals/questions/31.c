#include <stdio.h>
#include <signal.h>
#include <unistd.h>
void mysighandler(int sig)
{
  printf("Received signal %d\n",sig);
} 
int main()
{
  signal(SIGINT,mysighandler);
  int i;
  while(1)
  {
    raise(SIGINT);
    i = 0;
    while(i<5)
    {
      sleep(1);
      printf("sleep!\n");
      i++;
    }
  }
} 
