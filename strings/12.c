#include <stdio.h>
#include <string.h>
int main()
{
char str[30];
printf("Enter a string: ");
fgets(str,sizeof(str),stdin);
int i,j,len;
len = strlen(str);
len = len - 1; //To eliminate newline character...
for (i=0;i<len-1;i++)
{
  for (j=0;j<len-i-1;j++)
  {
    if (str[j] > str[j+1])
    {
      int temp = str[j];
      str[j] = str[j+1];
      str[j+1] = temp;
    }
  }
}
printf("%s",str);

}
