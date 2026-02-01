#include <stdio.h>
#include <string.h>
int main()
{
char str[30];
char sub[30];
printf("Enter the main string: ");
fgets(str,sizeof(str),stdin);
printf("Enter the sub-string: ");
fgets(sub,sizeof(sub),stdin);
int i,j,len1,len2;
str[strcspn(str, "\n")] = '\0';
sub[strcspn(sub, "\n")] = '\0';
len1 = strlen(str);
len2 = strlen(sub);
int found = 1;
for (i=0;i<=len1-len2;i++)
{
  found = 0;
  for (j=0;j<len2;j++)
  {
    if (str[i+j] != sub[j])
    {
      found = 1;
      break;
    }
  }
  if (found == 0)
  {
    break;
  }
}
if (found == 0)
{
  printf("Sub-string is found in the main-string..");
}
else
{
  printf("Substring is not found in the main string...");
}
}
