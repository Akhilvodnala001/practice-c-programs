#include <stdio.h>
#include <string.h>
int main()
{
char str[30];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")] = '\0';
int i,len,count = 0;
len = strlen(str);
for (i=0;i<len;i++)
{
  if ((str[i]>=33 && str[i]<=47) || (str[i]>=58 && str[i]<=64) || (str[i]>=91 && str[i]<=96) || (str[i]>=123 && str[i]<=127))
  {
    count++;
  }
}
printf("No.of punctuation characters in the given string is %d",count);

}
