#include <stdio.h>
#include <string.h>
void reverse(char str[])
{
  int len = strlen(str);
  char *start = str;
  char *end = str + len - 1;
  while (start<end)
  {
    char temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
}
int main()
{
  int i;
  char str[100];
  printf("Enter the string: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  reverse(str);
  printf("%s",str);


}
