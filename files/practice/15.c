#include <stdio.h>
#include <string.h>

int main()
{
  char search[20];
  printf("Enter the string: ");
  scanf("%s",search);
  FILE *fp = NULL;
  fp = fopen("file2.txt","r");
  if (fp == NULL)
  {
    printf("Error Opening file!\n");
    return 0;
  }
  int linecnt = 0;
  char line[100];
  while (fgets(line,sizeof(line),fp))
  {
    linecnt++;
    while (strstr(line,search)!=NULL)
    {
      printf("Line no: %d\n",linecnt);
      break;
    }
  }
  fclose(fp);
  
  

}
