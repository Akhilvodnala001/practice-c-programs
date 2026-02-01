#include <stdio.h>
#include <string.h>
#define N 5
struct emp
{
  char name[10];
  int ID;
  long int salary;
};
int i = 0;
void addemp()
{
  struct emp s[N];
  char str[20];
  printf("Enter name: ");
  while (getchar()!='\n');
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")] = '\0';
  strcpy(s[i].name,str);
  printf("Enter ID: ");
  scanf("%d",&s[i].ID);
  printf("Enter Salary: ");
  scanf("%ld",&s[i].salary);
  FILE *fp = NULL;
  fp = fopen("employee.bin","ab");
  if (fp == NULL)
  {
    printf("Error Opening file!\n");
    return;
  }
  i++;
  fwrite(s,sizeof(struct emp),i,fp);
  fclose(fp);
}
void display()
{
  struct emp s[N];
  FILE *fp = fopen("employee.bin","rb");
  if (fp == NULL)
  {
    printf("Error Opening file!\n");
    return;
  }
  fread(s,sizeof(struct emp),i,fp);
  int j;
  for (j=0;j<N;j++)
  {
    printf("Employee-1: ");
    printf("Name: %s\n",s[j].name);
    printf("ID: %d\n",s[j].ID);
    printf("Salary: %ld\n\n",s[j].salary);
  }
  fclose(fp);
} 
int main()
{
  int i;
  int ch;
  ch = 1;
  while(ch)
  {
    printf("1.ADD EMPLOYEE\n");
    printf("2.DELETE EMPLOYEE\n");
    printf("3.DISPLAY an EMPLOYEE\n");
    printf("4.DISPLAY ALL\n");
    printf("0 to EXIT!\n");
    printf("CHOOSE FROM THE ABOVE: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: addemp();
              break;
      /*case 2: delemp();
              break;
      case 3: Disemp();
              break;*/
      case 4: display();
              break;
      case 0: break;
      default: 
              printf("Invalid input!\n");
              break;
    };
  }
}
