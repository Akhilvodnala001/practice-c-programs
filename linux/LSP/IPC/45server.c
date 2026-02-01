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
void togglecase(char *str)
{
  for (int i=0;i<strlen(str);i++)
  {
    if (str[i]>=97 && str[i]<=122)
    {
      str[i] = str[i] - 32;
    }
    else if(str[i]>=65 && str[i]<=90)
    {
      str[i] = str[i] + 32;
    }
  }
}
int main()
{
  int msqid = msgget(KEY,IPC_CREAT|0640);
  if (msqid<0)
  {
    perror("msgget!\n");
    return 1;
  }
  struct msg req;
  printf("Waiting for request from the client. . . . . . . . . \n");
  int ret = msgrcv(msqid,&req,sizeof(struct msg),SRV_MSG_TYPE,0);
  if (ret<0)
  {
    perror("msgrcv");
    return 1;
  }
  printf("Message from client: %s\n",req.text);
  togglecase(req.text);
  req.mtype = req.pid;
  ret = msgsnd(msqid,&req,sizeof(req.pid)+sizeof(req.text),0);
  if (ret<0)
  {
    printf("Error sending response to client!!!\n");
    return 1;
  }
  else
  {
    printf("Response sent to the client successfully!!!\n");
    return 0;
  }
}
