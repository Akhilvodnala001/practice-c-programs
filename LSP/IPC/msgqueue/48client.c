#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>
#define KEY 199220
#define MSG_SRV_TYPE 1
struct msg
{
  long mtype;
  pid_t pid;
  char str[100];
};
int main()
{
  struct msg Msg;
  int msgid = msgget(KEY,0);
  if (msgid<0)
  {
    perror("msgget");
    return 1;
  }
  while(1)
  {
    printf("Enter message: ");
    fgets(Msg.str,sizeof(Msg.str),stdin);
    Msg.str[strcspn(Msg.str,"\n")]='\0';
    Msg.mtype = MSG_SRV_TYPE;
    Msg.pid = getpid();
    if (msgsnd(msgid,&Msg,sizeof(struct msg),0)<0)
    {
      perror("msgsnd");
      return 1;
    }
    if (msgrcv(msgid,&Msg,sizeof(struct msg),getpid(),0)<0)
    {
      perror("msgrcv");
      return 1;
    }
    printf("Response from server: %s\n",Msg.str);
  }
  

}
