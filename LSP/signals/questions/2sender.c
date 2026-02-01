#include <stdio.h>
#include <unistd.h>
#include <signal.h>
int main()
{
  while(1)
  {
    kill(3049,SIGINT);
    printf("Signal sent!\nSleep\n");
    sleep(5);
  }
}
