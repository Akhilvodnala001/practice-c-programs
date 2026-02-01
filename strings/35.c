#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  char longest[30];
  char *word;
  int i,j,len,len1;
  printf("Enter the string: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")] = '\0';
  len = strlen(str);
  word = strtok(str," ");
  strcpy(longest,word);
  int repeat = 0;
  for (i=0;i<strlen(word);i++)
  {
    for (j=i+1;j<strlen(word);j++)
    {
      if (word[i] == word[j])
      {
        repeat = 1;
        break;
      }
    }
  }
  while ((word = strtok(NULL," ")) != NULL)
  {
    int flag = 0;
    for (i=0;i<strlen(word);i++)
    {
      for (j=i+1;j<strlen(word);j++)
      {
        if (word[i] == word[j])
        {
          flag = 1;
          break;
        }
      }
      if (flag == 1)
      {
        break;
      }
    }
    if (flag == 0)
    {
      if (repeat == 1)
      {
        strcpy(longest,word);
      }
      else
      {
        if (strlen(longest)<strlen(word))
        {
          strcpy(longest,word);
        }
      }
    }
  }
  printf("The longest substring without repeating characters is %s",longest);

}
