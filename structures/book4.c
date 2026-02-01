#include <stdio.h>
#define n 5
struct emp
{
  char name[10];
  int age;
  int basic;
};
void input(struct emp data[n])
{
  int i;
  for (i=0;i<n;i++)
  {
    printf("EMPLOYEE-%d: \n",i+1);
    printf("Name: ");
    scanf("%s",data[i].name);
    printf("Age: ");
    scanf("%d",&(data+i)->age);
    printf("basic salary: ");
    scanf("%d",&(data+i)->basic);
  }
}
int main()
{
  struct emp data[n];
  input(data);
  int arr[n];
  for (int i=0;i<n;i++)
  {
    arr[i] = ((data+i)->basic) + ((((data+i)->basic)/100)*10) + ((((data+i)->basic)/100)*5);
  }
  for (int i = 0;i<n;i++)
  {
    for (int j=i+1;j<n;j++)
    {
      if (arr[i] < arr[j])
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        struct emp stemp = data[i];
        data[i] = data[j];
        data[j] = stemp;
      }
    }
  }
  for (int i=0;i<n;i++)
  {
    printf("EMPLOYEE-%d: \n",i+1);
    printf("Name: %s\n",data[i].name);
    printf("Age: %d\n",(data+i)->age);
    printf("basic salary: %d\n",(data+i)->basic);
    printf("Total Salary: %d\n",arr[i]);
  }
  
}
