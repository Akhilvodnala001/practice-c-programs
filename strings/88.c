#include <stdio.h>
#include <string.h>
void spacerem(char []);
int main()
{
  char str[100];
  printf("Enter the string: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  spacerem(str);
  printf("%s",str);
}
void spacerem(char str[])
{
  int i,j;
  for (i=0;str[i]!='\0';i++)
  {
    if ((str[i]== ' ') && (str[i+1]==' '))
    {
      for (j=i;str[j]!='\0';j++)
      {
        str[j] = str[j+1];
      }
      i--;
    } 
  }
}
