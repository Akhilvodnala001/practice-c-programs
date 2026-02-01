#include <stdio.h>
int main()
{
  FILE *fp = NULL;
  char str1[10] = "Akhil";
  fp = fopen("/home/Akhil/practice/files/sample.txt","w");
  if (fp == NULL)
  {
    printf("Error opening file!");
    return 0;
  }
  else
  {
    fputs(str1,fp);
  }
  fclose(fp);
  char str2[10] = "\nVodnala";
  fp = fopen("/home/Akhil/practice/files/sample.txt","a");
  if (fp == NULL)
  {
    printf("Error opening file for appending!\n");
  }
  else
  {
    fputs(str2,fp);
    fclose(fp);
  }
}
