#include <stdio.h>
#include <string.h>
int main()
{
char str[500];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';

char *word;
char wd[100];
int i,wordcount=0,count=0;
printf("Enter the word: ");
fgets(wd,sizeof(wd),stdin);
wd[strcspn(wd,"\n")]='\0';
word = strtok(str," ");
while (word!=NULL)
{
  if (strcmp(word,wd)==0)
  {
    count++;
  }
  word = strtok(NULL," ");
}
printf("%s occurred %d times in the string...",wd,count);
}
