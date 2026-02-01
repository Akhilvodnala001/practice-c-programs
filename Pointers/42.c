#include <stdio.h>
#include <string.h>
void concat(char *ptr1,char *ptr2)
{
  int i = 0;
  char *p = ptr1;
  while ((*p)!='\0')
  {
    p++;
    i++;
  }
  char *q = ptr1+i;
  char *m = ptr2;
  while ((*m)!='\0')
  {
    *q = *m;
    q++;
    m++;
  }
  *q = '\0';
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
  
  concat(str1,str2);
  printf("The concatenated string is %s",str1);

}
