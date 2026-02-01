#include <stdio.h>
#include <pthread.h>
void *fibonaccifun(void *arg)
{
  int a = 0;
  int b = 1;
  int c;
  printf("Fibbonacci series(first 10 numbers): %d %d ",a,b);
  for (int i=0;i<8;i++)
  {
    c = a + b;
    printf("%d ",c);
    a = b;
    b = c;
  }
  printf("\n");
  return 0;
}
int main()
{
  pthread_t ti;
  pthread_create(&ti,NULL,fibonaccifun,NULL);
  pthread_join(ti,NULL);
}
