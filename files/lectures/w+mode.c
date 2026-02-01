#include <stdio.h>
int main()
{
  FILE *fp = NULL;
  fp = fopen("/home/Akhil/practice/files/sample.txt","w+");
  if (fp == NULL)
  {
    printf("Error opening file!\n");
  }
  else
  {
    fputs("Akhil",fp);
    rewind(fp);
    char ch;
    while (!feof(fp))
    {
      ch = fgetc(fp);
      printf("%c",ch);
    }
    fclose(fp);
  }

}
