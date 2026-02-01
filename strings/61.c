#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
int freq[strlen(str)];
int i,j;
for (i=0;str[i]!='\0';i++)
{
  freq[i] = 0;
}
for (i=0;str[i]!='\0';i++)
{
  if (freq[i] == 0)
  {
    int count = 1;
    for (j=i+1;str[j]!=0;j++)
    {
      if (str[i] == str[j])
      {
        count++;
        freq[j]=-1;
      }
    }
    freq[i]=count;
  }
}
for (i=0;str[i]!='\0';i++)
{
  if (freq[i]!=-1)
  {
    printf("Frequency of %c is %d\n",str[i],freq[i]);
  }
}

}
