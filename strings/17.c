#include <stdio.h>
#include <string.h>
int main()
{
char str[30];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")] = '\0';
int i,j=0,len,count = 0;
len = strlen(str);
for (i=0;i<len;i++)
{
  if (((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)) == 1)
  {
    str[j] = str[i];
    j++;
  }
}
str[j] = '\0';
printf("%s",str);



}
