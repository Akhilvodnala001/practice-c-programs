#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  printf("Enter the string: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  
  char wordsearch[30];
  printf("Enter the word to be searched: ");
  scanf("%s",&wordsearch);
  
  int wordcount = 0;
  char *word = strtok(str," ");
  while (word!=NULL)
  {
    if (strcmp(word,wordsearch)==0)
    {
      wordcount++;
    }
    word = strtok(NULL," ");
  }
  printf("No.of times \"%s\" occurred in the string is %d",wordsearch,wordcount);
}
