#include <stdio.h>
#include <string.h>
int main()
{
int i=0,k=0;
char str[30];
char copy[30];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
while (str[i] != '\0')
{
  copy[k] = str[i];
  k++;
  i++;
}
printf("The copied string is %s",copy);


}
