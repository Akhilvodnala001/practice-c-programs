#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
int main()
{
  int srvfd = open("srvfifo",O_WRONLY);
  if (srvfd<0)
  {
    perror("srvfd");
    return 1;
  }
  char str[1000];
  while(1)
  {
    printf("Enter message for the server: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';
    if (write(srvfd,str,strlen(str))<0)
    {
      perror("write");
      return 1;
    }
  }
}
