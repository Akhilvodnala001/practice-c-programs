#include <stdio.h>
#include <string.h>
int main()
{
char str[30];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';

char ch;
int i,count;
printf("Enter the character: ");
scanf("%c",&ch);
for (i=0;str[i]!='\0';i++)
{
  if (str[i]==ch)
  {
    count = i;
  }
}
printf("The last character of the character is at the index %d",count);

}
