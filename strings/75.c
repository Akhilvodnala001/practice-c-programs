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
int i,j,wordcount=0,k=0;
word = strtok(str," ");
while (word!=NULL)
{
  if (strcmp(word,wd)!=0)
  {
    words[wordcount++]=word;
  }
  word = strtok(NULL," ");
}
printf("The modified string is ");
for (i=0;i<wordcount;i++)
{
  printf("%s ",words[i]);
}

}
