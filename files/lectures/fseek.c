#include <stdio.h>
int main()
{
  FILE *fp = NULL;
  fp = fopen("/home/Akhil/practice/files/sample.txt","r");
  if (fp == NULL)
  {
    printf("Error opening file!\n");
  }
  else
  {
    fseek(fp,30,SEEK_SET);
    char ch;
    ch = fgetc(fp);
    printf("%c",ch);
    fseek(fp,-7,SEEK_CUR);
    ch = fgetc(fp);
    printf("\n%c",ch);
    fseek(fp,-5,SEEK_END);
    ch = fgetc(fp);
    printf("\n%c",ch);
    fclose(fp);
  }
}
