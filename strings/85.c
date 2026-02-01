#include <stdio.h>
#include <string.h>
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
    if ((str[i]>=65 && str[i]<=90) && (str[j]>=65 && str[j]<=90))
    {
      if (str[i]>str[j])
      {
        char temp = str[j];
        str[j] = str[i];
        str[i] = temp;
      }
    }
    else if((str[i]>=65 && str[i]<=90) && (str[j]>=97 && str[j]<=122))
    {
      if (str[i]>(str[j]-32))
      {
        char temp = str[j];
        str[j] = str[i];
        str[i] = temp;
      }
    }
    else if((str[i]>=97 && str[i]<=122) && (str[j]>=97 && str[j]<=122))
    {
      if (str[i]>(str[j]))
      {
        char temp = str[j];
        str[j] = str[i];
        str[i] = temp;
      }
    }
    else if((str[i]>=97 && str[i]<=122) && (str[j]>=65 && str[j]<=90))
    {
      if ((str[i]-32)>(str[j]))
      {
        char temp = str[j];
        str[j] = str[i];
        str[i] = temp;
      }
    }
  }
}
printf("The modified string is %s",str);

}
