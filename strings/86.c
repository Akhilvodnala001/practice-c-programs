#include <stdio.h>
#include <string.h>
int main()
{
  char str[500];
  printf("Enter the string: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  int i;
  /*printf("%c",str[0]);
  for (i=0;i<str[i]!='\0';i++)
  {
    if (str[i] == ' ')
    {
      printf("%c",str[i+1]);
    }
  }*/
  char *word;
  word = strtok(str," ");
  while (word!=NULL)
  {
    printf("%c",word[i]);
    word = strtok(NULL," ");
  }
}
