#include <stdio.h>
int main()
{
  FILE *fp = NULL;
  fp = fopen("file3.txt","r");
  if (fp == NULL)
  {
    printf("File doesn't exist!\n");
  }
  else
  {
    printf("File Exists!\n");
    fclose(fp);
  } 

}
