#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
void mysighandler(int sig)
{
  printf("SIGTRAP RECEIVED!\n");
}
int main()
{
  signal(SIGTRAP,mysighandler);
  printf("Program is about to trigger SIGTRAP!\n");
  raise(SIGTRAP);
  printf("Continue is handling!\n");
}
