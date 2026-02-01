#include <stdio.h>
#include <string.h>
int main()
{
char str[30];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
int i,vowel=0,consonant=0;
for (i=0;i<str[i]!='\0';i++)
{
  if ((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'|| str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U')
    {
      vowel++;
    }
    else
    {
      consonant++;
    }
  }
}
printf("\nNo.of vowels in the string is %d\n",vowel);
printf("No.of consonants in the string is %d\n",consonant);
}
