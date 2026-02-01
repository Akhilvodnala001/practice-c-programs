#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
char smallest[30];
char largest[30];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")] = '\0';
char *word;
word = strtok(str," ");

while ((word = strtok(NULL," ")) != NULL)
{
  if (strlen(smallest) > strlen(word))
  {
    strcpy(smallest,word);
  }
  if (strlen(largest) < strlen(word))
  {
    strcpy(largest,word);
  }
}
printf("The smallest word in the given sentence is %s\n",smallest);
printf("The largest word in the given sentence is %s",largest);



}
