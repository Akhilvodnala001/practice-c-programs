#include <stdio.h>
#include <string.h>
void createfile()
{
  char filename[50];
  char data[1000];
  printf("Enter file-name with extension: ");
  scanf("%s",filename);
  getchar();
  printf("Enter data: ");
  fgets(data,sizeof(data),stdin);
  data[strcspn(data,"\n")] = '\0';
  FILE *fp = NULL;
  fp = fopen(filename,"w");
  if (fp == NULL)
  {
    printf("Error Opening file!\n");
    return;
  }
  fputs(data,fp);
  fclose(fp);
}
void readfile()
{
  char filename[50];
  printf("Enter filename with extension: ");
  scanf("%s",filename);
  FILE *fp = NULL;
  fp = fopen(filename,"r");
  if (fp == NULL)
  {
    printf("ERROR OPENING FILE!!\n");
    return;
  }
  char ch;
  while(!feof(fp))
  {
    ch = fgetc(fp);
    if ((ch>=32 && ch<=126)||ch == ' '||ch=='\n')
    {
      printf("%c",ch);
    }
  }
  printf("\n");
  fclose(fp);
  return;
}
void updatefile()
{
  char filename[50];
  printf("Enter the file-name: ");
  scanf("%s",filename);
  getchar();
  FILE *fp = NULL;
  fp = fopen(filename,"a");
  if (fp == NULL)
  {
    printf("Error opening file!\n");
    return;
  }
  char data[1000];
  printf("Enter data: ");
  fgets(data,sizeof(data),stdin);
  fputs(data,fp);
  fclose(fp);
  printf("UPDATION SUCCESSFULL!!\n");
}
void deletefile()
{
  char filename[50];
  printf("Enter file Name: ");
  scanf("%s",filename);
  remove(filename);
  printf("DELETION SUCCESSFULL!\n");
  return;
}
int main()
{
  int choice;
  do
  {
    printf("1. Create NewFile\n");
    printf("2. Read Existing File\n");
    printf("3. Update File\n");
    printf("4. Delete File!\n");
    printf("5. EXIT\n");
    printf("Enter your choice: \n");
    scanf("%d",&choice);
    getchar();
    switch(choice)
    {
      case 1: createfile();
              break;
      case 2: readfile();
              break;
      case 3: updatefile();
              break;
      case 4: deletefile();
              break;
      case 5: return 0;
              break;
      default: printf("Invalid input!\n");
               break;
    }
  }while(choice);

}
