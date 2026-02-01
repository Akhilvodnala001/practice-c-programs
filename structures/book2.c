#include <stdio.h>
#define num 2
struct railway
{
  char name[20];
  int hour;
  int min;
  int AMPM;
};
void input(struct railway  *train)
{
  for (int i=0;i<num;i++)
  {
    printf("Train-%d: \n",i+1);
    printf("Train name: ");
    scanf(" %s",(train+i)->name);
    printf("Enter the train timing(Hours Minutes): ");
    scanf(" %d %d",&(train+i)->hour,&(train+i)->min);
    printf("Enter(0 for AM,1 for PM): ");
    scanf(" %d",&(train+i)->AMPM);
  }
}
void printTrainTiming(struct railway *train)
{
  for (int i=0;i<num;i++)
  {
    printf("%s  ",(train+i)->name);
    if ((train+i)->AMPM == 1 && ((train+i)->hour)<12)
    {
        printf("%d : %d PM\n",train[i].hour+12,train[i].min);
    }
    else if ((train+i)->AMPM == 1 && ((train+i)->hour) == 12)
    {
        printf("%d : %d PM\n",train[i].hour,train[i].min);
    }
    else if ((train+i)->AMPM == 0 && ((train+i)->hour) == 12)
    {
        printf("00 : %d AM\n",train[i].min); 
    }
    else
    {
        printf("%d : %d AM\n",train[i].hour,train[i].min);
    }
  }
}
int main()
{
  struct railway train[num];
  input(train);
  printTrainTiming(train);
}
