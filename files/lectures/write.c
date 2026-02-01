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
    fputc('\n',fp);
    fputs(str,fp);
    fputc('\n',fp);
    fprintf(fp,"%d %c %s\n",a,b,str);
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
    char str1[100];
    /*fgets(str,5,fp);
    printf("%s",str);
    fclose(fp);*/
    /*while (!feof(fp))
    {
      fgets(str,10,fp);
      printf("%s",str);
    }*/
    //fclose(fp);
    int k;
    char s;
    fscanf(fp,"%d %s %c",&k,str1,&s);
    printf("%c %s %d",s,str1,k);
  }
  
}
