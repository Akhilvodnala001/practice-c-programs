#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
char *word;
char *words[30];
int i,wordcount=0,position,index;
char wr[30];
printf("Enter the word to be searched: ");
fgets(wr,sizeof(wr),stdin);
wr[strcspn(wr,"\n")]='\0';

word = strtok(str," ");
while (word!=NULL)
{
  words[wordcount] = word;
  wordcount++;
  word = strtok(NULL," ");
}
for (i=0;i<wordcount;i++)
{
  if (strcmp(words[i],wr)==0)
  {
    index=i;
  }
}
printf("The last occurrence of %s is at the position %d",wr,index+1);
}
