#include <stdio.h>
#include <string.h>
int main()
{
char str[30];
int freq[30];
int i,j,len;
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
len = strlen(str);
for (i=0;i<len-1;i++)
{
  freq[i] = 0;
}
int count;
for (i=0;i<len-1;i++)
{
  count = 0;
  if (freq[i] == 0)
  {
    for (j=i+1;j<len-1;j++)
    {
      if (str[i] == str[j])
      {
        freq[j]=-1;
        count++;
      }
      freq[i] = count;
    }
  }
}
int max = 0;
char result;
for (i=0;i<len-1;i++)
{
  if (freq[i]>max)
  {
    max = freq[i];
    result = str[i];
  }
}
printf("The highest times occurred character in the string is %c",result);
}
