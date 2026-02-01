#include <stdio.h>
#include <string.h>
int main()
{
  char filename[30];
  char buffer[30];
  int linenum;
  int currline = 1;
  printf("Enter file name: ");
  scanf("%s",filename);
  printf("Enter line number to be deleted: ");
  scanf("%d",&linenum);
  FILE *fp = fopen(filename,"r");
  if (fp == NULL)
  {
    printf("Error Opening file!\n");
    return 0;
  }
  FILE *fptemp = NULL;
  fptemp = fopen("temp.txt","w");
  if (fptemp == NULL)
  {
    printf("Error opening temp file!\n");
    return 0;
  }
  while(fgets(buffer,sizeof(buffer),fp) != NULL)
  {
    if (linenum != currline)
    {
      fputs(buffer,fptemp);
    }
    currline++;
  }
  fclose(fp);
  fclose(fptemp);
  remove(filename);
  rename("temp.txt",filename);
  return 1;


}
