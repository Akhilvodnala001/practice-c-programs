#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
int freq[strlen(str)];
int i,j,count;
for (i=0;str[i]!='\0';i++)
{
  freq[i] = 0;
}
for (i=0;str[i]!='\0';i++)
{
  if (freq[i]==0)
  {
    count = 1;
    for (j=0;str[j]!=0;j++)
    {
      if (str[i]==str[j])
      {
        count++;
        freq[j] = -1;
      }
    }
    freq[i]=count;
  }
}
int minFreq = strlen(str) + 1;
for (i = 0; str[i]!='\0'; i++) 
{
    if (freq[i] > 0 && freq[i] < minFreq) 
    {
        minFreq = freq[i];
    }
}

// Print characters with min frequency
printf("Lowest frequency character(s): ");
for (i = 0; i < str[i]!='\0'; i++) 
{
    if (freq[i] == minFreq) 
    {
        printf("%c ", str[i]);
    }
  }
}
