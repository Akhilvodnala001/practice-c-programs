#include <stdio.h>
int main()
{
  int a = 10;
  char b = 'c';
  char str[100] = "Akhil";
  FILE *fp;
  fp = fopen("/home/Akhil/practice/files/sample.txt","w");
  if (fp == NULL)
  {
    printf("Error opening file!\n");
    return 0;
  }
  else
  {
    fputc(b,fp);
    fputs(str,fp);
    fprintf(fp,"%d %c %s",a,b,str);
    fclose(fp);
  }
  fp = fopen("/home/Akhil/practice/files/sample.txt","r");
  if (fp == NULL)
  {
    printf("Error opening file!\n");
    return 0;
  }
  else
  {
    /*char ch;
    while (!feof(fp))
    {
      ch = fgetc(fp);
      printf("%c",ch);
    }
    fclose(fp);*/
    char str[100];
    /*fgets(str,5,fp);
    printf("%s",str);
    fclose(fp);*/
    while (!feof(fp))
    {
      fgets(str,10,fp);
      printf("%s",str);
    }
    fclose(fp);
  }
  
}
