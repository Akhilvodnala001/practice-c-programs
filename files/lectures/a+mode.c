#include <stdio.h>
int main()
{
  char ch;
  FILE *fp = NULL;
  fp = fopen("/home/Akhil/practice/files/sample.txt","w");
  if (fp == NULL)
  {
    printf("Error opening file!\n");
  }
  else
  {
    fputs("Akhil",fp);
    fclose(fp);
  }
  fp = fopen("/home/Akhil/practice/files/sample.txt","a+");
  if (fp == NULL)
  {
    printf("Error opening for a+ mode!\n");
  }
  else
  {
    fputs(" Vodnala",fp);
    rewind(fp);
    while(!feof(fp))
    {
      ch = fgetc(fp);
      printf("%c",ch);
    }
    fclose(fp);
  }

}
