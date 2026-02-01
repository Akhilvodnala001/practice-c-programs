#include <stdio.h>
int main()
{
  FILE *fp = NULL;
  fp = fopen("/home/Akhil/practice/files/practice/file1.txt","w+");
  if (fp == NULL)
  {
    printf("Error opening Source file!\n");
    return 0;
  }
  fputs("Akhil sai\n",fp);
  fputs("Vodnala\n",fp);
  rewind(fp);
  FILE *fptr = NULL;
  fptr = fopen("/home/Akhil/practice/files/practice/file2.txt","w+");
  if (fptr == NULL)
  {
    printf("Error opening teh destination file!\n");
    return 0;
  }
  char ch;
  while (!feof(fp))
  {
    ch = fgetc(fp);
    fputc(ch,fptr);
  }
  fclose(fp);
  fclose(fptr);
}
