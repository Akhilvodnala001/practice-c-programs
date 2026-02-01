#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#define KEY 199220
#define SRV_MSG_TYPE 1
struct msg
{
  long mtype;
  pid_t pid;
  char text[100];
};
int main()
{
  int msqid = msgget(KEY,0);
  if(msqid<0)
  {
    perror("msqid");
    return 1;
  }
  struct msg req;
  req.mtype = SRV_MSG_TYPE;
  req.pid = getpid();
  printf("Enter the message for server: ");
  scanf("%s",req.text);
  msgsnd(msqid,&req,sizeof(req.pid)+sizeof(req.text),0);
  int ret = msgrcv(msqid,&req,sizeof(req.pid)+sizeof(req.text),getpid(),0);
  if (ret<0)
  {
    printf("Error receiving response from server!!!\n");
    return 1;
  }
  printf("Response from server: %s\n",req.text);
}
