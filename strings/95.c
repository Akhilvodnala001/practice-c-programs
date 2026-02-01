#include <stdio.h>
#include <string.h>
int main()
{
char str1[100];
printf("Enter the string-1: ");
fgets(str1,sizeof(str1),stdin);
str1[strcspn(str1,"\n")]='\0';

char str2[100];
printf("Enter the string-2: ");
fgets(str2,sizeof(str2),stdin);
str2[strcspn(str2,"\n")]='\0';

char *word1;
char *word2;
char *words1[100];
char *words2[100];
int count1=0,count2=0;
word1 = strtok(str1," ");
while (word1!=NULL)
{
  words1[count1++] = word1;
  word1 = strtok(NULL," ");
}

word2 = strtok(str2," ");
while (word2!=NULL)
{
  words2[count2++] = word2;
  word2 = strtok(NULL," ");
}

int i,j;
printf("String-1 after removing common words: ");
for (i=0;i<count1;i++)
{
  int common = 0;
  for (j=0;j<count2;j++)
  {
    if (strcmp(words1[i], words2[j]) == 0)
    {
      common = 1;
      break;
    }
  } 
  if (!common)
  {
    printf("%s ",words1[i]);
  }
}

printf("\nString-2 after removing common words: ");
for (i=0;i<count2;i++)
{
  int common = 0;
  for (j=0;j<count1;j++)
  {
    if (strcmp(words2[i], words1[j]) == 0)
    {
      common = 1;
      break;
    }
  } 
  if (!common)
  {
    printf("%s ",words2[i]);
  }
}
}
