#include <stdio.h>
#include <string.h>
int main()
{
char str[30];
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
    for (j=i+1;str[j]!=0;j++)
    {
      if (str[i]==str[j])
      {
        count++;
        freq[j] = -1;
      }
    }
    freq[i] = count;
  }
}
int largest = 0;
int index;
for (i=0;i<str[i]!='\0';i++)
{
  if (freq[i]>largest)
  {
    largest = freq[i];
    index = i;
  }
}
for (i=0;i<str[i]!='\0';i++)
{
  if (i==index)
  {
    printf("The high frequency character in the string is %c",str[i]);
  }
}


}
