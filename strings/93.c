#include <stdio.h>
#include <string.h>
int main()
{
  char str[500];
  printf("Enter the string: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  
  char replaced[30];
  printf("Enter the word to be replaced ");
  scanf("%s",&replaced);
  
  char repwith[30];
  printf("Enter the word to be replaced with ");
  scanf("%s",&repwith);
  
  char *word;
  char *words[500];
  int wordcount = 0;
  word = strtok(str," ");
  while (word!=NULL)
  {
    if (strcmp(word,replaced) == 0)
    {
      words[wordcount++] = repwith;
    }
    else
    {
      words[wordcount++] = word;
    }
    word = strtok(NULL," ");
  }
  int i;
  for (i=0;i<wordcount;i++)
  {
    printf("%s ",words[i]);
  }
  

}
