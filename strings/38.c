#include <stdio.h>
#include <string.h>
int main()
{
char str[30];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")] = '\0';
int i,j=0,len,k=0;
len = strlen(str);
char vowel[len];
for (i=0;i<len;i++)
{
  if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'|| str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U')
  {
    vowel[k] = str[i];
    k++;
  }
}
for (i=0;i<len;i++)
{
  if (str[len-i-1] == 'a' || str[len-i-1] == 'e' || str[len-i-1] == 'i'|| str[len-i-1] == 'o'|| str[len-i-1] == 'u'|| str[len-i-1] == 'A'|| str[len-i-1] == 'E'|| str[len-i-1] == 'I'|| str[len-i-1] == 'O'|| str[len-i-1] == 'U')
  {
    str[len-i-1] = vowel[j];
    j++;
  }
}

printf("The modified string: %s",str);
}
