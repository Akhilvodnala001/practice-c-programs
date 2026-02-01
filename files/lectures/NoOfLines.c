#include <stdio.h>
int main()
{
  FILE *fp = NULL;
  fp = fopen("/home/Akhil/practice/files/sample.txt","w+");
  if (fp == NULL)
  {
    printf("Error Opening file!\n");
    return 0;
  }
  fputs("Akhil\n",fp);
  fputs("Vodnala",fp);
  int count = 1;
  char ch;
  int charcount = 0;
  rewind(fp);
  while(!feof(fp))
  {
    ch = fgetc(fp);
    if (ch == '\n')
    {
      count++;
    }
    charcount++;
  }
  fclose(fp);
  printf("No.of characters: %d\n",charcount);
  printf("No.of lines: %d\n",count);

}
