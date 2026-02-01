#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <stdlib.h>
#include <string.h>
void *pthreadfun(void *arg)
{
  char *ptr = (char *)arg;
  int len = strlen(ptr);
  int i;
  for (i=0;i<len/2;i++)
  {
    if (ptr[i] != ptr[len-i-1])
    {
      printf("Not palindrome!\n");
      break;
    }
  }
  if (i == len/2)
  {
    printf("Palindrome!\n");
  }
  
}
int main()
{
  pthread_t ti;
  char str[10];
  scanf("%s",str);
  str[strcspn(str,"\n")] = '\0';
  pthread_create(&ti,NULL,pthreadfun,str);
  pthread_join(ti,NULL);
} 
