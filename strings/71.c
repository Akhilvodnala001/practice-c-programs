#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
char *word,wd[30];
char *words[100];
int i,wordcount=0;

printf("Enter the word: ");
fgets(wd,sizeof(wd),stdin);
wd[strcspn(wd,"\n")]='\0';

word = strtok(str," ");
while (word!=NULL)
{
  words[wordcount++]=word;
  word = strtok(NULL," ");
}
printf("The occurrences of %s is at position ",wd);
for (i=0;i<wordcount;i++)
{
  if (strcmp(words[i],wd)==0)
  {
    printf("%d ",i+1);
  }
}

}
