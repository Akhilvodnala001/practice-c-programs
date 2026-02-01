#include <stdio.h>
int main()
{
  FILE *fp1 = NULL;
  FILE *fp2 = NULL;
  fp1 = fopen("/home/Akhil/practice/files/sample.txt","r");
  fp2 = fopen("/home/Akhil/practice/files/destination.txt","w+");
  if (fp1 == NULL || fp2 == NULL)
  {
    printf("Error opening files!\n");
    return 0;
  }
  char ch;
  while(!feof(fp1))
  {
    ch = fgetc(fp1);
    fputc(ch,fp2);
  }
  rewind(fp2);
  char str[10];
  while (!feof(fp2))
  {
    fgets(str,3,fp2);
    printf("%s",str);
  }
  fclose(fp1);
  fclose(fp2);
}
