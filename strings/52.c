#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
int i=0,len;
len = strlen(str);
len = len-1;
for (i=0;i<(len)/2;i++)
{
  int temp = str[i];
  str[i] = str[len-i-1];
  str[len-i-1] = temp;
}
printf("The reverse string is %s",str);


}
