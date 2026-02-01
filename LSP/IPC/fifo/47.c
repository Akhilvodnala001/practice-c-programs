#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
pthread_mutex_t lock;
void *server(void *arg)
{
  int srvfd = open("srvfifo",O_RDONLY);
  if (srvfd<0)
  {
    if (mkfifo("srvfifo",0640)<0)
    {
      perror("mkfifo");
      exit(1);
    }
    else
    {
      srvfd = open("srvfifo",O_RDONLY);
    }
  }
  char str[1000];
  int ret = read(srvfd,str,1000);
  str[ret] = '\0';
  printf("Request from client: %s\n",str);
  close(srvfd);
  for (int i=0;i<strlen(str);i++)
  {
    if (str[i]>=97 && str[i]<=122)
    {
      str[i] = str[i]-32;
    } 
    else if(str[i]>=65 && str[i]<=90)
    {
      str[i] = str[i]+32;
    }
  }
  int clifd = open("clififo",O_WRONLY);
  if (clifd<0)
  {
    if(mkfifo("clififo",0640)<0)
    {
      perror("mkfifo");
      exit(0);
    }
    else
    {
      clifd = open("clififo",O_WRONLY);
    }
  }
  if (write(clifd,str,strlen(str))<0)
  {
    perror("write");
    exit(1);
  }   
  
}
void *client(void *arg)
{
  int srvfd = open("srvfifo",O_WRONLY);
  if (srvfd<0)
  {
    perror("open");
    exit(1);
  } 
  char str[1000] = "Hello";
  printf("Enter request for client: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  if (write(srvfd,str,strlen(str))<0)
  {
    perror("write");
    exit(1);
  }
  int clifd = open("clififo",O_RDONLY);
  if (clifd<0)
  {
    perror("open");
    exit(1);
  }
  int ret = read(clifd,str,1000);
  str[ret] = '\0';
  printf("Response from Server: %s\n",str);
} 
int main()
{
  while(1)
  {
    pthread_t ti1,ti2;
    pthread_create(&ti1,NULL,server,NULL);
    sleep(1);
    pthread_create(&ti2,NULL,client,NULL);
    pthread_join(ti1,NULL);
    pthread_join(ti2,NULL);
  }
}
