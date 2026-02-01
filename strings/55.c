#include <stdio.h>
#include <string.h>
int main()
{
char str[30];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';

char ch;
printf("Enter the character: ");
scanf("%c",&ch);
int i,count;

for (i=0;str[i]!='\0';i++)
{
  if (str[i] == ch)
  {
    count = i;
    break;
  }
}
printf("The first occurrence of the character is at the index %d",count);


}
