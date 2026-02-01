#include <stdio.h>
#include <string.h>
int main()
{
char str[300];
char sub[30];
printf("Enter the main string: ");
fgets(str,sizeof(str),stdin);
printf("Enter the sub-string: ");
fgets(sub,sizeof(sub),stdin);
int i,j,len1,len2;
str[strcspn(str,"\n")] = '\0';
sub[strcspn(sub,"\n")] = '\0';
len1 = strlen(str);
len2 = strlen(sub);
int count=0,found = 0;
for (i=0;i<len1;i++)
{
  found = 1;
  for (j=0;j<len2;j++)
  {
    if (str[i+j] != sub[j])
    {
      found = 0;
      break;
    }
  }
  if (found == 1)
  {
    count++;
  }
}
printf("The given sub-string appeared %d times in the main string...",count);



}
