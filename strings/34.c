#include <stdio.h>
#include <string.h>
int main()
{
char str[30];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")] = '\0';
int i,len;
len = strlen(str);
for (i=0;i<len;i++)
{ 
  if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
  {
    str[i] = str[i]-32;
  }
}
printf("%s",str);

}
