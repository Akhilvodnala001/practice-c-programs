#include <stdio.h>
#include <string.h>
char *mystrstr(char *str,char *src)
{
  int i,j,k;
  int lstr = 0;
  int lsrc = 0;
  for (i=0;str[i]!='\0';i++)
  {
    lstr++;
  }
  for (i=0;src[i]!='\0';i++)
  {
    lsrc++;
  }
  if (lstr<lsrc)
  {
    return NULL;
  }
  int found;
  for (i=0;i<lstr;i++)
  {
    found = 1;
    for (j=0;j<lsrc;j++)
    {
      if (str[i] == src[j])
      {
        int p = 0;
        for (k=i;k<(lsrc+j);k++)
        {
          if (str[k]!=src[p++])
          {
            found = 0;
            break;
          }
        }
      }
      else
      {
        found = 0;
      }
      if (found)
      {
        return &str[i];
      }
    }
  }
  return NULL;
  
}
int main()
{
  char str[200];
  printf("Enter the string: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")] = '\0';

  char srch[100];
  printf("Enter the string to be searched in the above sentence: ");
  fgets(srch,sizeof(srch),stdin);
  srch[strcspn(srch,"\n")] = '\0';
  
  char *ptr = mystrstr(str,srch);
  if (ptr == NULL)
  {
    printf("Not found!");
  }
  else
  {
    printf("Found at index %ld\n",ptr-str);
  }
}
