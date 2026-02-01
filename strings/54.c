#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  char *words[100];
  int i,count = 0;
  
  printf("Enter the string: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  char *word;
  word = strtok(str," ");
  while (word!=NULL)
  {
    words[count++] = word;
    word = strtok(NULL," ");
  }
  for (i=count-1;i>=0;i--)
  {
    printf("%s ",words[i]);
  }
}
