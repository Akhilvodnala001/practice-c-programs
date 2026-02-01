#include <stdio.h>
int main()
{
  char oldname[100];
  char newname[100];
  printf("Enter the file name: ");
  scanf("%s",oldname);
  printf("Enter the newname of that file: ");
  scanf("%s",newname);
  if (rename(oldname,newname) == 0)
  {
    printf("Successfully Renamed the file!\n");
  } 
  else
  {
    printf("Rename Unsuccessfull!\n");
  }
  FILE *fp = NULL;
  fp = fopen(newname,"r");
  char ch;
  while((ch = fgetc(fp)) != EOF)
  {
    printf("%c",ch); 
  }
  fclose(fp);
} 
