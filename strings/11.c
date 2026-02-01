#include <stdio.h>
#include <string.h>
int main()
{
char str[30];
int i,j,len;
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
len = strlen(str);
for (i=0;i<len-1;i++)
{
  for (j=i+1;j<len-1;j++)
  {
    if (str[i]>str[j])
    {
      char temp = str[i];
      str[i] = str[j];
      str[j] = temp;
    }
  }
}
printf("The given string in ascending order based on the ascii value is %s",str);
}
