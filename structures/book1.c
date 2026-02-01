#include <stdio.h>
#define num 2
struct details
{
  char name[20];
  int age;
  char adress[50];
};
void input(struct details *s)
{
  printf("Enter the details of students: ");
  for (int i=0;i<num;i++)
  {
    printf("Student-%d:\n",i+1);
    printf("Name: ");
    scanf("%s",(s+i)->name);
    printf("Age: ");
    scanf("%d",&(s+i)->age);
    printf("Adress: ");
    scanf("%s",(s+i)->adress);
  } 
}
int eldest(struct details *s)
{
  int i,elder = s[0].age;
  for (int i=1;i<num;i++)
  {
    if (elder>s[i].age)
    {
      elder = s[i].age; 
    }
  }
  
  for (i=0;i<num;i++)
  {
    if (elder == s[i].age)
    {
      return i;
    }
  }
}
int main()
{
  struct details s[num];
  input(s);
  int k = eldest(s);
  printf("The eldest person among %d is %s",num,s[k].name);
}
