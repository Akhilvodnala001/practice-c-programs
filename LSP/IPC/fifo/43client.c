#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
int main()
{
  while(1)
  {
    int srvfd = open("srvfifo",O_WRONLY);
    if (srvfd<0)
    {
      perror("open");
      return 1;
    }
    char str[1000];
    printf("Enter request to server: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';
    if ((write(srvfd,str,strlen(str)))<0)
    {
      perror("write");
      return 1;
    }
    close(srvfd);
    int clifd = open("clififo",O_RDONLY);
    if (clifd<0)
    {
      if ((mkfifo("clififo",0640))<0)
      {
        perror("mkfifo");
        return 1;
      }
      else
      {
        clifd = open("clififo",O_RDONLY);
      }
    }
    int ret = read(clifd,str,1000);
    str[ret] = '\0';
    printf("Response from Server: %s\n",str);
    close(clifd);
  }
}
