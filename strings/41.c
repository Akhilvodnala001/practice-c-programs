#include <stdio.h>
#include <string.h>
int main()
{
char str1[100];
char str2[100];
char *word1;
char *word2;
printf("Enter the string-1: ");
fgets(str1,sizeof(str1),stdin);
printf("Enter the string-2: ");
fgets(str2,sizeof(str2),stdin);
str1[strcspn(str1,"\n")]='\0';
str2[strcspn(str2,"\n")]='\0';
word1 = strtok(str1," ");
char longest[100] = "";
while (word1!=NULL)
{
  char temp[100];
  strcpy(temp,str2);
  word2 = strtok(temp," ");
  while (word2!=NULL)
  {
    if (strcmp(word1,word2) == 0)
    {
      if (strlen(word1) > strlen(longest))
      {
        strcpy(longest,word1);
      }
    }
    word2 = strtok(NULL," ");
  }
  word1 = strtok(NULL," "); 
}

if (strlen(longest)>0)
{
  printf("The longest common subsequence in the string-1 and string-2 is %s",longest);
}
else
{
  printf("No common subsequence found...");
}

}
