#include <stdio.h>
#include <string.h>
int main()
{
char str[30];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")] = '\0';
int i,j,len;
len = strlen(str);
int freq[len];
int count;
for (i=0;i<len;i++)
{
  freq[i] = 0;
}
for (i=0;i<len;i++)
{
  count = 1;
  if (freq[i] == 0)
  {
    for (j=i+1;j<len;j++)
    {
      if (str[i] == str[j])
      {
        freq[j] = -1;
        count++;
      }
    }
    freq[i] = count;
  }
}
for (i=0;i<len;i++)
{
  if (freq[i]>0)
  {
    printf("Frequency of %c is %d\n",str[i],freq[i]);
  }
}

}
