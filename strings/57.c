#include <stdio.h>
#include <string.h>
int main()
{
char str[30];
int i,k=0,arr[30];
char ch;
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';

printf("Enter the character: ");
scanf("%c",&ch);
for (i=0;str[i]!='\0';i++)
{
  if (str[i] == ch)
  {
    arr[k] = i;
    k++;
  }
}
printf("All occurrances of %c in the string are ",ch);
for (i=0;i<k;i++)
{
  printf("%d ",arr[i]);
}
}
