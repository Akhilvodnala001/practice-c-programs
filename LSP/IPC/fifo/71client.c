#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <string.h>
#include <sys/stat.h>
int main()
{
  while (1)
  {
    int srvfd = open("srvfifo",O_RDWR);
    if (srvfd<0)
    {
      perror("srvfd");
    }
    char str[1000];
    while(1)
    {
      printf("Enter Request for server: ");
      fgets(str,sizeof(str),stdin);
      str[strcspn(str,"\n")] = '\0';
      if (write(srvfd,str,strlen(str))<0)
      {
        perror("write");
        return 1;
      }
      printf("Request sent to server!!\n");
    }
  }
}
