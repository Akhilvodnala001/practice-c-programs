#include <stdio.h>
int main()
{
  FILE *fp;
  fp = fopen("/home/Akhil/practice/files/sample.txt","w");
  if (fp == NULL)
  {
    printf("Error opening file!\n");
  }
  else
  {
    fputs("Akhil sai",fp);
    fclose(fp);
  }
  fp = fopen("/home/Akhil/practice/files/sample.txt","r+");
  
  char str[40];
  fputc('Z',fp);
  fputs("Vodnala",fp);
  fclose(fp);
}
