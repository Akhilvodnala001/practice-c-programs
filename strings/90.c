#include <stdio.h>
#include <string.h>
char* stratr_r(char str[],char sub[])
{
  if (strlen(str)<strlen(sub))
  {
    return NULL;
  }
  else
  {
    char *ptr;
    ptr = str;
    int i,j,flag = 0;
    for (i=0;i<strlen(str);i++)
    {
      for (j=0;j<strlen(sub);j++)
      {
        if (str[i+j] != sub[j])
        {
          break;
        }
      }
      if (j == strlen(sub))
      {
        flag = 1;
        ptr = &str[i];
      }
    }
    if (flag == 0)
    {
      return NULL;
    }
    else
    {
      return ptr;
    }
  } 
}
int main()
{
  char str[100];
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  
  char sub[100];
  fgets(sub,sizeof(sub),stdin);
  sub[strcspn(sub,"\n")]='\0';
  
  char *ptr;
  ptr = stratr_r(str,sub);
  if (ptr == NULL)
  {
    printf("Not Found!");
  }
  else
  {
    printf("Last occurrence found at %p",ptr);
  }
}
