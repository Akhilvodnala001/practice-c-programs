#include <stdio.h>
#include <string.h>
char* exstract(char [],int,int);
int main()
{
  char str[100];
  printf("Enter the string: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  int n;
  printf("Enter the starting index of the word: ");
  scanf("%d",&n);
  int len;
  printf("Enter the length of the word: ");
  scanf("%d",&len);
  char *result = exstract(str,n,len);
  printf("%s",result);
}
char* exstract(char str[],int n,int len)
{
  int i,k=0;
  static char result[30];
  for (i=n;i<n+len && str[i]!='\0';i++)
  {
    result[k] = str[i];
    k++;
  }
  result[k] = '\0';
  return result;
}
