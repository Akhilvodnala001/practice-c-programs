#include <stdio.h>
int main()
{
  FILE *fp = NULL;
  fp = fopen("/home/Akhil/practice/files/practice/3.txt","r");
  if (fp == NULL)
  {
    printf("Error Opening File!\n");
    return 0;
  }
  int count = 0;
  char ch;
  while ((ch = fgetc(fp)) != EOF)
  {
    if (ch == ' ' || ch == '\n')
    {
      count++;
    }
  }
  printf("%d",count);
}
