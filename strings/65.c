#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
int i,j,k;
for (i=0;str[i]!='\0';i++)
{
  for (j=i+1;str[j]!='\0';j++)
  {
    if (str[i]==str[j])
    {
      for (k = j; str[k] != '\0'; k++) 
      {
        str[k] = str[k + 1];
      }
      j--;
    }
  }
}
printf("The modified string is %s",str);
}
