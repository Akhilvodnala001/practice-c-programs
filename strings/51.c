#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")] = '\0';
char *word;
word = strtok(str," ");
int words = 1;
while ((word=strtok(NULL," "))!=NULL)
{
  words++;
}
printf("No.of words = %d\n",words);

}
