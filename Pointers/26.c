#include <stdio.h>
#include <string.h>
int compare(char str1[],char str2[])
{
  if (strlen(str1)!=strlen(str2))
  {
    return 1;
  }
  char *cptr1 = str1;
  char *cptr2 = str2;
  while (*cptr1 != '\0')
  {
    if (*cptr1 != *cptr2)
    {
      return 1;
    }
    cptr1++;
    cptr2++;
  }
  return 0;
  
}
int main()
{
  char str1[100];
  printf("Enter the string-1: ");
  fgets(str1,sizeof(str1),stdin);
  str1[strcspn(str1,"\n")]='\0';
  
  char str2[100];
  printf("Enter the string-2: ");
  fgets(str2,sizeof(str2),stdin);
  str2[strcspn(str2,"\n")]='\0';
  
  if (compare(str1,str2) == 0)
  {
    printf("Same!");
  }
  else
  {
    printf("Not same!");
  }

}
