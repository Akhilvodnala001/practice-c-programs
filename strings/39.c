#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
int i,len;
char *word;
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")] = '\0';
len = strlen(str);
word = strtok(str," ");
char longest[100] = "so";
char copy[30] = "so";
strcpy(copy,longest);
int palindrome = 1;
for (i=0;i<strlen(word)/2;i++)
{
  if (word[i] != word[strlen(word)-i-1])
  {
    palindrome = 0;
    break;
  }
}
if (palindrome == 1)
{
  strcpy(longest,word);
}

while ((word = strtok(NULL," ")) != NULL)
{
  palindrome = 1;
  for (i=0;i<strlen(word)/2;i++)
  {
    if (word[i] != word[strlen(word)-i-1])
    {
      palindrome = 0;
      break;
    }
  }
  if (palindrome == 1)
  {
    if (strlen(longest)<strlen(word))
    {
      strcpy(longest,word);
    }
  }
}
int same;
for (i=0;i<strlen(longest);i++)
{
  same = 0;
  if (longest[i]==copy[i])
  {
     same = 1;
  }
}

if (same == 1)
{
  printf("No palindrome found!\n");
}
else
{
  printf("The longest palindrome sub-string in the main string is %s\n",longest);
}

}
