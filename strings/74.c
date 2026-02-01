#include <stdio.h>
#include <string.h>
int main()
{
  char str[500];
  printf("Enter the string: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  char wd[30];
  printf("Enter the word: ");
  fgets(wd,sizeof(wd),stdin);
  wd[strcspn(wd,"\n")]='\0';
  
  char *word;
  char *words[500];
  int index,i,wordcount=0;
  word = strtok(str," ");
  while (word!=NULL)
  {
    words[wordcount++]=word;
    word = strtok(NULL," ");
  }
  for (i=0;i<wordcount;i++)
  {
    if (strcmp(words[i],wd)==0)
    {
      index = i;
    }
  }
  for (i=index;i<wordcount;i++)
  {
    words[i]=words[i+1];
  }
  wordcount--;
  printf("The modified string is ");
  for (i=0;i<wordcount;i++)
  {
    printf("%s ",words[i]);
  }
}
