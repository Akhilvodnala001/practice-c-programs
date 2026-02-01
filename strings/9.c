#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char str[30];
  int i,len,vowel = 0,consonant = 0;
  printf("Enter your string: ");
  fgets(str,sizeof(str),stdin);
  len = strlen(str);
  for (i=0;i<len;i++)
  {
    if (isalpha(str[i]))
    {
      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
      {
        vowel++;
      }
      else
      {
        consonant++;
      }
    }
  }
  printf("No.of vowels: %d\n",vowel);
  printf("No.of consonants: %d\n",consonant);
}
