#include <stdio.h>
int main()
{
  FILE *fp = NULL;
  fp = fopen("data.txt","a+");
  if (fp == NULL)
  {
    printf("Error Opening file!\n");
    return 0;
  }
  fputs(__DATE__,fp);
  fputc('\n',fp);
  fputs(__TIME__,fp);
  fputc('\n',fp);
  fputc('\n',fp);
  printf("UPDATED!\n");
  fclose(fp);
}
