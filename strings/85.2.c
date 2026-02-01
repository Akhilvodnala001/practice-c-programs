#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
char str[100];
printf("Enter the string (Only alphabets): ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
int i,j;
for (i=0;str[i]!='\0';i++)
{
  for (j=i+1;str[j]!='\0';j++)
  {
    if (tolower(str[i])>tolower(str[j]))
    {
      char temp = str[i];
      str[i] = str[j];
      str[j] = temp;
    }
  }
}
printf("The modified string is %s",str);

}
