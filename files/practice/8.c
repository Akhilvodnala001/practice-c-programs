#include <stdio.h>
int main()
{
  FILE *fp = NULL;
  fp = fopen("file1.txt","r");
  if (fp == NULL)
  {
    printf("Error Opening file!\n");
    return 0;
  }
  char line[100];
  int linenum = 1;
  while (fgets(line,sizeof(line),fp))
  {
    printf("%d.%s",linenum,line);
    linenum++;
  }
  fclose(fp);

}
